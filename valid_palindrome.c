bool isPalindrome(char * s){
    for(int i = 0; i < strlen(s); i++){
        if(!isalnum(s[i])){
            memmove(&s[i], &s[i+1], strlen(s)-i); //memmove - copy next char over non alphanumeric char 
            i-=1;
        }
    }
    for(int i = 0; i < strlen(s); i++){
        if(tolower(s[i]) != tolower(s[strlen(s)-i-1])){
            return 0;
        }
    }
     return 1;
}
