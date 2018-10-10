/**
 * 
 */
package td4.lucas;

import java.util.Arrays;

/**
 * @author andro
 *
 */
public class Lucas {
	private int[] suite;
	private int nbMax;
	private int res;
	private int i;
	
	public Lucas() {
		this(20);
	}
	
	public Lucas(int nbMax) {
		suite = new int[this.nbMax = nbMax];
	}
	//remplit le tableau selon la suite de Lucas
	public void remplissage() {
		suite[0] = 2;
		suite[1] = 1;
		for(i = 2; i < suite.length; i++) {
			suite[i] = suite[i - 2] + suite[i - 1];
		}
	}

	/**
	 * @return the suite
	 */
	public int[] getSuite() {
		return suite;
	}

	/**
	 * @param suite the suite to set
	 */
	public void setSuite(int[] suite) {
		this.suite = suite;
	}

	/**
	 * @return the nbMax
	 */
	public int getNbMax() {
		return nbMax;
	}

	/**
	 * @param nbMax the nbMax to set
	 */
	public void setNbMax(int nbMax) {
		this.nbMax = nbMax;
	}

	/**
	 * @return the res
	 */
	public int getRes(int i) {
		return res = suite[i];
	}

	/* (non-Javadoc)
	 * @see java.lang.Object#toString()
	 */
	@Override
	public String toString() {
		return "Lucas [suite=" + Arrays.toString(suite) + ", nbMax=" + nbMax + ", res=" + res + "]";
	}
	
}
