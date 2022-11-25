bool isValid(char * s){ //this is disgusting, should've used a stack!!
    char cur = 'x';
    int cur_pos;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == '{' || s[i] == '(' || s[i] == '['){
            cur = s[i];
            cur_pos = i;
        } else if(s[i] == '}' || s[i] == ')' || s[i] == ']'){
            if(s[i] == '}' && cur == '{'){
                memmove(&s[i], &s[i+1], strlen(s)-i);
                memmove(&s[cur_pos], &s[cur_pos+1], strlen(s)-cur_pos);
                i=-1;
                cur = 'x';
            } else if(s[i] == ')' && cur == '('){
                memmove(&s[i], &s[i+1], strlen(s)-i);
                memmove(&s[cur_pos], &s[cur_pos+1], strlen(s)-cur_pos);
                i=-1;
                cur = 'x';
            } else if(s[i] == ']' && cur == '['){
                memmove(&s[i], &s[i+1], strlen(s)-i);
                memmove(&s[cur_pos], &s[cur_pos+1], strlen(s)-cur_pos);
                i=-1;
                cur = 'x';
            } else{
                return 0;
            }
        }
    }

    if(strlen(s) != 0){
        return 0;
    }
    return 1;
}
