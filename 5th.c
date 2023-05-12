#include <mega32.h>
#include <alcd.h>    //library lcd
#include <delay.h>

void main(void)
{
 lcd_init(16);  //inisialisasi
while (1)
      {           
      int i,a;
      for(i=0;i<=16;i++){ 
     
      lcd_clear();
      lcd_gotoxy(i,0);    //memindahkan kursor menuju koordinat
      
      
      for(a=0;a<=7;i++){
      lcd_putsf("GUNAWAN 5268");   //untuk menampilkan string
      } 
      
      delay_ms(1000); 
         
      }
      }
} 
