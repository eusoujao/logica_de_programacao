/* Professor: Nelio
Descrição: Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores
negativos da matriz.
Autor(a): João Renato Sant'Ana
Data atual: 19/07/2023 */

import java.util.Locale; 
import java.util.Scanner; 


public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		int n, i, j, neg;
	    int[][] mat = new int [9][9];

	    System.out.print ("Qual a ordem da matriz? ");
	    n = sc.nextInt();

	    for(i = 0; i < n; i++){

	        for(j = 0; j < n; j++){

	        	System.out.print ("Elemento [" + i + "," + j + "]:");
	            mat[i][j] = sc.nextInt();

	        }
	    }

	    System.out.println ("DIAGONAL PRINCIPAL");

	    for(i = 0; i < n; i++){

	        for(j = 0; j < n; j++){

	            if(i == j){

	            	System.out.print (mat[i][j] + " ");

	            }
	        }
	    }

	    neg = 0;

	    for(i = 0; i < n; i++){

	        for(j = 0; j < n; j++){

	            if(mat[i][j] < 0){

	                neg = neg + 1;

	            }
	        }
	    }

	    System.out.println ();
	    System.out.print ("QUANTIDADE DE NEGATIVOS = " + neg);
	    
	    sc.close();

	}

}
