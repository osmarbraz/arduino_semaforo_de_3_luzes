/*
  Semáforo de 3 LEDs
*/

int tempo = 0;

void setup() {  
  // Porta 13 (LED_BUILTIN) em modo de saída(escrita)
  pinMode(13,OUTPUT); //LED VERMELHO
   
  // Porta 12 em modo de saída(escrita)
  pinMode(12,OUTPUT);  //LED AMARELO
  
  // Porta 11 em modo de saída(escrita)
  pinMode(11,OUTPUT); //LED VERDE
  
  tempo = 1000;
}

void loop() {
	
	// Liga o LED VERMELHO, escrevemos HIGH(1) no pino digital 13
	digitalWrite(13,HIGH);  //Vermelho
	// Aguardamos o tempo definido
	delay(tempo); 
	// Apaga o LED VERMELHO, escrevemos LOW(0) no pino digital 13
	digitalWrite(13,LOW); 
      
    // Liga o LED VERDE, escrevemos HIGH(1) no pino digital 11
	digitalWrite(11,HIGH); //Verde    
	// Aguardamos o tempo definido
	delay(tempo); 
	// Apaga o LED VERDE, escrevemos LOW(0) no pino digital 11
	digitalWrite(11,LOW);   
  
	// Liga o LED AMARELO, escrevemos HIGH(1) no pino digital 12
	digitalWrite(12,HIGH); //Amarelo
	// Aguardamos o tempo definido
	delay(tempo); 
	// Apaga o LED AMARELO, escrevemos LOW(0) no pino digital 12
	digitalWrite(12,LOW);
}
