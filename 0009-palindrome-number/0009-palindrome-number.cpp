class Solution {
public:
    bool isPalindrome(int x) {
    long long digit;
    long long rev=0;
    long long ori=x;
   while(x>0){
    digit=x%10;
    x=x/10;
    rev=rev*10+digit;
   }
   if(rev==ori){
    return true;
   }
   return false;

}
};