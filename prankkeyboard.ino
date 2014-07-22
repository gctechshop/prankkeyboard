void setup() 
{
  randomSeed(analogRead(0));
  delay(1500);
}

void loop() 
{
  char randomChar = random(4, 130);
  long randomDelay = random(1000, 10000);

  delay(randomDelay);

  Keyboard.print(randomChar);

  delay(1000);

  Mouse.move(0, random(10, 300));
  delay(200);
  Mouse.move(random(10, 300), 0);
  delay(200);
  Mouse.move(0, random(-300, -10));
  delay(200);
  Mouse.move(random(-300, -10), 0);
  delay(200);
}
