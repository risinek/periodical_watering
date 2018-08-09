//pin pro ovladani pumpy - HIGH zapnuto, LOW vypnuto
const int pumpOutput = 2;
//hodnota zpozdeni mezi merenim
const unsigned long WATERING_DELAY_MS = 21600000;
const unsigned long WATERING_TIME_MS = 5;

void setup() {
  //open serial communication using standard 9600 bauds
  Serial.begin(9600);
  Serial.println("Periodical watering");

  pinMode(pumpOutput,OUTPUT);
}

void loop() {
  Serial.println("Starting watering");
  int i = 0;
  while(i < 50){
  digitalWrite(pumpOutput, HIGH);
  delay(WATERING_TIME_MS);
  digitalWrite(pumpOutput, LOW);
  delay(15);
  i++;
  }
  Serial.println("Watering stopped");
  delay(WATERING_DELAY_MS);
}


void startPump(){
  digitalWrite(pumpOutput, HIGH);
}

void stopPump(){
  digitalWrite(pumpOutput, LOW);
}


