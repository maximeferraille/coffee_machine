class Drink {
    public:
        Drink()
        {
            name = "Café";
            type = "Café";
            liquide = "Eau";
            delais = 3000;
            prix = 0.80;
            state = "";
        };

    public:
        String name;
        String type;
        String state;
        String liquide;
        float delais;
        float prix;
};

#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

float monney     = 0.0;
int sugar        = 1;
String next_step = "monney";

enum {
  BUTTON_NONE,  /*!< There is no button push */
  BUTTON_ONE_EURO,    /*!< Bouton UP */
  BUTTON_TWO_EURO,  /*!< Bouton DOWN */
  BUTTON_SUGARMINUS,  /*!< Bouton LEFT */
  BUTTON_SUGARPLUS, /*!< Bouton RIGHT */
  BUTTON_SELECT /*!< Bouton SELECT */
};

// RGB LED PIN
const byte PIN_LED_R = 7;
const byte PIN_LED_G = 6;
const byte PIN_LED_B = 5;

// UNIQUE LED PIN
const byte PIN_LED_GREEN = 4;

// PUSH BUTTON PIN
const byte PUSH_BTN1 = 1;
const byte PUSH_BTN2 = 2;
const byte PUSH_BTN3 = 3;

Drink *cafe_court;
Drink *cafe_long;
Drink *cafe_lait;
Drink *chocolat;

void setup() {
  cafe_court = new Drink();
  cafe_long  = new Drink();
  cafe_lait  = new Drink();
  
  cafe_court->name = "Café Court";
  cafe_court->delais = 1000;

  cafe_long->name = "Café long";

  cafe_lait->name = "Café au lait";
  cafe_lait->liquide = "lait";
 
 
  // INIT RGB LED
  pinMode(PIN_LED_R, OUTPUT);
  pinMode(PIN_LED_G, OUTPUT);
  pinMode(PIN_LED_B, OUTPUT);

  // INIT UNIQUE LED
  pinMode(PIN_LED_GREEN, OUTPUT);

  // INIT PUSH BUTTON
  pinMode(PUSH_BTN1, INPUT);
  pinMode(PUSH_BTN2, INPUT);
  pinMode(PUSH_BTN3, INPUT);
  
  // INIT LCD
  lcd.begin(16, 2);
  lcd.print("Monnaie : ");
  lcd.setCursor(0, 1);
  lcd.print(monney);
}

void loop() {
  while(next_step == "monney"){
    lcd.setCursor(0, 1);
    switch (getPressedButton()) {
      case BUTTON_ONE_EURO:
        monney += 1;
        lcd.print(monney);
        delay(100);
        break;
      
      case BUTTON_TWO_EURO:
        monney += 2;
        lcd.print(monney);
        delay(100);
        break;
  
      case BUTTON_SELECT:
        next_step = "sugar";
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Sucre : ");
        break;
     }
  }

  while(next_step == "sugar") {
    lcd.setCursor(0, 1);
    switch (getPressedButton()) {
        case BUTTON_SUGARMINUS:
            sugar -= 1; 
            if (sugar < 0 ) {
              sugar = 0;
            }
          break;

        case BUTTON_SUGARPLUS:
          sugar += 1; 
            if (sugar > 10 ) {
              sugar = 10;
            }
          break;
    }
    lcd.print(sugar);
  }
 }

/* while(next_sep == "drink" (
    cafe_lait->state = digitalRead(PUSH_BTN1);
    cafe_long->state = digitalRead(PUSH_BTN2);
    cafe_court->state = digitalRead(PUSH_BTN3);
}*/

byte getPressedButton() {

  /* Read button state */
  int value = analogRead(A0);

  /* Calc button state */
  if (value < 50)
    return BUTTON_SUGARPLUS;
  else if (value < 195)
    return BUTTON_ONE_EURO;
  else if (value < 380)
    return BUTTON_TWO_EURO;
  else if (value < 555)
    return BUTTON_SUGARMINUS;
  else if (value < 790)
    return BUTTON_SELECT;
  else
    return BUTTON_NONE;
}

void displayColor(byte r, byte g, byte b) {
  analogWrite(PIN_LED_R, ~r);
  analogWrite(PIN_LED_G, ~g);
  analogWrite(PIN_LED_B, ~b);
}

