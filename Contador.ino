#define buttonUp   2 
#define buttonDown 3


#define displayA  9	
#define displayB 10	
#define displayC  6	
#define displayD  5	
#define displayE  4
#define displayF  8	
#define displayG  7	

#define ledAzul    12	
#define ledVerde  11	

int contador = 0;
String number;
int valid=1;
void setup(){
  Serial.begin(9600);
  pinMode(buttonUp,INPUT);
  pinMode(buttonDown,INPUT);

  pinMode(displayA,OUTPUT);
  pinMode(displayB,OUTPUT);
  pinMode(displayC,OUTPUT);
  pinMode(displayD,OUTPUT);
  pinMode(displayE,OUTPUT);
  pinMode(displayF,OUTPUT);
  pinMode(displayG,OUTPUT);                                                                                                                           
  

  pinMode(ledAzul,OUTPUT); 
  pinMode(ledVerde,OUTPUT);
  
}

void loop(){
monitorSerial
  if(digitalRead(buttonUp)){
    digitalWrite(ledAzul, HIGH);
    digitalWrite(ledVerde, LOW);
    contador++;
    
  
    if(contador>9){
      contador = 9;
    }
    
    Serial.println(contador);
    delay(500);
  }
  
  if(digitalRead(buttonDown)){
    digitalWrite(ledAzul, LOW);
    digitalWrite(ledVerde, HIGH);
    contador--;
    
    if(contador<0){
      contador = 0;
    }
    Serial.println(contador);
    delay(500);
  }
  
  
  switch(contador){
    case 0:
  
    	digitalWrite(displayA, HIGH);
        digitalWrite(displayB, HIGH);
        digitalWrite(displayC, HIGH);
        digitalWrite(displayD, HIGH);
        digitalWrite(displayE, HIGH);
        digitalWrite(displayF, HIGH);
        digitalWrite(displayG, LOW);
    	break;
    case 1:

        digitalWrite(displayA, LOW);
        digitalWrite(displayB, HIGH);
        digitalWrite(displayC, HIGH);
        digitalWrite(displayD, LOW);
        digitalWrite(displayE, LOW);
        digitalWrite(displayF, LOW);
        digitalWrite(displayG, LOW);
    	break;
    case 2:
        digitalWrite(displayA, HIGH);
        digitalWrite(displayB, HIGH);
        digitalWrite(displayC, LOW);
        digitalWrite(displayD, HIGH);
        digitalWrite(displayE, HIGH);
        digitalWrite(displayF, LOW);
        digitalWrite(displayG, HIGH);
    	break;
    case 3:
    
        digitalWrite(displayA, HIGH);
        digitalWrite(displayB, HIGH);
        digitalWrite(displayC, HIGH);
        digitalWrite(displayD, HIGH);
        digitalWrite(displayE, LOW);
        digitalWrite(displayF, LOW);
        digitalWrite(displayG, HIGH);
    	break;
    case 4:
    
        digitalWrite(displayA, LOW);
        digitalWrite(displayB, HIGH);
        digitalWrite(displayC, HIGH);
        digitalWrite(displayD, LOW);
        digitalWrite(displayE, LOW);
        digitalWrite(displayF, HIGH);
        digitalWrite(displayG, HIGH);
    	break;
    case 5:
    
        digitalWrite(displayA, HIGH);
        digitalWrite(displayB, LOW);
        digitalWrite(displayC, HIGH);
        digitalWrite(displayD, HIGH);
        digitalWrite(displayE, LOW);
        digitalWrite(displayF, HIGH);
        digitalWrite(displayG, HIGH);
    	break;
    case 6:
    
        digitalWrite(displayA, HIGH);
        digitalWrite(displayB, LOW);
        digitalWrite(displayC, HIGH);
        digitalWrite(displayD, HIGH);
        digitalWrite(displayE, HIGH);
        digitalWrite(displayF, HIGH);
        digitalWrite(displayG, HIGH);
    	break;
    case 7:
        digitalWrite(displayA, HIGH);
        digitalWrite(displayB, HIGH);
        digitalWrite(displayC, HIGH);
        digitalWrite(displayD, LOW);
        digitalWrite(displayE, LOW);
        digitalWrite(displayF, LOW);
        digitalWrite(displayG, LOW);
    	break;
    case 8:
    
        digitalWrite(displayA, HIGH);
        digitalWrite(displayB, HIGH);
        digitalWrite(displayC, HIGH);
        digitalWrite(displayD, HIGH);
        digitalWrite(displayE, HIGH);
        digitalWrite(displayF, HIGH);
        digitalWrite(displayG, HIGH);
    	break;
    case 9:
    
    	digitalWrite(displayA, HIGH);
        digitalWrite(displayB, HIGH);
        digitalWrite(displayC, HIGH);
        digitalWrite(displayD, LOW);
        digitalWrite(displayE, LOW);
        digitalWrite(displayF, HIGH);
        digitalWrite(displayG, HIGH);
    	break;
  }
  
}
void monitorSerial(){
  
Serial.println("------------------------------");
Serial.println("Ingrese un numero" );
Serial.println(">>>");
while (Serial.available()==0){} 
number=Serial.readString();    

if (number.length()>2){
  Serial.println("Ingrese un numero");
  valid=0;  
  delay(3000);
}
else{
  valid=1;
}

if (valid==1){
number.toUpperCase(); 
char val=number.charAt(0);
if ((val>47 && val<58)||(val>64 & val<71)){
  Serial.print("revisar display ");
  Serial.print(val);
  Serial.println(" esta imprimiendo");
}
else {
  Serial.println("Ingrese un numero  ");
  delay(3000);
}
if (val==48)
{
        digitalWrite(displayA, HIGH);
        digitalWrite(displayB, HIGH);
        digitalWrite(displayC, HIGH);
        digitalWrite(displayD, HIGH);
        digitalWrite(displayE, HIGH);
        digitalWrite(displayF, HIGH);
        digitalWrite(displayG, LOW);

}

 if (val==49)
{
        digitalWrite(displayA, LOW);
        digitalWrite(displayB, HIGH);
        digitalWrite(displayC, HIGH);
        digitalWrite(displayD, LOW);
        digitalWrite(displayE, LOW);
        digitalWrite(displayF, LOW);
        digitalWrite(displayG, LOW);

}
if (val==50)
{
        digitalWrite(displayA, HIGH);
        digitalWrite(displayB, HIGH);
        digitalWrite(displayC, LOW);
        digitalWrite(displayD, HIGH);
        digitalWrite(displayE, HIGH);
        digitalWrite(displayF, LOW);
        digitalWrite(displayG, HIGH);
}
if (val==51){
        digitalWrite(displayA, HIGH);
        digitalWrite(displayB, HIGH);
        digitalWrite(displayC, HIGH);
        digitalWrite(displayD, HIGH);
        digitalWrite(displayE, LOW);
        digitalWrite(displayF, LOW);
        digitalWrite(displayG, HIGH);

}
if (val==52)
{
        digitalWrite(displayA, LOW);
        digitalWrite(displayB, HIGH);
        digitalWrite(displayC, HIGH);
        digitalWrite(displayD, LOW);
        digitalWrite(displayE, LOW);
        digitalWrite(displayF, HIGH);
        digitalWrite(displayG, HIGH);

}


if (val==53)
{
        digitalWrite(displayA, HIGH);
        digitalWrite(displayB, LOW);
        digitalWrite(displayC, HIGH);
        digitalWrite(displayD, HIGH);
        digitalWrite(displayE, LOW);
        digitalWrite(displayF, HIGH);
        digitalWrite(displayG, HIGH);

}

if (val==54)
{
        digitalWrite(displayA, HIGH);
        digitalWrite(displayB, LOW);
        digitalWrite(displayC, HIGH);
        digitalWrite(displayD, HIGH);
        digitalWrite(displayE, HIGH);
        digitalWrite(displayF, HIGH);
        digitalWrite(displayG, HIGH);

}

if (val==55)
{
        digitalWrite(displayA, HIGH);
        digitalWrite(displayB, HIGH);
        digitalWrite(displayC, HIGH);
        digitalWrite(displayD, LOW);
        digitalWrite(displayE, LOW);
        digitalWrite(displayF, LOW);
        digitalWrite(displayG, LOW);

}

if (val==56)
{
        digitalWrite(displayA, HIGH);
        digitalWrite(displayB, HIGH);
        digitalWrite(displayC, HIGH);
        digitalWrite(displayD, HIGH);
        digitalWrite(displayE, HIGH);
        digitalWrite(displayF, HIGH);
        digitalWrite(displayG, HIGH);

}

if (val==57)
{
        digitalWrite(displayA, HIGH);
        digitalWrite(displayB, HIGH);
        digitalWrite(displayC, HIGH);
        digitalWrite(displayD, HIGH);
        digitalWrite(displayE, LOW);
        digitalWrite(displayF, HIGH);
        digitalWrite(displayG, HIGH);

}

if (val==65)
{
        digitalWrite(displayA, HIGH);
        digitalWrite(displayB, HIGH);
        digitalWrite(displayC, HIGH);
        digitalWrite(displayD, LOW);
        digitalWrite(displayE, HIGH);
        digitalWrite(displayF, HIGH);
        digitalWrite(displayG, HIGH);

}

if (val==66)
{
        digitalWrite(displayA, LOW);
        digitalWrite(displayB, LOW);
        digitalWrite(displayC, HIGH);
        digitalWrite(displayD, HIGH);
        digitalWrite(displayE, HIGH);
        digitalWrite(displayF, HIGH);
        digitalWrite(displayG, HIGH);

}

if (val==67)
{
        digitalWrite(displayA, HIGH);
        digitalWrite(displayB, LOW);
        digitalWrite(displayC, LOW);
        digitalWrite(displayD, HIGH);
        digitalWrite(displayE, HIGH);
        digitalWrite(displayF, HIGH);
        digitalWrite(displayG, HIGH);

}

if (val==68)
{
        digitalWrite(displayA, LOW);
        digitalWrite(displayB, HIGH);
        digitalWrite(displayC, HIGH);
        digitalWrite(displayD, HIGH);
        digitalWrite(displayE, HIGH);
        digitalWrite(displayF, LOW);
        digitalWrite(displayG, HIGH);

}


 if (val==69)
{
        digitalWrite(displayA, HIGH);
        digitalWrite(displayB, LOW);
        digitalWrite(displayC, LOW);
        digitalWrite(displayD, HIGH);
        digitalWrite(displayE, HIGH);
        digitalWrite(displayF, HIGH);
        digitalWrite(displayG, HIGH);

}

if (val==70)
{
        digitalWrite(displayA, HIGH);
        digitalWrite(displayB, LOW);
        digitalWrite(displayC, LOW);
        digitalWrite(displayD, LOW);
        digitalWrite(displayE, HIGH);
        digitalWrite(displayF, HIGH);
        digitalWrite(displayG, HIGH);

}
delay(3000);
}
}
