/*Josh went to the market to buy N apples. He found two shops, shop A and B, where
 apples were being sold in lots. He can buy any number of the complete lot(s) but
  not loose apples. He is confused with the price and wants you to figure out the
   minimum cost to buy exactly N apples. Write an algorithm for Josh to calculate 
   the minimum cost to buy exactly N apples.*/

   #include<stdio.h>
   #include<math.h>

   int main(){
    int n,m1,p1,m2,p2;
    printf("Total no of Bananas :");
    scanf(" %d",&n);
    printf("m1 no of Bananas :");
    scanf(" %d",&m1);
    printf("price  p1 of Bananas :");
    scanf(" %d",&p1);
    printf("m2 no of Bananas :");
    scanf(" %d",&m2);
    printf("price p2 no of Bananas :");
    scanf(" %d",&p2);
     
     int min_cost = -1;
	for (int i=0; m1*i <= n; i++) {
		int count2 = n - i*m1;
		if (count2%m2 == 0) {
			int cost = p1 * i + p2 * (count2/m2);
			min_cost = (cost < min_cost || min_cost == -1) ? cost : min_cost;
		}
	}
	if (min_cost != -1)
		printf("%d\n", min_cost);
	else
		printf("Invalid inputs\n");
}
