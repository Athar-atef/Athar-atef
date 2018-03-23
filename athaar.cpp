#include <iostream>
#include <fstream>
#include <string>
//FCI-programming 1 - 2018 - Assigment 2
//Program Name:Total Grade.CPP
//Last Modification Date:25/02/2018
//Author1 and ID and Group:Athar Atef Hussien  20170005   G1
//Teaching Assistant: Eng.Ali  Eng.menna
//purpose:calculate the total grade for N class exercises as a percentage.


using namespace std;

int main()
{
    while (true){
      cout<<"welcome user"<<endl;
      string plainAlphabet="abcdefghijklmnopqrstuvwxyz";
      string key;
      cout<<"the key is:"<<endl;
      cin>>key;
      while (true){

          if(key.size()<5 || key.size()>5){
              cout<<"enter another key"<<endl;
              cin>>key;
           }
           else if(key.size()==5){
                break;
           }
      }
      int r;
      for(int m=0;m<key.size();m++){
        r=0;
        if(r==1){
              cout<<"enter another key"<<endl;
        }
      }

      string cipherAlphabet=key;
      int p;
      for(int z=0;z<plainAlphabet.size();z++){
        p=1;
        for(int l=0;l<key.size();l++){
                if(plainAlphabet[z]==key[l]){
                        p=0;
                 }

        }
        if(p==1){
             cipherAlphabet+=plainAlphabet[z];
        }
      }
      string plainmsg;
      string ciphermsg;
      int changer;
      cout<<"If you wanna cipher press 1\nIf u wanna decipher press 2\nIf you wanna exit press any key\n"<<endl;
      cin>>changer;
      cin.ignore();
      if(changer==1){
       cout<<"enter the plainmsg:"<<endl;
       getline(cin,plainmsg);
       for(int i=0;i<plainmsg.size();i++){
            for(int j=0;j<plainAlphabet.size();j++){
                    if(plainmsg[i]==plainAlphabet[j]){
                            plainmsg[i]=cipherAlphabet[j];
                            break;
                    }
            }
        }
        cout<<"ciphermsg is:"<<plainmsg<<endl;
      }
      else if(changer==2){
         cout<<"enter the ciphermsg"<<endl;
         getline(cin,ciphermsg);

         for(int y=0;y<ciphermsg.size();y++){
              for(int k=0;k<cipherAlphabet.size();k++){
                     if(ciphermsg[y]==cipherAlphabet[k]){
                            ciphermsg[y]=plainAlphabet[k];
                             break;
                     }
              }
         }
         cout<<"plainmsg is:"<<ciphermsg<<endl;
     }
     else {
            return 0;
     }
}

   return 0;
}
