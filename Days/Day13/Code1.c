 
arbre *creerarbre(arbre *A, int x, int prof)
{
   if (prof>0)
   {
      int val1;   // pour tester
      int val2;   // pour tester
      if (A==NULL)
      {
         A=malloc(sizeof(arbre));//creation de l'arbre
         A->valeur=x;    //la racine prend une valeur x
         A->fils_gauche=NULL; //le fils de gauche pointe sur null
         A->fils_droit=NULL; //le fils de droit pointe sur null
      }
      val1 = A->valeur+1;               // pour tester
      val2 = A->valeur+ pow(2,prof-1);  // pour tester
      A->fils_gauche=creerarbre(A->fils_gauche,val1,prof-1);
      A->fils_droit=creerarbre(A->fils_droit,val2,prof-1);
   }
   return A;
}
....
int main(void)
{
      arbre *R;
      R=creerarbre(NULL,1,7);
      parcoursprefixe(R);
      getchar();
      return 0;
}