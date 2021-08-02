
<!doctype html>
<html lang="en">
<head>
    
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
<style>

* {
  box-sizing: border-box;
}

body {
  margin: 0;
  font-family: Arial, Helvetica, sans-serif;
}

.header {
  text-align: center;
  padding: 32px;
}

.row {
  display: -ms-flexbox; /* IE 10 */
  display: flex;
  -ms-flex-wrap: wrap; /* IE 10 */
  flex-wrap: wrap;
  padding: 0 4px;
}

/* Create two equal columns that sits next to each other */
.column {
  -ms-flex: 50%; /* IE 10 */
  flex: 50%;
  padding: 0 4px;
}

.column img {
  margin-top: 8px;
  vertical-align: middle;
}

/* Style the buttons */
.btn {
  border: none;
  outline: none;
  padding: 10px 16px;
  background-color: #f1f1f1;
  cursor: pointer;
  font-size: 18px;
}

.btn:hover {
  background-color: #ddd;
}

.btn.active {
  background-color: #666;
  color: white;
}
</style>
  <meta charset="utf-8">
  <title>Odev</title>
  <base href="/">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="icon" type="image/x-icon" href="favicon.ico">
  <style>
    body {font-family: "Lato", sans-serif;}
    
    .tablink {
      background-color: #555;
      color: blackS;
      float: left;
      border: none;
      outline: none;
      cursor: pointer;
      padding: 14px 16px;
      font-size: 17px;
      width: 25%;
    }
    
    .tablink:hover {
      background-color: #777;
    }
    
    /* Style the tab content */
    .tabcontent {
      color: black;
      display: none;
      padding: 50px;
      text-align: center;
    }
    
    #AnaSayfa {background-color:rosybrown;}
    #Hakkimda {background-color:greenyellow;}
    #Iletisim {background-color:palegreen;}
    #SosyalMedya {background-color:khaki;}
    </style>
</head>
<body>
  

  <div id="AnaSayfa" class="tabcontent">
    <h1>Ana Sayfa</h1>
    <p>Benim Kişisel Blogum</p>
  </div>
  
  <div id="Hakkimda" class="tabcontent">
    <h1>Hakkımda</h1>
    <p>2001 yılında Ankara'da Dünyaya gelmiş ve hayatına devam eden bir garip...</p> 
    <a href="src/app/hakkimda/hakkimda.component.html"></a>
  </div>
  
  <div id="Iletisim" class="tabcontent">
    <h1>İletişim</h1>
    <p>+905458640106</p>
  </div>
  
  <div id="SosyalMedya" class="tabcontent">
    <h1>İnstagram</h1>
    <p>@mertcagli</p>
  </div>
  
  <button class="tablink" onclick="openCity('AnaSayfa', this, 'rosybrown')" id="defaultOpen">Ana Sayfa</button>
  <button class="tablink" onclick="openCity('Hakkimda', this, 'greenyellow')">Hakkımda</button>
  <button class="tablink" onclick="openCity('Iletisim', this, 'palegreen')"><a href ="/MyFirstLesson/src/app/iletisim/iletisim.component.html">İletişim</a></button>
  <button class="tablink" onclick="openCity('SosyalMedya', this, 'khaki')">Sosyal Medya</button>
  

  <!-- Header -->
<div class="header" id="myHeader">
  </div>
  
  <!-- Photo Grid -->
  <div class="row"> 
    <div class="column">
      <img src="/MyFirstLesson/src/app/foto/mert1.jpeg" style="width: 300px;">
      <img src="/MyFirstLesson/src/app/foto/mert2.jpeg" style="width: 300px;">
      <img src="/MyFirstLesson/src/app/foto/mert3.jpeg" style="width: 300px;">
    </div>
  <script>
  function openCity(cityName,elmnt,color) {
    var i, tabcontent, tablinks;
    tabcontent = document.getElementsByClassName("tabcontent");
    for (i = 0; i < tabcontent.length; i++) {
      tabcontent[i].style.display = "none";
    }
    tablinks = document.getElementsByClassName("tablink");
    for (i = 0; i < tablinks.length; i++) {
      tablinks[i].style.backgroundColor = "";
    }
    document.getElementById(cityName).style.display = "block";
    elmnt.style.backgroundColor = color;
  
  }
  
  document.getElementById("defaultOpen").click();
  
  </script>
  <br>
  <br>
  <br>
  <br>
  <br>

  <p><b>Sayfama Hepiniz Hoşgeldiniz :)</b> <br> Yukarıdaki Menülerden İletişim , Hakkında ve Sosyal Medyama Erişebilirsiniz</p>
  <app-root></app-root>
</body>
</html>
