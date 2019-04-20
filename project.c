/*
   Title: Rotation Cipher
   Description: Rotation cipher encrypts a text message by substituting each letter in the alphabet with a letter a fixed number of places away
                in the alphabet. the "key" is the number of letters by which the aplhabet is shifted when calculating the sunstitution.
   Usage: This program produces a menu to select either to encrypt or decrypt a message inputted by the user as a rotation cipher.
          The program will then encrypt or decrypt the inputted text based on the users selection and print the final product to the screen.
            
   How it works: 
*/

#include <stdio.h>
#include <stdlib.h>
 
void encryptionRotation();
void decryptionRotation();
void encryptionSubstitution();
void decryptionSubstitution();
void quit();
 
int main () {
    
    
    int input;
         
        printf("1. encryption of rotation cipher\n");
        printf("2. decryption of rotation cipher\n");
        printf("3. encryption of substitution cipher\n");
        printf("4. decyrption of substitution cipher\n");
        printf("5. Quit\n");
         
        printf("\nChoose an option and press enter:   ");
        scanf("%d",&input);
     
     
     
    if(input <= 5 && input >= 1)
    switch (input) {
        case 1:
            encryptionRotation();;
            break;
        case 2:
            decryptionRotation();
            break;
        case 3:
           encryptionSubstitution();
            break;
        case 4:
           decryptionSubstitution();
            break;
        case 5:
            quit();
            break;
    }
         
    else {
     
    printf("\nInvalid choice!");
    return 0;
    }
}
void encryptionRotation();
	char message[1000], ch;
	int i, key;
	
	printf("Enter a message to encrypt: ");
    fgets(message, 1000, stdin);
	
	printf("Enter key: ");
	scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
			
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;
			
			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}
			
			message[i] = ch;
		}
	}
	
	printf("Encrypted message: %s", message);
	
}

void decryptionRotation(){
char message[1000], ch;
	int i, key;
	
	printf("Enter a message to decrypt: ");
    fgets(message, 1000, stdin);
	
	printf("Enter key: ");
	scanf("%d", &key);
	
	for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
			
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			
			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch - key;
			
			if(ch < 'A'){
				ch = ch + 'Z' - 'A' + 1;
			}
			
			message[i] = ch;
		}
	}
	
	printf("Decrypted message: %s", message);
}


void encryptionSubstitution(){
printf("\nStarting new game....");
}
 
 
void decryptionSubstitution(){
printf("\nChoose from a save file");
}

 
void quit(){
    printf("\nThanks for playing.../n");

}