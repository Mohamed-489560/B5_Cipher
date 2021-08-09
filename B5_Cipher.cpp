#include <iostream>

using namespace std;

string saesar() 
{ 
    string result; 
    string text;
    int s; 
    cout << "Enter Your Plain Text :";
    cin >> text;
    cout << "Enter Shift Time :";
    cin >> s;
    // traverse text 
    for (int i=0;i<text.length();i++) 
    { 
        // apply transformation to each character 
        // Encrypt Uppercase letters 
        if (isupper(text[i])) 
    {
            result = (result) + char(int(text[i]+s-65)%26 +65); 
    }
    // Encrypt Lowercase letters 
    else
    {
        result = (result) + char(int(text[i]+s-97)%26 +97); 
    }
    
    } 
  
    // Return the resulting string
    
    
    cout<< "____________________________________________"<<endl;
    cout<< "                                            "<<endl;
    cout << "Cipher Text = " << result <<endl;
    
} 
 //DECRYPT SAESAR *******************************************************<<
string decrypt_saesar()
{
    string result; 
    string text;
    int s; 
    cout << "Enter Your Cipher Text :";
    cin >> text;
    cout << "Enter Shift Time :";
    cin >> s;
    for (int i=0;i<text.length();i++) 
    { 
        if (isupper(text[i])) 
    {
                result = (result) + char(int((text[i]-s-65)+26)%26 +65); 
    }
    else
    {
        result = (result) + char(int((text[i]-s-97)+26)%26 +97); 
    }
    
    } 
  
    // Return the resulting string
    
    
    cout<< "____________________________________________"<<endl;
    cout<< "                                            "<<endl;
    cout << "Plain Text = " << result <<endl;
}


string vigenere()
{
   string plantext;
    string key;
    string result;
    int k=0;
    cout << "Enter Your Text :";
    cin >> plantext;
    cout <<"Enter Your Key (STRING PLEAS !!) :";
    cin >> key;
   while (plantext.length() > key.length())
   {
        key += key;
   }
    for(int i=0;i<plantext.length();i++)
    {
         if(isupper(plantext[i]))
         {
             result[i] = (((plantext[i]-65)+(key[k]-65))%26)+65;
        k++;
         }
         
         else 
         {
        result[i] = (((plantext[i]-97)+(key[k]-97))%26)+97;
        k++;
         }
    }
    
    cout << "                  "<<endl;
    cout << "RESULT :"<<endl;
    for(int i=0;i<plantext.length();i++)
    {
        cout << result[i];
    }
    cout << " "<<endl;
}

string decrypt_vigenere()
{
    string plantext;
    string key;
    string result;
    int k=0;
    cout << "Enter Your Vigenere :";
    cin >> plantext;
    cout <<"Enter Your Key (STRING PLEAS !!) :";
    cin >> key;
   while (plantext.length() > key.length())
   {
        key += key;
   }
    for(int i=0;i<plantext.length();i++)
    {
         if(isupper(plantext[i]))
         {
             result[i] = ((((plantext[i]-65)+26)-(key[k]-65))%26)+65;
        k++;
         }
         //ZCUVZSQ
         else 
         {
        result[i] = ((((plantext[i]-97)+26)-(key[k]-97))%26)+97;
        k++;
         }
    }
    
    cout << "                  "<<endl;
    cout << "RESULT :"<<endl;
    for(int i=0;i<plantext.length();i++)
    {
        cout << result[i];
    }
    cout << " "<<endl;
    cout << "Decrypted :)"<<endl;
}

string rsakeygen()
{
    int fi;
    int p;
    int q;
    int n;
    int e;
    cout << "Enter P Value :"<<endl;
    cin >> p;
    cout << "Enter Q Value :"<<endl;
    cin >> q;
    cout<< "Enter E Value :";
    cin >> e;
    cout <<" "<<endl;
    n=(p-1)*(q-1);
    cout<< "n = "<<n<<endl;
    cout <<" "<<endl;
    for (int d=1;d<=800;d++)
    {
        fi=(d*e)%n;
        if (fi==1)
        {
            //cout<<fi<<endl;
            cout<<"d Will = "<<d<<endl;
            break;
        }
        
        else {
            continue;
        }
    }
}


string Vernam_Cipher()
{
    
    string vplantext;
    string vkey;
    string vresult;
    int vk=0;
    cout << "Enter Your Text Without Spaces:";
    cin >> vplantext;
    cout <<"Enter Your Key (STRING PLEAS !!) :";
    cin >> vkey;
   while (vplantext.length() > vkey.length())
   {
        vkey += vkey;
   }
    for(int vi=0;vi<vplantext.length();vi++)
    {
         if(isupper(vplantext[vi]))
         {
             vresult[vi] = ((((vplantext[vi]-65)+26)-(vkey[vk]-65))%26)+65;
        vk++;
         }
         //ZCUVZSQ
         else 
         {
        vresult[vi] = ((((vplantext[vi]-97)+26)-(vkey[vk]-97))%26)+97;
        vk++;
         }
    }
    
    cout << "                  "<<endl;
    cout << "RESULT :"<<endl;
    for(int vi=0;vi<vplantext.length();vi++)
    {
        cout << vresult[vi];
    }
    cout << " "<<endl;
    return 0;
    
    
}


// Driver program to test the above function 
int main() 
{ 
    int Choose;
    string Schoose;
    int eord;
    cout << "Choose Encrypt Type : "<<endl;
    cout << "1-Caesar_Cipher"<<endl;
    cout << "2-Vigenère_Cipher"<<endl;
    cout << "3-RSA"<<endl;
    cout << "4-Vernam_Cipher "<<endl;
    cout << "5-Atbash_Cipher SOON "<<endl;
    cin >> Choose;
    if(Choose == 1)
    {
        cout << "                   "<<endl;
        cout << "1-To Encrypt"<<endl;
        cout << "2-To Decrypt"<<endl;
        cin >> eord;
        if (eord==1)
        {
        saesar();
        }
        else if (eord==2)
        {
            decrypt_saesar();
        }
        else 
        {
            cout << "Invalid Input !!"<<endl;
            //eord = NULL;
            main();
        }
    }
    else if (Choose==2)
    {
        cout << "                   "<<endl;
        cout << "1-To Encrypt"<<endl;
        cout << "2-To Decrypt"<<endl;
        cin >> eord;
        if(eord==1)
        {
            vigenere();
        }
        else if (eord==2)
        {
            decrypt_vigenere();
        }
        else 
        {
            cout << " "<<endl;
            cout << "Invalid Input !!"<<endl;
            cout << "____________________________"<<endl;
            //eord = NULL;
            main();
        }
        
    }
    else if (Choose==3)
    {
        cout<<"1-Key Generation"<<endl;
        cout<<"2-Encrypt SOON"<<endl;
        cout<<"3-Decrypt SOON"<<endl;
        cin>>eord;
        if(eord==1)
        {
            rsakeygen();
        }
        else 
        {
            cout << " "<<endl;
            cout << "No Valid Input !!"<<endl;
            cout << "____________________________"<<endl;
            main();
        }
    }
    else if (Choose==4)
    {
        Vernam_Cipher();
    }
    else 
    {
        cout << " "<<endl;
        cout << "No Valid Input !!"<<endl;
        cout << "____________________________"<<endl;
        main();
    }
    return 0; 
} 