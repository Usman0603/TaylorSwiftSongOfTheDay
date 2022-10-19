#include<stdio.h>
int main(){
	int num1,num2, lower, lower10, upper10, count10, upper, lower1, count, count1, count2, count3, count4, count5, count6, count7, count8, count9, upper1, lower2, upper2, lower3, upper3, lower4, upper4, lower5, upper5, lower6, upper6, lower7, upper7, lower8, upper8, lower9,upper9;
	char *debut[14]={"Tim McGraw","Picture To Burn","Teardrops On My Guitar","A Place In This World","Cold As You","The Outside","Tied Together With A Smile","Stay Beautiful","Should\'ve Said No","Mary\'s Song (Oh My My My)","Our Song", "I\'m Only Me When I'm With You","Invisible","A Perfectly Good Heart"};
	char *fear[26]={"Fearless","Fifteen","Love Story","Hey Stephen","White Horse","You Belong With Me","Breathe","Tell Me Why","You\'re Not Sorry","The Way I Loved You","Forever & Always","The Best Day","Change","Jump Then Fall","Untouchable","Forever & Always (Piano Version)","Come In With The Rain","Superstar","The Other Side Of The Door","Today Was A Fairytale","You All Over Me","Mr. Perfectly Fine","We Were Happy","That\'s When","Don\'t You","Bye Bye Baby"};
	char *speak[17]={"Mine","Sparks Fly","Back To December","Speak Now","Dear John","Mean","The Story Of Us","Never Grow Up","Enchanted","Better Than Revenge","Innocent","Haunted","Last Kiss","Long Live","Ours","If This Was A Movie","Superman"};
	char *red[30]={"State Of Grace","Red","Treacherous","I Knew You Were Trouble","All Too Well","22","I Almost Do","We Are Never Ever Getting Back Together","Stay Stay Stay","The Last Time","Holy Ground","Sad Beautiful Tragic","The Lucky One","Everything Has Changed","Starlight","Begin Again","The Moment I Knew","Come Back... Be Here","Girl At Home","State Of Grace (Acoustic Version)","Ronan","Better Man","Nothing New","Babe","Message In A Bottle","I Bet You Think About Me","Forever Winter","Run","The Very First Night","All Too Well (10 minute version)"};
	char *t89[16]={"Welcome To New York","Blank Space","Style","Out Of The Woods","All You Had To Do Was Stay","Shake It Off","I Wish You Would","Bad Blood","Wildest Dreams","How You Get The Girl","This Love","I Know Places","Clean","Wonderland","You Are In Love","New Romantics"};
	char *rep[15]={"...Ready For It\?","End Game","I Did Something Bad","Don\'t Blame Me","Delicate","Look What You Made Me Do","So It Goes...","Gorgeous","Getaway Car","King Of My Heart","Dancing With Our Hands Tied","Dress","This Is Why We Can\'t Have Nice Things","Call It What You Want","New Year\'s Day"};
	char *lover[18]={"I Forgot That You Existed","Cruel Summer","Lover","The Man","The Archer","I Think He Knows","Miss Americana & The Heartbreak Prince","Paper Rings","Cornelia Street","Death By A Thousand Cuts","London Boy","Soon You\'ll Get Better","False God","You Need To Calm Down","Afterglow","ME!","It\'s Nice To Have A Friend","Daylight"};
	char *folk[17]={"the 1","cardigan","the last great american dynasty","exile","my tears ricochet","mirrorball","seven","august","this is me trying","illicit affairs","invisible string","mad woman","epiphany","betty","peace","hoax","the lakes"};
	char *ever[17]={"willow","champagne problems","gold rush","\'tis the damn season","tolerate it","no body, no crime","happiness","dorothea","coney island","ivy","cowboy like me","long story short","marjorie","closure","evermore","right where you left me","it\'s time to go"};
	char *mid[14]={"Lavender Haze","Maroon","Anti-Hero","Snow On The Beach","You\'re On Your Own, Kid","Midnight Rain","Question...?","Vigilante Shit","Bejeweled","Labyrinth","Karma","Sweet Nothing","Mastermind","Hits Different"};
	lower=1,upper=10,count=10;
	srand(time(0));
	num1=(rand()%(upper-lower+1)+lower);
	switch(num1){
		case 1:
			lower1=0,upper1=13,count1=10;
			num2=(rand()%(upper1-lower1+1)+lower1);
			printf("YOUR SONG OF THE DAY IS: %s", debut[num2]);
			break;
		case 2:
			lower2=0,upper2=25,count2=10;
			num2=(rand()%(upper2-lower2+1)+lower2);
			printf("YOUR SONG OF THE DAY IS: %s", fear[num2]);
			break;
		case 3:
			lower3=0,upper3=16,count3=10;
			num2=(rand()%(upper3-lower3+1)+lower3);
			printf("YOUR SONG OF THE DAY IS: %s", speak[num2]);
			break;
		case 4:
			lower4=0,upper4=29,count4=10;
			num2=(rand()%(upper4-lower4+1)+lower4);
			printf("YOUR SONG OF THE DAY IS: %s", red[num2]);
			break;
		case 5:
			lower5=0,upper5=15,count5=10;
			num2=(rand()%(upper5-lower5+1)+lower5);
			printf("YOUR SONG OF THE DAY IS: %s", t89[num2]);
			break;
		case 6:
			lower6=0,upper6=14,count6=10;
			num2=(rand()%(upper6-lower6+1)+lower6);
			printf("YOUR SONG OF THE DAY IS: %s", rep[num2]);
			break;
		case 7:
			lower7=0,upper7=17,count7=10;
			num2=(rand()%(upper7-lower7+1)+lower7);
			printf("YOUR SONG OF THE DAY IS: %s", lover[num2]);
			break;
		case 8:
			lower8=0,upper8=16,count8=10;
			num2=(rand()%(upper8-lower8+1)+lower8);
			printf("YOUR SONG OF THE DAY IS: %s", folk[num2]);
			break;
		case 9:
			lower9=0,upper9=16,count9=10;
			num2=(rand()%(upper9-lower9+1)+lower9);
			printf("YOUR SONG OF THE DAY IS: %s", ever[num2]);
			break;
		default:
			lower10=0,upper10=13,count10=10;
			num2=(rand()%(upper10-lower10+1)+lower10);
			printf("YOUR SONG OF THE DAY IS: %s", mid[num2]);
			break;
	}
	return 0;
}	
