Amaç:
Bu projenin amacı, ortam ışık seviyesini algılayarak ortam karanlık olduğunda bir lambayı otomatik olarak açmak ve ışık seviyesi arttığında lambayı kapatmak için bir akıllı aydınlatma sistemi oluşturmaktır. Bu sistem, enerji verimliliği sağlayarak kullanıcının ışık ayarlamasıyla ilgili ihtiyaçları otomatik olarak karşılamayı hedeflemektedir.

Kullanılan Malzemeler:

•	Arduino UNO: Projenin merkezi işlem birimi olarak kullanıldı.
![image](https://github.com/batuhanbartu/Akilli-aydinlatma/assets/96166551/2e6f7109-63c0-42c5-86af-fb0fceabc207)
•	Breadboard:
Devre elemanlarının bağlantılarını sağlamak için kullanıldı.
![image](https://github.com/batuhanbartu/Akilli-aydinlatma/assets/96166551/fd495b6e-8ba3-47fb-8c79-9cea81273c11)

•	LED (Light Emitting Diode): Projenin anahtarlama özelliğini temsil etmek için kullanıldı.

![image](https://github.com/batuhanbartu/Akilli-aydinlatma/assets/96166551/8d06adc2-b961-43c8-8149-3ce19a8298cf)

•	LDR (Light Dependent Resistor):
Ortam ışık seviyesini algılamak için kullanıldı.

![image](https://github.com/batuhanbartu/Akilli-aydinlatma/assets/96166551/3fd8be1f-bb26-426e-9736-e68eec613ef9)

•	2 adet 330 Ohm Direnç: 
LDR'nin devreye entegre edilmesi için kullanıldı.

![image](https://github.com/batuhanbartu/Akilli-aydinlatma/assets/96166551/f38f3694-4e27-420d-8a38-fcd808116fc0)
![image](https://github.com/batuhanbartu/Akilli-aydinlatma/assets/96166551/801e844e-5626-4273-ad78-50a140f25f93)

•	Erkek-Erkek Jumper Kablolar:
Bağlantıların yapılmasında kullanıldı.



Devre Kurulumu:

Arduino UNO, LDR'nin değerini analog olarak okumak için kullanıldı. LDR, ortam ışığı seviyesine bağlı olarak direnç değerini değiştirir. Bu değişiklik, Arduino UNO tarafından okunur. LDR, iki dirençle birlikte bir gerilim bölücü devresi oluşturularak Arduino'ya bağlandı. Böylece analog sinyal, Arduino tarafından okunabilir hale getirildi.

![image](https://github.com/batuhanbartu/Akilli-aydinlatma/assets/96166551/8ea501d9-8d66-489f-b2d7-d375bdbc1737)
![image](https://github.com/batuhanbartu/Akilli-aydinlatma/assets/96166551/14ff64c0-1a8a-4a34-bc0d-caefa32300fd)
![image](https://github.com/batuhanbartu/Akilli-aydinlatma/assets/96166551/9d205e69-972c-414d-8549-cc138e5a4251)
![image](https://github.com/batuhanbartu/Akilli-aydinlatma/assets/96166551/31b6f227-ec7c-476b-a038-b8aebb00903b)

Yazılım ve Kodlama:

![image](https://github.com/batuhanbartu/Akilli-aydinlatma/assets/96166551/a54fe51f-3d60-424e-99c3-5ca40e51f38a)

Arduino IDE kullanılarak Arduino UNO'ya yüklenecek olan kod, LDR'den gelen analog değeri okur ve belirlenen eşik değerleriyle karşılaştırır. Eşik değer altına düştüğünde veya üstüne çıktığında, Arduino UNO, belirlenen dijital pin aracılığıyla lambayı açmak veya kapatmak için bir sinyal gönderir.


Sonuç:

Bu projenin temel amacı, ortam ışık seviyesine bağlı olarak lambanın otomatik olarak açılması ve kapanmasıdır. Proje başarıyla gerçekleştirilmiş olup, ortam ışığı değişimlerine uygun şekilde lamba kontrol edilmektedir.
