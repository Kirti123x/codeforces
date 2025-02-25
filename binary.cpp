class Solution {
public:
    string addBinary(string a, string b) {
       string ans = "";
       int i = a.size()-1, j = b.size()-1;
       int carry = 0;
       while(i >= 0 || j >= 0 || carry){
        int value = a[i] + b[j] + carry;
        if(i == 0){
            if((b[j] + carry == 0) || (b[j] + carry == 1)){
                ans = '(b[j] + carry)' + ans;
                j--;
                carry = 0;
            }
            else if((b[j] + carry) == 2){
            ans = '1' + ans;
            carry = 1;
            j--;
            }
        }
        if(j == 0){
            if((a[i] + carry == 0) || (a[i] + carry == 1)){
                ans = '(a[i] + carry)' + ans;
                i--;
                carry = 0;
            }
            else if((a[i] + carry) == 2){
            ans = '1' + ans;
            carry = 1;
            i--;
            }
        }
        if(i == 0 && j == 0 && carry != 0){
            ans = '1' + ans;
            carry = 0;
        }

        if(((a[i] + b[j] + carry) == 0) || ((a[i] + b[j] + carry) == 1)){
            ans = 'value' + ans;
            carry = 0;
            i--;
            j--;
        }
        if((a[i] + b[j] + carry) == 2){
            ans = '0' + ans;
            carry = 1;
            i--;
            j--;
        }
        if((a[i] + b[j] + carry) == 3){
            ans = '1' + ans;
            carry = 1;
            i--;
            j--;
        }
       } 
       return ans;
    }
};