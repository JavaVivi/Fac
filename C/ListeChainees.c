//suite et fin du td3 

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


