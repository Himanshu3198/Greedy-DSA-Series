// https://www.codechef.com/problems/UNONE
/*
    author: himanshu3198
*/

/* *********************************************************************************/
#include<bits/stdc++.h>

using namespace std;
#define E endl
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007LL
#define ll long long
#define ULL unsigned long long
#define ld long double
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(x) ((x)<0?-(x):(x))
#define si(n) scanf("%d",&n)
#define sf(n) scanf("%f",&n)
#define sl(n) scanf("%lld",&n)
#define slu(n) scanf("%llu",&n)
#define sd(n) scanf("%lf",&n)
#define ss(n) scanf("%s",n)
#define pnl printf("\n")
#define fr(i,n) for(int i=0;i<(n);i++)
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define FORR(i,n) for(int i=(n);i>=0;i--)
#define fst first
#define snd second
#define DB(x) cout<<"\n"<<#x<<" = "<<(x)<<"\n";
#define CL(a,b) memset(a,b,sizeof(a))
#define GOLD ((1+sqrt(5))/2)
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
void swaps (char *x,char *y){char temp;temp=*x;*x=*y;*y=temp;}
void swapi(int *a,int *b){int temp;temp=*a;*a=*b;*b=temp;}
ULL gcd(ULL a,ULL b){if(a==0)return b;if(b==0)return a;if(a==1||b==1)return 1;
if(a==b)return a;if(a>b)return gcd(b,a%b);else return gcd(a,b%a);}


bool checkPerfectSquare(int n){
       int temp=n;
      int x=sqrt(n);
    
       if(x*x==temp){
           return true;
       }
       else{
           return false;
       }
}

void merge(int *arr, int *L , int leftcount, int *R , int rightcount)
{

    int i = 0, j = 0, k = 0;
    while (i < leftcount && j < rightcount)
    {
        if (L[i] < R[j])
        {    // modifying arr if L[i] less than R[j] and increament i,k for next comparison
            arr[k] = L[i];
            k++;
            i++;
        }
        else
        {
              // modifying arr if R[j] greater than L[i] and increament j,k for next comparison
            arr[k] = R[j];
            k++;
            j++;
        }


    }
      // this case arrived when either i or j reach to max iteration
    //   then remaining element can placed as it is i.e
    //  arr[5,6,7]   L[11 12 13]

        while (i < leftcount)
        {
            arr[k] = L[i];
            k++;
            i++;

            //arr[5,6,7,11,12,13]
        }
        while (j < rightcount)
        {
            arr[k] = R[j];
            k++;
            j++;
        }
    
}
void mergeSort(int arr[], int n)
{
    int mid ;

    if(n<2) {
        return;
    }
    mid = n / 2;

  int L[mid];
  int R[n-mid];

    for (int i = 0; i < mid; i++)
    {
        L[i] = arr[i];
    }

    for (int i = mid; i < n; i++)
    {
        R[i - mid] = arr[i];
    }

    mergeSort(L, mid);
    mergeSort(R, n - mid);
    merge(arr, L, mid, R, n - mid);
}

int BinarySearch(int *arr,int n,int k){


    int l=0,r=n-1;


    while(l<=r){
         int mid=(l+r)/2;

        if(arr[mid]==k){
            return arr[mid];
        }

        if(k>arr[mid]){
          l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return -1;
}
/* *************************************************************************************************** */
#define SIZE 1000001
   
int main()
{
     
     
    #ifdef himanshu3198
    freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    freopen("log.txt", "w", stderr);
    #endif
  

    
   int t=1;
    scanf("%d",&t);
    while(t--)
    {
       int n;
        cin >> n;

        ll a[n];
        fr(i, n)
        {
            cin >> a[i];
        }

        vector<ll> zeros;
        vector<ll> ones;

        fr(i, n)
        {

            if ((1 << 0) & a[i])
            {
                // cout<<"set\n";
                ones.push_back(a[i]);
            }
            else
            {
                // cout<<"unset\n";
                zeros.push_back(a[i]);
            }
        }




      int n1=zeros.size(),n2=ones.size();

         for(int i=0;i<n1;i++){
             cout<<zeros[i]<<" ";
         }
          for(int i=0;i<n2;i++){
             cout<<ones[i]<<" ";
         }


        cout<<E;

   
 
                
              
            


   
       
      
    }//end while
    #ifdef himanshu3198
    fprintf(stdout,"\nTIME: %.3lf sec\n", (double)clock()/(CLOCKS_PER_SEC));
    #endif
    fastio();
    return 0;
}
