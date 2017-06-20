    
int res = A0;
int red = 2;
int green = 3;
int blue = 4;

int val = 0;
int output = 0;
int RedBrightness = 0;
int GreenBrightness = 0;
int BlueBrightness = 0;
void setup() {
  pinMode(res, INPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
}

void loop() {
 val = analogRead(res);
  output = map(val, 0, 1023, 255, 0);
  Serial.println(output);
  
  if (output >= 0 && output <= 96) {
    RedBrightness = map(output, 0, 96, 255, 0);
    analogWrite(red, RedBrightness);
    GreenBrightness = map(output, 0, 96, 0, 255);
    analogWrite(green, GreenBrightness); 
  }

  else if (output >= 97 && output <= 160) {
    GreenBrightness = map(output, 97, 160, 255, 0);
    analogWrite(green, GreenBrightness);
    BlueBrightness = map(output, 97, 160, 0, 255);
    analogWrite(blue, BlueBrightness);
  }
  
  else if (output >= 161 && output <= 255) {
    BlueBrightness = map(output, 161, 255, 255, 0);
    analogWrite(blue, BlueBrightness);
    RedBrightness = map(output, 161, 255, 0, 255);
    analogWrite(red, RedBrightness);
  }  
  delay(2);
}









