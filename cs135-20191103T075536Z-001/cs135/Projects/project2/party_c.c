/* Prim Wandeevong // CS 135 // Project 2 // 2-10-19 */
#include <stdio.h>
int main()
{

	int p_eggs, q_eggs, eggs, p_bacon, q_bacon, bacon, p_bread, q_bread, bread, budget;
	
	
	/* User input */
	printf("Enter the number of cartons of eggs and price per carton: ");
	scanf("%d %d", &p_eggs, &q_eggs);
	
	printf("Enter the number of pounds of bacon and price per pound: ");
	scanf("%d %d", &p_bacon, &q_bacon);
	
	printf("Enter the number of loaves of bread and price per loaf: ");
	scanf("%d %d", &p_bread, &q_bread);
	
	printf("Enter Jerry's budget: ");
	scanf("%d", &budget);
	
	/* Calculates price of supplies */
	eggs = p_eggs * q_eggs;
	bacon = p_bacon * q_bacon;
	bread = p_bread * q_bread;
	
	/* (1) Does Jerry have money? */
	if (budget <= 0) {
		printf("(1) Jerry does not have money to buy anything.\n");
		}
		
	else {
		printf("(1) Jerry has some money to buy breakfast supplies\n");
		}
		
		
	/* (2) Can Jerry buy all of the supplies? */
	if (eggs + bacon + bread <= budget) {
		printf("(2) Jerry can buy all the supplies for his party.\n");
		}
	
	/* (2) What if Jerry can only buy two of the supplies? */
	if (eggs + bacon + bread > budget) {
		if (eggs + bacon <= budget)
			printf("(2) Jerry can only buy eggs and bacon for his party\n.");
			
		else if (eggs + bread <= budget) 
			printf("(2) Jerry can only buy eggs and bread for his party.\n");
			
		else if (bacon + bread <= budget)
			printf("(2) Jerry can only buy bacon and bread for his party.\n");
			}
		
		
	/* (2) What if Jerry can only buy one of the supplies? */
	if (eggs + bacon > budget || eggs + bread > budget || bacon + bread > budget) {
		if (eggs <= budget)
			printf("(2) Jerry can only buy eggs for his party.\n");
		else if (bacon <= budget)
			printf("(2) Jerry can only buy bacon for his party.\n");
		else if (bread <= budget) 
			printf("(2) Jerry can only buy bread for his party.\n");
		else if (eggs < budget || bacon < budget || bread < budget)
			printf("(2) Jerry is going to have a very sad party\n.");
			}
			
			
	/* (3) The total cost of only one of the supplies is cheaper than or equal to Jerry's budget */
	if (eggs + bacon > budget || eggs + bread > budget || bacon + bread > budget) { 
		if (eggs > budget && bacon > budget)
			printf("(3) Only one of the breakfast supplies is cheaper than or equal to Jerry's budget.\n");
		else if (eggs > budget && bread > budget)
			printf("(3) Only one of the breakfast supplies is cheaper than or equal to Jerry's budget.\n");
		else if (bread > budget && bacon > budget)
			printf("(3) Only one of the breakfast supplies is cheaper than or equal to Jerry's budget.\n");
		else 
			printf("(3) More than one of the breakfast supplies is cheaper than or equal to Jerry's budget or they are all more expensive.\n");
		}


	/* (4) At least two breakfast supplies are more expensive than Jerry's Budget */
	if (eggs > budget || bacon > budget || bread > budget) {
		if (eggs > budget && bacon > budget)
			printf("(4) At least two breakfast supplies are more expensive than Jerry's budget.\n");
		else if (eggs > budget && bread > budget)
			printf("(4) At least two breakfast supplies are more expensive than Jerry's budget.\n");
		else if (bread > budget && bacon > budget)
			printf("(4) At least two breakfast supplies are more expensive than Jerry's budget.\n");
		else 
			printf("(4) At least two breakfast supplies are cheaper than or equal to Jerry's budget.\n");
			}
	
	
	/* (5) All the breakfast supplies cost the same, only two, or no supplies. */
	if (eggs == bacon && bacon == bread)
		printf("(5) All the supplies cost the same.\n");
		
	if (eggs == bacon || eggs == bread)
		printf("(5) Only two breakfast supplies cost the same.\n");
		
	if (eggs != bacon && bacon != bread)
		printf("(5) No supplies have the same total price.\n");
		
	
	/* (6) Jerry has enough money to buy any one of the three supplies. */
	if (eggs <= budget && bacon <= budget && bread <=budget) 
		printf("(6) Jerry has enough money to buy any one of the three supplies.\n");
	else if (eggs > budget || bacon > budget || bread > budget) 
		printf("(6) Jerry does not have enough money to buy any one of the three supplies.\n");
	
	
	/* (7) Jerry does not have enough money to buy any of the breakfast supplies. */
	if (eggs > budget && bacon > budget && bread > budget)
		printf("(7) Jerry does not have money to buy any of the breakfast supplies.\n");
	else 
		printf("(7) Jerry can buy at least one of the breakfast supplies.\n");
	 
	 
	 
	return 0;
	
}
	
	
	
	
	
	
	
	
	
	
	
	
