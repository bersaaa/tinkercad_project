int a=0;
int b=1;
int c=2;
int d=3;
int e=6;
int f=4;
int g=5;
int a2=7;
int b2=8;
int c2=9;
int d2=10;
int f2=11;
int g2=12;
int e2 =13;

void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(a2, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(c2, OUTPUT);
  pinMode(d2, OUTPUT);
  pinMode(e2, OUTPUT);
  pinMode(f2, OUTPUT);
  pinMode(g2, OUTPUT);
  Serial.begin(9600);
}


String dec_to_hex(int sayi)
{
    char dizi[2];
    int sayac=0;
    int numara=sayi, degisken[20], hexedecimal= 0, i = 0, j;
   while(numara>0)
    {
        degisken[i] = numara % 16;
        numara/= 16;
        i++;
    }
    for(j = i - 1 ; j >= 0 ; j--)
    {
      if(degisken[j]==10){
           dizi[sayac]='a';
            sayac ++;
      }
      else if(degisken[j]==11){
           dizi[sayac]='b';
            sayac ++;
      }
       else if(degisken[j]==12){
           dizi[sayac]='c';
            sayac ++;
      }
       else if(degisken[j]==13){
           dizi[sayac]='d';
            sayac ++;
      }
       else if(degisken[j]==14){
           dizi[sayac]='e';
            sayac ++;
      }
       else if(degisken[j]==15){
           dizi[sayac]='f';
            sayac ++;
      }
      else {
            degisken[j]=degisken[j]+'0';
            dizi[sayac]=degisken[j];
            sayac ++;
        }

    }
    return dizi;
}

void loop(){
  int ilk_iki_sayi = 18;  //Numaranizin ilk iki hanesini buradan degistirebilirsiniz.
  int son_iki_sayi = 64;  //Numaranizin son iki hanesini buradan degistirebilirsiniz.
  String gelen_1= dec_to_hex(ilk_iki_sayi).substring(0,2);
  String gelen_2= dec_to_hex(son_iki_sayi).substring(0,2);


  sayi_yaz(gelen_1);
  delay(1000);
  sayi_yaz(gelen_2);
  delay(1000);

}
void sayi_yaz(String gelen){

 if(gelen[0]=='1'){
    digitalWrite(a2, 1);
    digitalWrite(b2, 0);
    digitalWrite(c2, 0);
    digitalWrite(d2, 1);
    digitalWrite(e2, 1);
    digitalWrite(f2, 1);
    digitalWrite(g2, 1);
 }
 else if (gelen[0]=='2'){
   digitalWrite(a2, 0);
   digitalWrite(b2, 0);
   digitalWrite(c2, 1);
   digitalWrite(d2, 0);
   digitalWrite(e2, 0);
   digitalWrite(f2, 1);
   digitalWrite(g2, 0);
}
 else if(gelen[0]=='3'){
   digitalWrite(a2, 0);
   digitalWrite(b2, 0);
   digitalWrite(c2, 0);
   digitalWrite(d2, 0);
   digitalWrite(e2, 1);
   digitalWrite(f2, 1);
   digitalWrite(g2, 0);
 }
 else if(gelen[0]=='4'){
   digitalWrite(a2, 1);
   digitalWrite(b2, 0);
   digitalWrite(c2, 0);
   digitalWrite(d2, 1);
   digitalWrite(e2, 1);
   digitalWrite(f2, 0);
   digitalWrite(g2, 0);
 }
 else if(gelen[0]=='5'){
   digitalWrite(a2, 0);
   digitalWrite(b2, 1);
   digitalWrite(c2, 0);
   digitalWrite(d2, 0);
   digitalWrite(e2, 1);
   digitalWrite(f2, 0);
   digitalWrite(g2, 0);
 }
 else if(gelen[0]=='6'){
   digitalWrite(a2, 0);
   digitalWrite(b2, 1);
   digitalWrite(c2, 0);
   digitalWrite(d2, 0);
   digitalWrite(e2, 0);
   digitalWrite(f2, 0);
   digitalWrite(g2, 0);
 }
 else if(gelen[0]=='7'){
   digitalWrite(a2, 1);
   digitalWrite(b2, 1);
   digitalWrite(c2, 1);
   digitalWrite(d2, 0);
   digitalWrite(e2, 0);
   digitalWrite(f2, 0);
   digitalWrite(g2, 0);
 }
 else if(gelen[0]=='8'){
   digitalWrite(a2, 1);
   digitalWrite(b2, 1);
   digitalWrite(c2, 1);
   digitalWrite(d2, 1);
   digitalWrite(e2, 1);
   digitalWrite(f2, 1);
   digitalWrite(g2, 1);
 }
 else if(gelen[0]=='9'){
   digitalWrite(a2, 1);
   digitalWrite(b2, 1);
   digitalWrite(c2, 1);
   digitalWrite(d2, 1);
   digitalWrite(e2, 0);
   digitalWrite(f2, 1);
   digitalWrite(g2, 1);
 }
 else if(gelen[0]=='a'){
   digitalWrite(a2, 1);
   digitalWrite(b2, 1);
   digitalWrite(c2, 1);
   digitalWrite(d2, 0);
   digitalWrite(e2, 1);
   digitalWrite(f2, 1);
   digitalWrite(g2, 1);
 }
 else if(gelen[0]=='b'){
   digitalWrite(a2, 0);
   digitalWrite(b2, 0);
   digitalWrite(c2, 1);
   digitalWrite(d2, 1);
   digitalWrite(e2, 1);
   digitalWrite(f2, 1);
   digitalWrite(g2, 1);
 }
 else if(gelen[0]=='c'){
   digitalWrite(a2, 1);
   digitalWrite(b2, 0);
   digitalWrite(c2, 0);
   digitalWrite(d2, 1);
   digitalWrite(e2, 1);
   digitalWrite(f2, 1);
   digitalWrite(g2, 0);
 }
 else if(gelen[0]=='d'){
   digitalWrite(a2, 0);
   digitalWrite(b2, 1);
   digitalWrite(c2, 1);
   digitalWrite(d2, 1);
   digitalWrite(e2, 1);
   digitalWrite(f2, 0);
   digitalWrite(g2, 1);
 }
 else if(gelen[0]=='e') {
digitalWrite(a2, 1);
digitalWrite(b2, 0);
digitalWrite(c2, 0);
digitalWrite(d2, 1);
digitalWrite(e2, 1);
digitalWrite(f2, 1);
digitalWrite(g2, 1);
 }
 else if(gelen[0]=='f'){
digitalWrite(a2, 1);
digitalWrite(b2, 0);
digitalWrite(c2, 0);
digitalWrite(d2, 0);
digitalWrite(e2, 1);
digitalWrite(f2, 1);
digitalWrite(g2, 1);
}

  if(gelen[1]=='0'){
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 0);

  }

else if(gelen[1]=='1'){
digitalWrite(a, 0);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 0);
digitalWrite(g, 0);

    }
    else if (gelen[1]=='2'){
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 0);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 0);
digitalWrite(g, 1);

    }
    else if(gelen[1]=='3'){
 digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 0);
digitalWrite(f, 0);
digitalWrite(g, 1);
      }
  else if(gelen[1]=='4'){
digitalWrite(a, 0);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 1);
digitalWrite(g, 1);
    }
    else if(gelen[1]=='5'){
digitalWrite(a, 1);
digitalWrite(b, 0);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 0);
digitalWrite(f, 1);
digitalWrite(g, 1);

      }
  else if(gelen[1]=='6'){
digitalWrite(a, 1);
digitalWrite(b, 0);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 1);
   }
    else if(gelen[1]=='7'){
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 0);
digitalWrite(g, 0);
      }
    else if(gelen[1]=='8'){
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 1);
     }
     else if(gelen[1]=='9'){
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 0);
digitalWrite(f, 1);
digitalWrite(g, 1);
     }
     else if(gelen[1]=='a'){
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 0);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 1);

      }
      else if(gelen[1]=='b'){
digitalWrite(a, 0);
digitalWrite(b, 0);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 1);

       }
        else if(gelen[1]=='c'){
digitalWrite(a, 1);
digitalWrite(b, 0);
digitalWrite(c, 0);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 0);

        }
        else if(gelen[1]=='d'){
digitalWrite(a, 0);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 0);
digitalWrite(g, 1);
         }
         else if(gelen[1]=='e') {
digitalWrite(a, 1);
digitalWrite(b, 0);
digitalWrite(c, 0);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 1);
        }
        else if(gelen[1]=='f'){
digitalWrite(a, 1);
digitalWrite(b, 0);
digitalWrite(c, 0);
digitalWrite(d, 0);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 1);
       }
}

