//suite et fin du td3/4 

Bool existVal(int e, Liste *l) {
  bool i = FALSE;
  if(TestVide(*l) == 0) {
    return FALSE;
  }
  else {
    while(*l != NULL) {
      if(e == (*l).val) {
        i = TRUE;
        return i;
      }
      *l = l->suivant;
    }
    return i;
  }
}

Liste adresseVal(int e, Liste *l) {
  if(TestVide(*l) == 0) {
    return NULL;
  } else {
    while(*l != NULL) {
      if(e == (*l).val) {
        return *l;
      }
      *l = (*l).suivant;
    }
    return NULL;
  }
}


Liste generListe() {
  //ne pas oublier d'importer la bibliothèque time.h
  Liste *new;
  int ml;
  int val;
  int i;
  Liste *store;
  *store = NULL;
  ml = rand(1,10);
  for(i = 0; i < ml; i++) {
    val = rand(0,50);
    *new = InserTete(*new, val);
  }
  return *new;
}
  
  
  
  
  
  
  
  
  
  
