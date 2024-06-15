
//  &&  >> AND  >> both the statements are True than 1
//  ||  >> OR   >> any one statement is True than 1 / both statement is False than 0
//   !  >> NOT  >> negation of any statement . 1 to 0 / 0 to 1 


#include<stdio.h>
#include<math.h>

int main() {
    //AND
    printf("%d\n",4>3 && 5>2);
    printf("%d\n",4>5 && 5>2);

    //OR
    printf("%d\n",3>4 || 5>2);
    printf("%d\n",4>5 || 5>6);

    //NOT
     printf("%d\n",!(5>1));
      printf("%d\n",!( (4>3) && (5>2) ) );

      return 0;
}