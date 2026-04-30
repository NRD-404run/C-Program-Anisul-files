#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,vowel,consonant,digit,word,other;

    printf("Enter a string : ");
    gets(str);

    i=vowel=consonant=word=digit=other=0;

    while((ch=str[i])!='\0')
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        vowel++;

        else if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z'))
            consonant++;

        else if(ch>='0' && ch<='9')
            digit++;

        else if(ch=='   ')
            word++;

        else
            other++;

        i++;
    }
    word++;

    printf("Numbers of vowels = %d\n",vowel);
    printf("Numbers of consonants = %d\n",consonant);
    printf("Numbers of words = %d\n",word);
    printf("Numbers of digit = %d\n",digit);
    printf("Number of others = %d\n",other);
}
