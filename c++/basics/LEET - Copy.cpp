class Solution {
public:
    int reverse(int x) {
        int ld,s=INT_MIN;
       
       while(x!=0){
           if(sizeof(x)<-32768&&sizeof(x)>32767 ){
        ld=x%10;
        s=s*10+ld;
        x=x/10;
       }
    return s;
   
    }
};