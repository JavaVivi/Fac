package td4.segment2;

import java.util.Arrays;

public class Ensemble {
	private Point[] tab;
	private int nbPoints = 0;
	
	public Ensemble() {
		this(20);
	}
	
	public Ensemble(int taille) {
		tab = new Point[taille];
	}

	public Point[] getTab() {
		return tab;
	}

	public void setTab(Point[] tab) {
		this.tab = tab;
	}

	public int getNbPoints() {
		return nbPoints;
	}

	public void setNbPoints(int nbPoints) {
		this.nbPoints = nbPoints;
	}
	//si le tableau n'est pas rempli, on range point dans la dernière case du tableau 
	//puis on incremente l'attribut nbPoints de 1 pour l'affichage
	public void ajouter(Point point) {
		if(nbPoints != tab.length) {
			tab[nbPoints] = point;
			nbPoints++;
		}
	}
	//on deplace chaque point du tableau
	public void translater(int dx, int dy) {
		for(int i = 0; i < tab.length; i++) {
			tab[i].setX(tab[i].getX() + dx);
			tab[i].setY(tab[i].getY() + dy);
			
		}
	}

	@Override
	public String toString() {
		return "Ensemble [tab=" + Arrays.toString(tab) + ", nbPoints=" + nbPoints + "]";
	}
	
	
}
 
