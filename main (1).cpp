#include <iostream>
using namespace std;


float kungpao();
float soyamilk();
float dumplings();
float tofu();
float yogurt();
float wonton();
float chowmein();
float ricecake ();
float hotpot();
float pork();
float kimchi();
//Introduction of the program
int main()
{
    cout<<"\nKEERTHANA PRIYAM KANNAN";
    cout<<"\nANNAI WOMEN'S COLLEGE OF ART'S AND SCIENCE!!";
    int choice;
    float totalamount,k1,k2,k3,k4,k5,k6,k7,k8,k9,k10,k11;
    char dec;
    cout<<"\n\twelcome to KP 🍚 supermarket";
    start:
    cout<<"\n1.kungpao \n2.soyamilk🥛 \n3.dumpling 🥟 \n4.tofu \n5.yogurt\n6.wonton\n7.chowmein\n8.🍚 ricecake \n9.hotpot\n10.pork 🥩 \n11.kimcho";
    cout<<"\nNOTE:if you want Instant items quantity in grams enter in float,Example->1000g=1.0";
    cout<<"\nenter your choice:";cin>>choice;
      switch(choice){
          case 1:
          k1=kungpao();
          break;
          case 2:
          k2=soyamilk();
          break;
          case 3:
          k3=dumplings();
          break;
          case 4:
          k4=tofu();
          break;
          case 5:
          k5=yogurt();
          break;
          case 6:
          k6=wonton();
          break;
          case 7:
          k7=chowmein();
          break;
          case 8:
          k8=ricecake();
          break;
          case 9:
          k9=hotpot();
          break;
          case 10:
          k10=pork();
          break;
          case 11:
          k11=kimchi();
          break;
          default:
            exit(0);
      }
      
      totalamount=k1+k2+k3+k4+k5+k6+k7+k8+k9+k10+k11;
      cout<<"\nthe total cost is:"<<totalamount;
      cout<<"\nif you finished the shopping press y,want to continue press n:";cin>>dec;
      if(dec=='y')
      {
          cout<<"\nThank you!for shopped in KP 🍚 supermarket!!";
          exit(0);
      }
      else{
      goto start;
      }
    return 0;
}

// price of kungpao
float kungpao(){
    cout<<"\n kungpao  = ₹150";
    float quantity ;
    cout<<"\n enter the quantity you want ";cin>>quantity;
    cout<<"\nthe total cost of kungpao is:"<<quantity*150;
    return quantity*150;
}
//price of soyamilk
float soyamilk(){
    cout<<"\n soyamilk = ₹25";
    float quantity ;
    cout<<"\n enter the quantity you want ";cin>>quantity;
    cout<<"\nthe total cost of soyamilk is:"<<quantity*25;
    return quantity*25;
}
//price of dumplings
float dumplings(){
    cout<<"\n 🥟 dumplings  = ₹100";
    float quantity ;
    cout<<"\n enter the quantity you want ";cin>>quantity;
    cout<<"\nthe total cost of dumplings is:"<<quantity*100;
    return quantity*100;
}
//price of tofu
float tofu(){
    cout<<"\n tofu = ₹500";
    float quantity ;
    cout<<"\n enter the quantity you want ";cin>>quantity;
    cout<<"\nthe total cost of tofu is:"<<quantity*500;
    return quantity*500;
}
//price of yogurt
float yogurt(){
    cout<<"\n yogurt = ₹20";
    float quantity ;
    cout<<"\n enter the quantity you want ";cin>>quantity;
    cout<<"\nthe total cost of yogurt is:"<<quantity*20;
    return quantity*20;
}
//price of wonton
float wonton(){
    cout<<"\n 🍫 wonton = ₹1009";
    float quantity ;
    cout<<"\n enter the quantity you want ";cin>>quantity;
    cout<<"\nthe total cost of wonton is:"<<quantity*1009;
    return quantity*1009;
}
//price of chowmein
float chowmein(){
    cout<<"\n ☕️  chowmein = ₹300";
    float quantity ;
    cout<<"\n enter the quantity you want ";cin>>quantity;
    cout<<"\nthe total cost of chowmein is:"<<quantity*300;
    return quantity*300;
}
//price of ricecake
float ricecake(){
    cout<<"\n 🍚 ricecake = ₹400";
    float quantity ;
    cout<<"\n enter the quantity you want ";cin>>quantity;
    cout<<"\nthe total cost of ricecake is:"<<quantity*400;
    return quantity*400;
}
//price of hotpot
float hotpot(){
    cout<<"\n hotpot = ₹1500";
    float quantity ;
    cout<<"\n enter the quantity you want ";cin>>quantity;
    cout<<"\nthe total cost of hotpot is:"<<quantity*1500;
    return quantity*1500;
}
//price of pork 🥩 
float pork(){
    cout<<"\n pork 🥩 = ₹1800";
    float quantity ;
    cout<<"\n enter the quantity you want ";cin>>quantity;
    cout<<"\nthe total cost of pork 🥩 is:"<<quantity*1800;
    return quantity*1800;
}

//price of kimchi 
float kimchi(){
    cout<<"\n kimchi= ₹1899";
    float quantity ;
    cout<<"\n enter the quantity you want ";cin>>quantity;
    cout<<"\nthe total cost of kimchi is:"<<quantity*1899;
    return quantity*1899;
}

