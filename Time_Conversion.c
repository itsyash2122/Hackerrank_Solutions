/* Write your code here */
char* timeConversion(char* s) {
if(s[8]=='P' && s[9]=='M')
     {  if(s[0]=='1' && s[1]=='2'){
         s[0]='1';
         s[1]='2';
     }
          else{
         s[0]=s[0]+1;
        s[1]=s[1]+2;}}
    
      else if(s[8]=='A' && s[9]=='M'){
          {  if(s[0]=='1' && s[1]=='2'){
         s[0]='0';
         s[1]='0';
     
     }
      }}
       s[9]='\0';
        s[8]='\0';
    
     return s;
     } 
