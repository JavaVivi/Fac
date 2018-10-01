//suite et fin du TD/TP 1 & 2 d'Algo

int SuppVal ( MultiEnsemble me, int valeur ) {
  int i, j;
  for (i = 0; i < me.NbElem; i++) {
    if ( me.tab[i].val == valeur ) {
          me.tab(i].nbOcc--;
     }
		 if ( me.tab[i].nbOcc == 0) {
			 j = i;
			 while ( j < me.NbElem ) {
				 me.tab(j] = me.tab(j+1];
				 j++;
			 }
				me.tab(j]=NULL;
				me.NbElem--;
				return me;
			}
		else if ( me.tab(i].val > valeur) {
			return me;
		}
	 }
	}

int Union ( MultiEnsemble m1, MultiEnsemble m2) {
    MultiEnsemble m3;
    int i;
    int k = 1;
    int j = 1;
    for (i = 0; i < m1.NbElem; i++) {
        if(j <= m2.nbElem) {
            while(m1.tab(i].val > m2.tab(j].val) {
                m3.tab(k] = m2.tab[j];
                j++;
                k++;
                m3.NbElem++;
            }
            if(m1.tab[i].val < m2.tab[j].val) {
                m3.tab[k] = m1.tab[i];
                k++;
                m3.NbElem++;
            }else {
                m3.tab[k].val = m1.tab[i].val;
                m3.tab[k].nbOcc = m1.tab[i].nbOcc;
                j++;
                k++;
                m3.nbElem;
            }
       else { 
           m3.tab[k] = m1.tab[i];
           k++;
           m3.NbElem++;
    }
     while ( j =< m2.NbElem) {
         m3.tab[k] = m2.tab[j];
         k++;
         j++;
         m3.nbElem;
     }
      return m3;
 }                       
						 

int Inter(MultiEnsemble m1, MultiEnsemble m2) {
	MultiEnsemble m3;
	int i;
	int j;
	int nbElem;
	int tmp,
	int k = 1;
	nbElem = min(m1.NbElem, m2.NbElem);
	m3 = init(NbElem);
	for(i = 0; i < m1.NbElem; i++) {
		tmp = RechElt(m2, m1.tab[i].val, m2, m2.NbElem)  // ???
		if ( tmp > o) {
			m3.tab[k].val = m1.tab[i].val;
			m3.tab[k].nbOcc = m1.tab[i].nbOcc;
			m3.NbElem++;
		}	
	}	
	return m3;
}
                 
      
