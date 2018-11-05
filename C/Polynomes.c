//suite et fin du td sur les Polynomes 

Polynome suppTete ( Polynome *p ) {
  Polynome *tmp = NULL;
  Polynome *courant = *p;
  while(*courant != NULL) {
    *tmp = courant->suivant;
    free(*courant);
    *courant = *tmp;
  }
  return *p;
}

Monome appartientMonome (Monome *m, Polynome *p) {
  if(videPoly(*p) == 1) {
    return NULL;
  } else {
    while(*p != NULL) {
      if(p->membre == m) {
        return p->membre;
      }
      *p = p->suivant;
    }
    return NULL;
  }
}

void delPolynome (Monome *m2, Polynome *p) {
  Polynome *p2;
  Polynome *store;
  Polynome *next;
  Polynome *store2 = NULL;
  Boolean nontrouve = true;
  while(videPoly(*p) && nontrouve) {
    if(p->membre->degre != m2->suivant) {
      *p = p->suivant;
    }else {
      *next = p->suivant;
      free(*p);
      *p = *store2;
    }
    p->suivant = *next;
    nontrouve = false;
  }
}

int maxCoef(Polynome *p, int max) {
  if(p->suivant == NULL) {
    return max;
  }else{
    if(p->membre->coeff > max){
      max = p->membre->coeff
    }
    return maxCoef(p->suivant, max)
  }
}

int sommeCoef(Polynome *p, int somme) {
  if(p->suivant == NULL) {
    return somme;
  }else{
    somme = somme + p->membre->coef;
    return sommeCoef(p->suivant, somme);
  }
}

Polynome generPoly() {
  Polynome *new;
  int nm;
  int coef;
  int def;
  int i;
  Polynome *p1;
  *new = NULL;
  *new = malloc(sizeof(Polynome));
  nm = rand(1,10);
  for ( i = 1 ; i < nm; i++) {
    coef = rand (1,6);
    deg = rand(0,5);
    *p1 = NULL;
    *p1 = malloc(sizeof(Polynome));
    p1->membre->coeff = coef;
    p1->membre->degre = deg;
    *new = inserTete(&(*new), &(*p1));
    *new = trier(new);
  }
  return *new;
}



    
  
  
