#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int welcome();
int home();
int tohome();
int login();
int gs();
int contact();
int myself();
int welcome(){

    printf("\n\n*****************************************************************************");
    printf("\n*****************************************************************************");
    printf("\n***                            Welcome to                                 ***");
    printf("\n***                                my                                     ***");
    printf("\n***                             Project                                   ***");
    printf("\n***                               of                                      ***");
    printf("\n***                             ESFP-1                                    ***");
    printf("\n***                             Sem-1                                     ***");
    printf("\n*****************************************************************************");
    printf("\n*****************************************************************************");   
}

int main(){
  welcome();
  home();

  int t;
    scanf("%d",&t); 
     
    switch(t){

      case 1:
       
       login(); 


      break;
    
      case 2: 

       gs();

      break;

      case 3:
        
       contact();

      break;

      case 4:

       myself(); 

      break;   
    }
}



int home(){
    
    printf("\n\nFor Login press 1 ");
    printf("\nFor finding suitable Govt. schemes for you press 2 ");
    printf("\nTo contact us press 3 ");
    printf("\nTo know about me press 4 ");
    printf("\n");
}

int tohome(){

    int gh;

    printf("\n\nIf yo want to go back to home press 1 and if don't press 0 ");
    printf("\n");
    scanf("%d",&gh);

    if(gh==1){
        main();
    }

    else if(gh==0){
        exit(0);
    }
}

int login(){

  char username[15]; 
  char password[12]; 
 
  printf("\n\nEnter your username: "); 
  scanf("%s",&username); 
 
  printf("\nEnter your password: "); 
  scanf("%s",&password); 
 
  if(strcmp(username,"Rudra")==0){ 

    if(strcmp(password,"12345")==0){ 
      printf("\nLogin Successful");
    }

    else{ 
      printf("\nwrong password"); 
    }  
  }
    
  else{ 
    printf("\nUser doesn't exist"); 
  }

  tohome();  
}

int gs(){
       
  int govs;

  printf("\nIf you want to get information about Govt. schemes for Education press 11 ");
  printf("\nIf you want to get information about Govt. schemes for poverty press 12 ");
  printf("\nIf you want to get information about Govt. schemes for Economical Development press 13 ");
  printf("\nIf you want to get information about Govt. schemes for Women empowerment press 14 ");
  printf("\nIf you want to get information about Govt. schemes for health press 15 ");
  printf("\n");
  scanf("%d",&govs);

  switch(govs){

    case 11:
      
      printf("\n\nMid-Day Meal :");
      printf("\nThe Akshaya Patra Foundation, which was successfully implementing its own school lunch programme in Karnataka since 2000, was called in to give testimonies for verifying the efficacy of the scheme; following which the mandate to implement Mid Day Meal Scheme was passed.In order to successfully carry out this mandate, each State Government started its own Mid-Day Meal Programme with Akshara Dasoha being initiated by the Government of Karnataka.One of the major challenges faced by the Government was the successful implementation of the scheme. As per the NP-NSPE, 2006 Guidelines (Midday Meal Scheme Guidelines), wherever possible, the Government would mobilise community support and promote public-private partnership for the programme.");
      printf("\n\nSaakshar Bharat :");
      printf("\nSaakshar Bharat is a government of India initiative launched by Prime Minister Manmohan Singh to create a literate society through a variety of teaching–learning programmes for the non-literate and neo-literate of 15 years and above. It was launched on 8 September 2009 as a centrally sponsored scheme.");

    break;  

    case 12:
      
      printf("\n\nNational Food for Work Programme :");
      printf("Food for Work Programme initiated in 1970 and incorporated as the National Rural Employment Programme in the Sixth Plan. It started back in April 1977. The objective of the programme was to provide additional resources so that the generation of supplementary wages employment and providing food security.");
      printf("\n\nSwaranjayanti Gram Swarozgar Yojana (SGSY) :");
      printf("The SGSY Scheme is operative from 1st April 1999 in rural areas of the country. SGSY is a holistic Scheme covering all aspects of self employment such as organisation of the poor into Self Help Groups, training, credit, technology, infrastructure and marketing. The scheme will be funded by the Centre and the States in the ratio of 75 : 25 and will be implemented by Commercial Banks, Regional Rural Banks and Co-operative Banks. Other financial institutions, Panchayat Raj Institutions, District Rural Development Agencies (DRDAs), Non Government Organisations(NGOs), Technical institutions in the district, will be involved in the process of planning, implementation and monitoring of the scheme. NGOs help may be sought in the formation and nurturing of the Self Help Groups (SHGs) as well as in the monitoring of the progress of the Swarozgaris. Where feasible their services may be utilised in the provision of technology support, quality control of the products and as recovery monitors cum facilitators.");
    
    break;  

    case 13:
      
      printf("\n\nNational Social Assistance scheme :");
      printf("The National Social Assistance Programme is a Centrally Sponsored Scheme of the Government of India that provides financial assistance to the elderly, widows and persons with disabilities in the form of social pensions.");
      printf("\n\nPradhan Mantri Mudra Yojana :");
      printf("Pradhan Mantri MUDRA Yojana (PMMY) is a scheme launched by the Hon'ble Prime Minister on April 8, 2015 for providing loans upto 10 lakh to the non-corporate, non-farm small/micro enterprises. These loans are classified as MUDRA loans under PMMY");      

    break;  

    case 14:
      
      printf("\n\nBeti Bachao Beti Padhao Scheme :");
      printf("Beti Bachao Beti Padhao (BBBP) was launched by the Prime Minister on 22nd January, 2015 at Panipat, Haryana. BBBP addresses the declining Child Sex Ratio (CSR) and related issues of women empowerment over a life-cycle continuum.");
      printf("\n\nUJJWALA :");
      printf("Ujjwala 2.0: Additional allocation of 1.6 Crore LPG Connections under PMUY Scheme with special facility to migrant households. The scheme was launched in Mahoba, Uttar Pradesh by Hon'ble Prime Minister of India, Shri. Narendra Modi.");

    break; 

    case 15:
      
      printf("\n\nJanani Shishu Suraksha Karyakaram (JSSK) :");
      printf("Janani Shishu Suraksha Karyakaram (JSSK) launched on 1st June, 2011 entitles all pregnant women delivering in public health institutions to absolutely free and no expense delivery, including caesarean section");
      printf("\n\nRashtriya Kishor Swasthya Karyakram(RKSK) :");
      printf("The Rashtriya Kishor Swasthya Karyakram was launched on 7th January, 2014. The key principles of this programme is adolescent participation and leadership, Equity and inclusion, Gender Equity and strategic partnerships with other sectors and stakeholders. The programme envisions enabling all adolescents in India to realize their full potential by making informed and responsible decisions related to their health and well being and by accessing the services and support they need to do so.");

    break;   

  }

  tohome();
}

int contact(){

  printf("\n\nMobile No. : 1234567890");
  printf("\nE-mail : xxxxxx@gmail.com");

  tohome();
}       

int myself(){

  printf(" \nHi!! My self Rudra Patel.");
  printf(" \nI'm currently in Sem 1 of B.Tech in Computer Science with specialization of Big Data Analytics.");
  printf(" \nI'm studing in Ganpat ICT located in Ahemedabad.");
  printf(" \nThis is my ESFP-1 project for Sem 1");
  printf(" \nThe purpose of the project is to give information of Different Govt. schemes for people.");
  printf(" \nIn last I thank you all to see my project.");

  tohome();
}



