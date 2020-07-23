#include<stdio.h>
#include<conio.h>
int main()
{
	int opt1,opt2;
	float price,Total;
	printf("\nWelcome to Capsicum\n1 Order the pizza\n2 Order the Noodles\n3 Order the Roll\n4 Order the Sweets\n:");
	scanf("%d",&opt1);
	switch(opt1)
	{
		case 1:
			{
	printf("\n1cheese burst pizza=149+gst(5)=154.\n2 Indian hot pizza=80+gst(3)=82.\n3 Desi combo pizza=110+gst(4)=114.\n:");
				scanf("%d",&opt2);
				switch(opt2)
				{
					case 1:
						{						
						price=(154*5/100);
						Total=154-price;
						printf("\nCheese burst pizza (5 percent discount)total Rs.=%f",Total);
						printf("Sorry guys this is not available now");
						break;
			        	}
			    	case 2:
					{
						price=82*4/100;
						Total=82-price;
						printf("\nIndian hot pizza(4 percent discount)total Rs. =%f",Total);
						break;
					}
					case 3:
						{
							price=114*5/100;
							Total=114-price;
							printf("\n desi combo pizza (5 percent discount)total Rs.=%f",Total);
							break;
						}
			}
			break;
	}
	
			case 2:
				{
					printf("\n1 Veg noodles=75+gst(5)=80.\n2 paneer noodles=95+gst(7)=102.\n:");
					scanf("%d",&opt2);
					switch(opt2)
					{
						case 1:
							{
								price=80*6/100;
								Total=80-price;
								printf("\n Veg noodles(6 percent discount)total Rs.=%f",Total);
								break;
							}
							case 2:
								{
									price=102*7/100;
									Total=102-price;
									printf("\n paneer noodles (7 percent discount)total Rs.=%f",Total);
									break;
								}
					}
					break;
				}
				case 3:
					{
						printf("\n1 Veg. roll=45+gst(6)=51.\n2 Cheese roll =65+gst(8)=73.\n:");
						scanf("%d",&opt2);
						switch(opt2)
						{
							case 1:
								{
									price=51*6/100;
									Total=51-price;
									printf("\n Veg roll (6 percent discount)total Rs.=%f",Total);
									break;
								}
								case 2:
									{
										price=73*7/100;
										Total=73-price;
										printf("\nCheese roll (7 percent discount)total Rs.=%f",Total);
										break;
									}
						}
						break;
					}
						case 4:
					{
						printf("\n1Kaju Burfi(1kg)=780+gst(5)=785.\n2 Khoya Roll=415+gst(5)=420.\n:");
						scanf("%d",&opt2);
						switch(opt2)
						{
							case 1:
								{
									price=785*10/100;
									Total=785-price;
									printf("\n Kaju Burfi (10 percent discount)total Rs.=%f",Total);
									break;
								}
								case 2:
									{
										price=420*7/100;
										Total=420-price;
										printf("\nKhoya Roll (7 percent discount)total Rs.=%f",Total);
										break;
									}
						}
						break;
					}
					default :
						{
						printf("\n Wrong choices");}	
							getch();
						return 0;
	}
	
}
