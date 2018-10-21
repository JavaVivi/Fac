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


  
