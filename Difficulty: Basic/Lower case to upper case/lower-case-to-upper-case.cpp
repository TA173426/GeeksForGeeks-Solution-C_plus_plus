
string to_upper(string str) {
    for(int i=0;i<str.size();i++){
        str[i]= static_cast<char>((str[i]-32));
    }
    return str;
}