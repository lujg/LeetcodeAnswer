bool isPalindrome(char* s) {
    if((*s) == '\0')return true;//if s is ""
    char *m = s;
    int num = 0;
    int begin = 0;
    
    while((*m)!='\0'){//get the length of s
        num++;
        m++;
    }
    
    int end = num - 1;
    while(1)
    {
        if(begin >= end) return true;
        if(s[begin]<'0'||(s[begin]>'9'&&s[begin] < 'A') || (s[begin] > 'Z' && s[begin] < 'a') ||s[begin] > 'z'){
            begin++;
        }
        else if(s[end]<'0'||(s[end]>'9'&&s[end] < 'A') || (s[end] > 'Z' && s[end] < 'a') || s[end] > 'z'){
            end--;
        }
        else if(s[begin]==s[end]||(s[begin]>='A'&&s[begin]<='Z'&&s[begin]==(s[end]-32))||(s[begin]>='a'&&s[begin]<='z'&&(s[begin]-32)==s[end])){
            begin++;
            end--;
        }
        else {
            return false;
        }
            
            
    }
    
}