
#ifndef GameCode
#define GameCode





static int score;
struct formeColeurie{
	string chemain;
	string couleur;
	string forme;
	
};


struct liste{
	int num;
    struct formeColeurie f;
    liste * next;
};
static liste* one;
 static liste* sixteen;
//pile* top;
//pile* lastone;

static void addToList(struct formeColeurie f){
    liste* l=new liste;
    l->f=f;
    l->next=NULL;
	
    if(one==NULL){
        one=l;
		one->num=1;
		sixteen=l;
        
    }else{
		l->num=sixteen->num+1;
		sixteen->next=l;
		sixteen=l;
		
		
    }
}


//-------------------------------struct double-------------------------------------
struct table{
	struct formeColeurie f;
	table* next;
	table* prev;
	int index;
};


//Declaration
static struct table *firstone,*lastone;
static  struct formeColeurie *nextShape;
//reparateur  des indices
static void reparateur(){
	table* l=new table;
	l=firstone;
	int k=1;
		 while(true){
            l->index=k;
			if(l==lastone)break;
			k++;
            l=l->next;
			
        }
}
static void addToTable(struct formeColeurie f){
    table* l=new table;
    l->f=f;
    l->next=NULL;
	l->prev=NULL;
    if(firstone==NULL){
		l->index=1;
        firstone=l;
		
		lastone=l;
        
    }else{
		l->index=lastone->index+1;
		l->prev=lastone;
		lastone->next=l;
		lastone=l;
		//firstone->prev=lastone;
		lastone->next=firstone;
		firstone->prev=lastone;
		
    }
	reparateur();
}
//initialize tableau



//addToLeft

static void addToLeft(struct formeColeurie f){
    table* l=new table;
    l->f=f;
    l->next=NULL;
	l->prev=NULL;
    if(firstone==NULL){
		l->index=1; 
        firstone=l;
		
		lastone=l;
        
    }else{
		l->prev=lastone;
		l->next=firstone;
		firstone->prev=l;
		firstone=l;
		int k=1;
		 while(true){
            l->index=k;
			if(l==lastone)break;
			k++;

            l=l->next;
			
        }
		//firstone->prev=lastone;
		//lastone->next=firstone;
		
    }
	reparateur();
}
//-----afiicher tab-------------------------
static string afficherTab(){
    table* l=new table;
    l=firstone;
	string st;
    if(one==NULL){
        st="liste is NULL";
    }else{
       while(l!=NULL){
            st+=l->f.chemain+"  ";
            l=l->next;
        }
    }
	return st;
}

//drop shape

static void dropShape(){
	  table* l=new table;
	 table* shape=new table;
	 table* shapeBef=new table;
	  table* shapeAf=new table;
    l=firstone;
	//table *shape,*shapeBef,*shapeAf;
	shape=firstone;
	string f1,f2,f3,c1,c2,c3;
	while( true){

		f1=shape->f.forme;
		f2=shape->next->f.forme;
		f3=shape->next->next->f.forme;
		c1=shape->f.couleur;
		c2=shape->next->f.couleur;
		c3=shape->next->next->f.couleur;
			//System::Windows::Forms::MessageBox::Show(gcnew System::String((f1+c1+ "  "+f2+c2+ "  "+f3+c3+ "  ").c_str()),"Your firstt here" );
	
    if((f1==f2 && f2==f3)||(c1==c2 && c2==c3)){
       if(shape==firstone){
		   firstone=shape->next->next->next;
		   firstone->prev=lastone;
		   lastone->next=firstone;
		    score+=10;
	   }
	   else if(shape==lastone->prev->prev){
			lastone=shape->prev;
		  // firstone=shape->next->next->next;
		   firstone->prev=lastone;
		   lastone->next=firstone;
		   //System::Windows::Forms::MessageBox::Show(gcnew System::String((f1+c1+ "  "+f2+c2+ "  "+f3+c3+ "  ").c_str()),"Your message here" );
	score+=10;
		  
	   }
	   else{
		   shapeBef=shape->prev;
		   shapeBef->next=shape->next->next->next;
		   shapeAf= shapeBef->next;
		   shapeAf->prev=shapeBef;
		    score+=10;
	   }
    }
	
	if(l->next->next==lastone){
		break;}
	l=l->next;
	shape=l;
	}
	reparateur();
	
}


//free plateau------------------------
static void freeTab(){
    table* l=new table;
    l=firstone;
	
    if(firstone!=NULL){
        while(l!=NULL){
            free(l);
			l=l->next;
        }
    }
}
//-----------------------------------------------------function and proc liste----------------------------------------------------




static string afficher(){
    liste* l=new liste;
    l=one;
	string st;
    if(one==NULL){
        st="liste is NULL";
    }else{
       while(l!=NULL){
            st+=l->f.chemain+"  ";
            l=l->next;
        }
    }
	return st;
}


 static System::String^ randImgNext(){
	liste* l=new liste;
	string cc;
    l=one;
	int rd=rand() % 16 + 1;
	while(l!=NULL){
		 
		 if(l->num==rd){
			 cc=l->f.chemain;
			 nextShape= &l->f;
			 return gcnew System::String(cc.c_str());
		 }
            l=l->next;
        }

}

	static void randImage(){
	//int rd=rand() % 16 + 1;
			for(int i=0;i<4;i++){
			//System::Windows::Forms::MessageBox::Show(, "Title of the message box "+i);
			randImgNext();
			 addToTable(*nextShape);
			}
		
}



//------------------------------------------------------------------------------------------------------------------------------
//struct formeCouleurie createFrm(string ligne){
//	
//			return f;
//}

static void rempliste() {
    fstream fichier;
    string ligne;
    fichier.open("C:/Users/lenovo/Desktop/S2/C++/imagesC++/filesNouns.txt", ios::in);
    if (!fichier) {
        ligne= "Ce fichier n'existe pas";
    }
    else {
        // tandis que nous n'avons pas atteint la fin du fichier
        while (!fichier.eof())
        {
            fichier >>ligne; 
			struct formeColeurie f;
			f.chemain=ligne;
			f.couleur= ligne.substr(43,1);
			f.forme=ligne.substr(41,2);
			
			addToList(f);
			//addToTable(f);
			// lire une ligne
           // cout << ligne << endl;   // afficher la ligne lue
        }
      // fermer le fichier
        fichier.close(); 
    }
    
}





#endif 