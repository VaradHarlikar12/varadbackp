//DAY 1
// #include<iostream>
// using namespace std;

// int power(int n)
// {
    
//     //base case
//     //here when i give n=2
// if(n==0)
// {    return 1;
// }
//     else{
//     return 2*power(n-1);}

// }
// int main()
// {
//     int n;
//     cout<<"enter value for n"<<endl;
//     cin>>n; 
//     int ans=power(n);
//     cout<<ans<<endl;

// }

//DAY 2
// #include<iostream>
// using namespace std;
// int reachedhome(){
//  if(src==dest){
//     cout<<"pahuch gaya"<,endl;
//      }
//     src++;
//     reachhome(src,desc); 
// }
// int main(){
//     int dest=10;
//     int src=1;
//     reachhome(int desc,int src)
//     return 0;}

//DAY 3
//FIBONAACI SERIES 
//NO,NO1,NO2=NO1*NO,NO3=NO2*NO1.
// #include<iostream>
// using namespace std;
// int fibonacci(int n)
// {
//     //base case
//     if(n==0)
//     return 0;
//     if(n==1)
//     return 1;
//     int ans =fibonaci(n-1)+fibonacci(n-2);
//     return ans;
// }
// int main(){
//    int x;   
//    cout<<"enter the number you want to make fibonacci of :"<<endl;
//    cin>>x;
//    fibonacci(x);
//    return 0;
// }
// #include<iostream>
// using namespace std;
// int climbing(long long  nstairs){
//     if(nstairs<=0)
//     return 0;
//     if(nstairs==0)
//     return 1;
//     int ans=climbing(nstairs-1)+climbing(nstairs-2);//either i will clim one step or two steps
//     return ans;
// }
// int main(){
//     long long x;
//     cout<<"enter value for x"<<endl;
//     cin>>x ;
//     climbing(x);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int saydigit(int n,string arr[])
// {
//     if(n==0)
//     return 0;
//     int digit=n % 10;
//     n=n / 10;
//     saydigit(n,arr);
//     cout<<arr[digit]<<""<<endl;
// }
// int main(){
//     string arr[10]={"zero","one","two","three","four","five",
//     "six","seven","eight","nine"};
//     int n; 
//     cin>>n;
//     cout<<endl<<endl<<endl;
//     saydigit(n,arr);
//     cout<<endl<<endl<<endl;
//     return 0;
// }

//BINARY SEARCH
// #include<iostream>
// using namespace std;

// void print(int arr[],int s,int e)
// {
// for(int i=s,i<=e,i++)
//  {
//     cout<<arr[i]<<"";
//     cout<<endl;   
//  }
// }

// bool binarysearch(int *arr,int s,int e,int k){
//     //base sase
//     if(s>e) //incase element not found
//     return false;

//     int mid=s+(e-s)/2;

//     //element found
//     if(arr[mid]==k)
//     return true;
   
//     if(arr[mid]<k)
//     {
//     return binarysearch(arr,mid+1,e,k);
//     }
//     else(arr[mid]>k)
//     {
//     return binarysearch(arr,s,mid-1,k);
//     }
// }
//     int main()
//     {
//         int arr[6]={2,4,6,10,14,18};
//         int size=6;
//         int key;
//         cout<<"enter an element to search"<<endl;
//         cin>>key;

//         cout<<"PRESENT OR NOT"<<binarysearch(arr,0,5,key);
//         return 0;
//     }

