/*https://leetcode.com/problems/integer-to-roman/*/
class Solution {
public:
    string intToRoman(int num) {
        map<int, char*>m;
        m[1]="I";
        m[1000]="M";
        m[900]="CM";
        m[500]="D";
        m[400]="CD";
        m[100]="C";
        m[90]="XC";
        m[50]="L";
        m[40]="XL";
        m[10]="X";
        m[9]="IX";
        m[5]="V";
        m[4]="IV";
        
        
        int d=num;
        string s;
        
        while(d!=0){
            if(d/1000>0){
                s.append(m[1000]);
                d-=1000;
            }
            else if(d/900>0){
                s.append(m[900]);
                d-=900;
            }
            else if(d/500>0){
                s.append(m[500]);
                d-=500;
            }
            else if(d/400>0){
                s.append(m[400]);
                d-=400;
            }
            else if(d/100>0){
                s.append(m[100]);
                d-=100;
            }
            else if(d/90>0){
                s.append(m[90]);
                d-=90;
            }
            else if(d/50>0){
                s.append(m[50]);
                d-=50;
            }
            else if(d/40>0){
                s.append(m[40]);
                d-=40;
            }
            else if(d/10>0){
                s.append(m[10]);
                d-=10;
            }
            else if(d/9>0){
                s.append(m[9]);
                d-=9;
            }
            else if(d/5>0){
                s.append(m[5]);
                d-=5;
            }
            else if(d/4>0){
                s.append(m[4]);
                d-=4;
            }
            else if(d/1>0){
                s.append(m[1]);
                d-=1;
            }
        
        }
        return s;
    }
};
