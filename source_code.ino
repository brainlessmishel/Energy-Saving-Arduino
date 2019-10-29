#include <SoftwareSerial.h>




int led = 3;
int led1 = 5;
int led2 = 6;



int ldr = A0;

int ir = A1;
int ir1 = A2;
int ir2 = A3;



void setup() 
{
  Serial.begin (9600);
  
  
  
  pinMode (led, OUTPUT);
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);

  
  
  pinMode (ldr,INPUT);
  
  pinMode (ir, INPUT);
  pinMode (ir1, INPUT);
  pinMode (ir2, INPUT);

  

}
void loop() 
{
  int ldrStatus = analogRead (A0);

  Serial.println("ldr value =");
  Serial.println(ldrStatus);

  
  
  delay(100);

   
    if (ldrStatus <=500)
     {    
       
           if (analogRead(A1)<500)                      // IR 1 CODE    
               {
                Serial.println("IR1 value = ");
                Serial.println(analogRead(A1));

                
                
                digitalWrite(3,HIGH);
                analogWrite(3,255/4);
                       
               
               } 
           
            else 
                {
                  Serial.println("IR11 value =");
                  Serial.println(analogRead(A1));
                  
                  

                  
                  digitalWrite(3,HIGH);
                  delay(1000);// micro second
                }      






           if (analogRead(A2)<500)                      // IR 2 CODE    
               {
                Serial.println("IR2 value = ");
                Serial.println(analogRead(A2));

                
                
                digitalWrite(5,HIGH);
                       analogWrite(5,255/4);
               
               } 
           
            else 
                {
                  Serial.println("IR22 value =");
                  Serial.println(analogRead(A2));
                  
                  

                  
                  digitalWrite(5,HIGH);
                  delay(1000);// micro second
                }    


          if (analogRead(A3)<500)                      // IR 3 CODE    
               {
                Serial.println("IR3 value = ");
                Serial.println(analogRead(A2));

                
                
                digitalWrite(6,HIGH);
                       analogWrite(6,255/4);
               
               } 
           
            else 
                {
                  Serial.println("IR33 value =");
                  Serial.println(analogRead(A2));
                  
                  

                  
                  digitalWrite(6,HIGH);
                  delay(1000);// micro second
                }    
            
          
        }  

           
     else 
       {
        Serial.println("LDR value =");
        Serial.println(analogRead(A0));
                  
        
        
         digitalWrite(3, LOW);
         digitalWrite(5, LOW);
         digitalWrite(6,LOW);
         
      }
}
