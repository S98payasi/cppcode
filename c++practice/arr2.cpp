// search key by bineary seach
# include<iostream>
using namespace std ;


int main(){
    int n;
    cin >> n;
    int s = 0;
    int e = n;

    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    int key;
    cin >> key;
    
    while(s<=e){
        int mid = (s + e) / 2;
       if(a[mid]==key)
{
    cout << mid;
} 
else if(a[mid]>key){
    e = mid-1;
} 
else if(a[mid]<key){
    s = mid+1;
}      return 0;
}