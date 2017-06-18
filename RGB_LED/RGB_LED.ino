const int res = 0;
const int red = 1;
const int green = 2;
const int blue = 3;

int val = 0;
void setup() {
  pinMode(res, INPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(res);
  val = map(val, 0, 10000, 0, 255);
  Serial.println(val);

}
