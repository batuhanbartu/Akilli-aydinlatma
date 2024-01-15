int led = 3; // LED için kullanılacak pin numarasını tanımlar

void setup() {
  Serial.begin(9600); // Seri iletişim başlatılır, baud hızı 9600 olarak ayarlanır
  pinMode(led, OUTPUT); // LED pinini çıkış modunda ayarlar
}

void loop() {
  int ldr_sensor_deger = analogRead(A0); // A0 pininden LDR sensörünün analog değerini okur
  Serial.println(ldr_sensor_deger); // LDR sensör değerini seri port üzerinden bilgisayara gönderir

  if (ldr_sensor_deger <= 250) { 
    digitalWrite(led, HIGH); // Eğer LDR sensör değeri 250'den küçük veya eşitse, LED'i yak
  } 
  else {
    digitalWrite(led, LOW); // Değilse, LED'i söndür
  }

  delay(500); // 500 milisaniye bekleme süresi ekler (yarım saniye)
}
