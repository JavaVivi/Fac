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


  
  
