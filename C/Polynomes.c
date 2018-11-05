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

void affichPoly(Polynome *p) {
  while(videPoly(*p) == 0) {
    printf(p->membre->coeff);
    printf(p->membre->degre);
    *p = p->suivant;
    }
}

Polynome derivPoly (Polynome *p) {
  if(*p == NULL) {
    return *p;
  }
  else {
    p->membre->coeff = p->membre->coeff * p->membre->degre;
    p->membre->degre = p->membre->degre-1;
  }
  return derivPoly(p->suivant);
}

Polynome sommePoly(Polynome *p1, Polynome *p2) {
  Polynome *p3;
  Monome *tmp;
  *p3 = NULL;
  while(videPoly(*p1) == 0 && videPoly(*p2)) == 0{
   if(p1->membre->coeff == p2->membre->degre) {
    if(p1->membre->coeff + p2->membre->coeff != 0) {
      tmp->degre = p1->membre->degre;
      tmp->coeff = p1->membre->degre + p2->membre->coeff;
    }
    *p1 = p1->suivant;
    *p2 = p2->suivant;
    inserQueue(*tmp, *p2);
  }
  }
  if(p1->membre->degre > p2->membre->degre) {
    tmp->degre = p2->membre->degre;
    tmp->coeff = p2->membre->coef;
    *p2 = p2->suivant;
    inserQueue(*tmp, *p3);
  }
  if(p1->membre->degre < p2->membre->degre) {
    tmp->degre = p1->membre->degre;
    tmp->coeff = p1->membre->coeff;
    *p1 = p1->suivant;
    inserQueue(*tmp, *p3);
  }
  if(videPoly(*p1) == 1 && videPoly(*p2)) == 0 {
    while(videPoly(*p2) == 0) {
      inserQueue(p2->membre, p3);
      *p2 = p2->suivant;
    }
  }
  if(
  

    
    
    
  
  
