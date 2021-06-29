string ari(string s)
{ int ch=0,space=0,sentence=0,score;
string gradelevel;
    int v=strlen(s);
    for(int i=0;i<v;i++)
    {
        if(isalnum(s[i]))
        ch++;
        if(s[i]==' ')
        space++;
        if(s[i]=='.'||s[i]=='!'||s[i]=='?')
        sentence++;
    }
score=4.71*(ch/space)+0.5*(space/sentence)-21.43;
score=(int)score+1;
if(score==1)
gradelevel="Kindergarten";
else if(score==2)
gradelevel="First/Second Grade";
else if(score==3)
gradelevel="Third Grade";
else if(score==4)
gradelevel="Fourth Grade";
else if(score==5)
gradelevel="Fifth Grade";
else if(score==6)
gradelevel="Sixth Grade";
else if(score==7)
gradelevel="Seventh Grade";
else if(score==8)
gradelevel="Eighth Grade";
else if(score==9)
gradelevel="Ninth Grade";
else if(score==10)
gradelevel+"Tenth Grade";
else if(score==11)
gradelevel="Eleventh Grade";
else if(score==12)
gradelevel="Twelfth Grade";
else if(score==13)
gradelevel="College Student";
else 
gradelevel="Professor";
return gradelevel;



    
}
