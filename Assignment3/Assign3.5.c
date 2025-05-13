/*5. Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not.
Input: a   Output:TRUE
Input: D   Output:FALSE

*/
#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char cCh)
{
    if(cCh=='a' && cCh=='e' && cCh=='i' && cCh=='o' && cCh=='u')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;
    printf("Enter character\n");
    scanf("%c", &cValue);
    bRet=ChkVowel(cValue);
    if(bRet == true)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
    return 0;
}
