 #include<iostream>
 #include<string>
 #include<windows.h>
 #include<cstdio>
 #include<cmath>
 using namespace std;
 const int MAX = 36;
 void menu();
 int encryptordecrypt();
 void loadingBar();
 class Caesar
 {
 	public:
 	string s;
 	
 
 	 string encrypt(string text, int key) 
 	 {
 	 	
 	 	
	  string result = ""; 
	  char ch;
  
    
    for (int i=0;i<text.length();i++) 
    { 
    ch=text[i];
        
        if (isupper(ch)) 
        {
        	ch=ch+key;
        	if (ch > 'Z'){
               ch = ch - 'Z' + 'A' - 1;
            }
        	
		
            result += ch; 
    }
  
    
    else
    {
	
            ch=ch+key;
        	if (ch > 'z'){
               ch = ch - 'Z' + 'A' - 1;
            }
        	
		
            result += ch; 
        }
    } 
       
    
    return result; 
        
       } 
  
    
      
     
     string decrypt(string text,int key)
     {
      string result = ""; 
	  char ch;
  
    
    for (int i=0;i<text.length();i++) 
    { 
    ch=text[i];
        
        if (isupper(ch)) 
        {
        	ch=ch-key;
        	if (ch < 'A'){
               ch = ch + 'Z' - 'A' + 1;
            }
        	
		
            result += ch; 
    }
  
    
    else
    {
	
            ch=ch-key;
        	if (ch < 'a'){
               ch = ch + 'Z' - 'A' + 1;
            }
        
		
            result += ch; 
        }
    }
	
	
  
    
    return result; 
 	}
 };
 
 
 
 
 class Xor
 {
 	public:
 	
	 
	 string encryptDecrypt(string text,char xorKey) 
    { 
       for (int i = 0; i < text.length(); i++) 
       { 
           text[i] = text[i] ^ xorKey; 
            
       } 
       
       return text;
   } 
   
  
 	
 };
 
 


 int main()
 {
    menu();
 
 	
 	
 	
 	
 	return 0;
 }
 
 void menu()
 {
 	cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
 	cout<<"\t\t\t\tENCRYPTO"<<endl;
 	cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n\n"<<endl;
 	cout<<"ENTER YOUR PREFERABLE ENCRYPTION/DECRYPTION TECHNIQUE....\n";
 	cout<<"1) Caeser Cipher Method\n";
 	cout<<"2) XOR Method\n";
 	cout<<"3) Vernam Cipher Method\n";
 	
 	
 	int option;
 	int key;//for Caesar Cipher
 	char s[500];
 	char xorkey;//for xor cipher
 	cin>>option;
 	system("cls");
 	Caesar c;
 	Xor x;

 	if(option==1)
 	{
 		
 		int a=encryptordecrypt();
 		
 		if(a==1)
 		{
 			cout<<"Enter string to be encrypted...\n";
 			scanf(" %[^\n]s",s);
			cout<<"Enter the key(integer number value)...\n";
 			cin>>key;
 			system("cls");
 			
 			
 			cout<<c.encrypt(s,key);
 			
		}
		else if(a==2)
		{
		cout<<"Enter string to be decrypted...\n";
 			scanf(" %[^\n]s",s);
 			cout<<"Enter the encrypting key(integer value) to decrypt the messsage...\n";
 			cin>>key;
 			system("cls");
 			
 			
 			cout<<c.decrypt(s,key);
 			
		}
 		else
 		{
 			
			cout<<"Enter correct option,returning to main menu\n";
		    
 			menu();
		}
 	}
 	
 	else if(option==2)
 	{int a=encryptordecrypt();
 		
 		if(a==1)
 		{
 			cout<<"Enter string to be encrypted...\n";
 			scanf(" %[^\n]s",s);
 			cout<<"Enter any capital alphabet key to encrypt the message...\n";
 			cin>>xorkey;
 			system("cls");
 			
 			
 			cout<<x.encryptDecrypt(s,xorkey);
 			
		}
		else if(a==2)
		{
		    cout<<"Enter string to be decrypted...\n";
 			scanf(" %[^\n]s",s);
			cout<<"Enter the encrypting key(Capital alphabet) to decrypt the messsage...\n";
 			cin>>xorkey;	
 			system("cls");
 			
 			
 			cout<<x.encryptDecrypt(s,xorkey);
 			
		}
 		else
 		{
 			cout<<"Enter correct option,returning to main menu\n";
 		
 			menu();
 			
		}
	}
 
 	
 	
 	
}
int encryptordecrypt()
{
	int n;
	
	cout<<"1)Encrypt\n";
	cout<<"2)decrypt\n";
	cin>>n;
	return n;
	system("cls");
}

  
