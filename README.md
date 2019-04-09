# Proje-2-Android-kontrollu-akilli-ev-sistemi-
 <br>
<h2>Projenin genel tanımı ve amacı</h2><br>
<br> 
Akıllı Ev Sistemi, nano teknoloji ev otomasyonu ile geliştirilen bir kontrol sistemidir. Bu sistem, evlerde hem büyük bir konfor, hem de güvenlik sağlar. Sistemlerin kontrolü, ayrı ayrı kumandalar yerine, görsel bir paneli bulunan Web  aracılığıyla yapılmıştır.Aynı zamanda
Android kullanılarak proje gerçekleşimi sağlanmıştır.Proje kontrol yapısını dünyanın her yerine ulaştırmada kolaylık sağlamıştır
<br>
 <br>
 <br>
<p>
<img align="center" width="500" height="300" src="https://user-images.githubusercontent.com/43750173/55800518-92942c80-5adc-11e9-8779-9eccba123938.jpg">
</p>

<h2>Kullanılan teknolojiler</h2><br>
Arduino bir G/Ç kartı ve Processing/Wiring dilinin bir uygulamasını içeren geliştirme ortamından oluşan bir fiziksel programlama platformudur. 
Arduino kartlarının donanımında bir adet Atmel AVR mikrodenetleyici (ATmega328, ATmega2560, ATmega32u4 gibi) ve programlama ve diğer devrelere bağlantı için gerekli yan elemanlar bulunur. Her Arduino kartında en azından bir 5 voltluk regüle entegresi ve bir 16MHz kristal osilator (bazılarında seramik rezonatör) vardır. Arduino kartlarında programlama için harici bir programlayıcıya ihtiyaç duyulmaz, çünkü karttaki mikrodenetleyiciye önceden bir bootloader programı yazılıdır.
&nbsp;&nbsp;&nbsp;&nbsp;<p>
<img align="left" width="350" height="300" src="https://user-images.githubusercontent.com/43750173/55804397-e4d94b80-5ae4-11e9-95ca-273292ef796f.jpg" >
 <img align="center" width="350" height="300" src="https://user-images.githubusercontent.com/43750173/55804571-3bdf2080-5ae5-11e9-923a-3e561e9b91b8.jpg">
</p>
<br>
<br>
Kontrol için ;<br>
Android Studio 2.2; telefonlar ve tabletler, Android Auto, Android Wear ve Android TV de dahil olmak üzere her türlü Android cihazda çalışan yüksek kalitede, başarılı sonuçlar veren uygulamalar geliştirmek için en hızlı araçları sağlar. 
<h2>Sistem bileşen diyagramı</h2><br><br><br>Sistem bileşen diyagramı<br><br><br>
 <img align="center" width="800" height="400" src="https://user-images.githubusercontent.com/43750173/55799447-1862a880-5ada-11e9-97e6-6d75d7fcd065.jpg"><br><br><br>
<h2>Projenin Uygulama Aşamaları</h2><br><br>
<h2>Proje Prototipleri</h2><br>
<img align="center" width="500" height="300" src="https://user-images.githubusercontent.com/43750173/55804733-96787c80-5ae5-11e9-9604-22cf10a902d5.PNG">
<br><br>
			<h2>	Genymation Ortamı <h2>
<br><p>
<img align="left" width="300" height="250" src="https://user-images.githubusercontent.com/43750173/55804839-cc1d6580-5ae5-11e9-80dd-18fa8135a3ca.png" >
</p>
1.Esp8266 Kullanımı<br><br>
ESP8266 modülünden biraz bahsetmek gerekirse, modül hem kablosuz ağlara bağlanabiliyor hem de kablosuz ağ erişim noktası kurabiliyor. Bunun yanında modül kendi işlemcisine sahip olduğundan üzerindeki giriş çıkış pinleri de kullanılabilmektedir. Yani ek olarak Arduino benzeri bir mikrokontrolcü kartı kullanmadan da sadece modülü kullanarak projeler gerçekleştirebilmek mümkün.
<img align="left" width="300" height="250" src="https://user-images.githubusercontent.com/43750173/55804948-1b639600-5ae6-11e9-810f-05bebe0c99b3.png" >
<br>
<br>
2.Role KullanımıRöle üzerinden akım geçtiği zaman çalışan elektromanyetik bir devre elemanıdır. Röleler küçük değerli bir akım ile yüksek güçlü bir alıcıyı anahtarlayabilmek için kullanılır.
 <br>
<br>
<img align="left" width="300" height="250" src="https://user-images.githubusercontent.com/43750173/55804948-1b639600-5ae6-11e9-810f-05bebe0c99b3.png" >
<img align="left" width="500" height="300" src="https://user-images.githubusercontent.com/43750173/55800510-9031d280-5adc-11e9-8bef-d6f38e31d98a.PNG" ><br> <br>Butonlardan gelen bilgiler flaskaap.py dosyasında route edilir ilgli link'den database güncellenir.<br><br>
Database bağlantısı SQLİTE veritabana bağlantısı kullanılarak  databaseteki  ilgili yerler açık veya kapalı olarak değiştirilmiştir!
 <br>
 <br>


 
 <br>
 <br>
  <br>
 <br>SQLİTE ve sayfa yapısındaki durumlar resimle gösterilmiştir!<br>
  <br><br>
  
 <img align="center" width="800" height="300" src="https://user-images.githubusercontent.com/43750173/55800509-8f993c00-5adc-11e9-9f96-647fd7892045.PNG" >
 <br>
 <br>
 Raspberry pi GPIO kütüphaneleriyle gerekli emulatör kurulmuştur.Test için gerekli dosyalar sayfa yapısında bulunmaktadır.Veritabanında bulunan eşyalara göre GPIO giriş çıkışları sağlanarak emulatör de test ortamı kurulmuştur.<br>
 <br>
 <br>

 <img align="left" width="600" height="300" src="https://user-images.githubusercontent.com/43750173/55800526-958f1d00-5adc-11e9-94bc-b74b2f31847b.PNG" > Gerekli pin tanımlamaları her bir led ev eşyası düşünülerek ikişer butonla açma kapama işlemi yapılmış ve veri tabanına aktarılmıştır.<br>
  
 <br>
 <br>
Butonlar yardımı ile kapatıp açma usulü led ile düşünülerek iki buton yardımı ile açma kapama işlemi gerçekleştirilmiştir! <br>
 <br>
 <br>
<br>Aynı zamanda internet üzerinde güncellemesi de sayfa yardımıyla 3 'er saniye aralıklarla güncellenerek gösterilmiştir!
<br>
 <br><br>
<p>
 <img align="center" width="800" height="400" src="https://user-images.githubusercontent.com/43750173/55800514-92942c80-5adc-11e9-8e44-f672f1a94ff6.PNG">
</p><br><br><br>
<h2>Proje Sonuçları</h2> 
 <br>
<br> <br>
 Akıllı Ev Sistemi, web teknoloji ev otomasyonu ile geliştirilip veritabanına aktarılmıştır.İlk önce web sitesi üzerinde güncelleme yapıldı daha sonra raspberri pi üzerinde yapıldı en son iki uygulama aynı projede birleştirildi!En çok web sitesi üzerinden Emulatöre erişim de sıkıntı yaşandı yapılan diğer işlemler başarıyla gerçekleştirildi. 
 <br>
<br> <br>
 <img align="center" width="850" height="500" src="https://user-images.githubusercontent.com/43750173/55800513-91fb9600-5adc-11e9-9059-5aab7bd5721f.PNG">
