//constants
#define rows  5
#define cols 5

//declare
 char name[]="Navallo_Higgins";
 char id[]="04211045";
 int mtx[rows][cols];
 char buffer[64];

//main
void setup(){
 //begin_serialCOMMS
 Serial.begin(9600);//setBaudRate
 snprintf(buffer,64,"Name: %s\nID: %s\n\n",name,id);
 Serial.print(buffer);
//5x5Matrix

 //process>>>>
 //rows<><><>
 for(int r=1;r<rows+1;r++){
  //columns<><><><>
  for(int c=1;c<cols+1;c++){
   //fills<><><>
   mtx[r-1][c-1]=0;
   if(r==c)mtx[r-1][c-1]=c;
}
}

//output
 for(int r=0;r<rows;r++){
  //columns<><><><>
  for(int c=0;c<cols;c++){
   //fills<><><>
   snprintf(buffer,16,"%d ",mtx[r][c]);
   Serial.print(buffer);
}
  Serial.print("\n");
}

}
void loop(){}
