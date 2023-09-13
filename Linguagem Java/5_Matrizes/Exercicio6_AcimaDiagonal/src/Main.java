/* Professor: Nelio
Descrição: Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Mostrar a soma dos elementos acima da
diagonal principal. Um exemplo de números acima da diagonal
principal é mostrado ao lado (no caso as células com fundo cinza).
Autor(a): João Renato Sant'Ana
Data atual: 19/0672023 */

import java.util.Locale; 
import java.util.Scanner; 

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		int n, i, j, soma;
	    int[][] mat = new int [9][9];

	    System.out.print ("Qual a ordem da matriz? ");
	    n = sc.nextInt();

	    for(i = 0; i < n; i++){

	        for(j = 0; j < n; j++){

	        	System.out.print ("Elemento [" + i + "," + j + "]:");
	            mat[i][j] = sc.nextInt();

	        }
	    }

	    soma = 0;

	    for(i = 0; i < n; i++){

	        for(j = 0; j < n; j++){

	            if(j > i){

	                soma = soma + mat[i][j];

	            }
	        }
	    }

	    System.out.print ("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " + soma);
	    
	    sc.close();

	}

}
