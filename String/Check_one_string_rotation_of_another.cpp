METHOD 1 
  concate str1+str1 and find str2 if found or not
string str1="ABCED",str2="CEDAB";
if(str1.length()!=str2.length())
    cout<<0;
str1=str1+str1;
if((size_t)str1.find(str2)!=string::npos)                  // string::npos(string::pos is static member with value as the highest possible for the size_t data structure)
cout<<1;
else 
cout<<0;

METHOD 2
  use queue in str1 pop first char and push & check if equal to str2
string str1="ABCED",str2="CEDAB";
queue<char>q1,q2;
if(str1.length()!=str2.length())
return false;
for(int i=0;i<str1.length();i++)
q1.push(str1[i]);
for(int i=0;i<str2.length();i++)
q2.push(str2[i]);
for(int i=0;i<str1.length();i++){
char ch=q1.front();
q1.pop();
q1.push(str1[i]);
if(q1==q2)
return true;
}
return false;
