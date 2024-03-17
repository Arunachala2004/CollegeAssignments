#include <stdio.h>
#include <conio.h>
int main()
{
    int var,q, rem, sum, cnt, digit, r_digit, res;
    int count;
    int reversed =0;
    res=0;
    printf("Enter the value of var: ");
    scanf("%d", &var);
    if (var<0){
        printf("invalid number");
    }
    else {
            q=var;
                count=0;
                while(q!=0){
                            q=q/10;
                            count++;
                            }

        if (var%2==0){
            cnt=count, sum=0;
                while(cnt!=0){
                    rem=var%10;
                    var=var/10;
                    sum+=rem;
                    cnt--;
                }
                printf("%d", sum);
            }
        else{
            int reversed = 0;
            while(var!=0){
                int digit = var%10;
                reversed = reversed * 10 + digit;
                var/=10;
                        }
            while(reversed != 0){
                int digit = reversed%10;
                printf("%d ", digit);
                reversed/=10;
            }

        }

                    }
        getchar();
          return 0;  }
