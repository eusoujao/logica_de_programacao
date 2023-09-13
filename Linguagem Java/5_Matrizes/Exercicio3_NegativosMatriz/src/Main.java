/* Professor: Nelio
Descrição: Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros, conforme
exemplo. Em seguida, mostrar na tela somente os números negativos da matriz.
Autor(a): João Renato Sant'Ana
Data atual: 19/07/2023 */

import java.util.Locale; 
import java.util.Scanner; 

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		int m, n, i, j;
	    int[][] mat = new int [9][9];

	    System.out.print ("Qual a quantidades de linha da matriz? ");
	    m = sc.nextInt();
	    System.out.print ("Qual a quantidades de colunas da matriz? ");
	    n = sc.nextInt();

	    for(i = 0; i < m; i++){

	        for(j = 0; j < n; j++){

	        	System.out.print ("Elemento [" + i + "," + j + "]:");
	            mat[i][j] = sc.nextInt();

	        }
	    }

	    System.out.println ("VALORES NEGATIVOS:");

	    for(i = 0; i < m; i++){

	        for(j = 0; j < n; j++){

	            if(mat[i][j] < 0){

	            	System.out.println (mat[i][j]);

	            }
	        }
	    }
	    
	    sc.close();

	}

}
