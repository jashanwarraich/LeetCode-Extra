class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='I'){
                ans+=1;
            }
            else if(s[i]=='V'){
                if(i>0&&s[i-1]=='I') {ans+=4; i--;}
                else ans+=5;
            }
            else if(s[i]=='X'){
                if(i>0&&s[i-1]=='I') {ans+=9; i--;}
                else ans+=10;
            }
            else if(s[i]=='L'){
                if(i>0&&s[i-1]=='X') {ans+=40; i--;}
                else ans+=50;
            }
            else if(s[i]=='C'){
                if(i>0&&s[i-1]=='X') {ans+=90;i--;}
                else ans+=100;
            }
            else if(s[i]=='D'){
                if(i>0&&s[i-1]=='C') {ans+=400; i--;}
                else ans+=500;
            }
            else if(s[i]=='M'){
                if(i>0&&s[i-1]=='C') {ans+=900; i--;}
                else ans+=1000;
            }
        }
        return ans;
    }
};