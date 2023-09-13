/* Professor: Nelio
Descrição: Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento
de cada linha. Suponha não haver empates
Autor(a): João Renato Sant'Ana
Data atual: 19/07/2023 */

import java.util.Locale; 
import java.util.Scanner; 

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		int n, i, j, maior;
	    int[][] mat = new int [9][9];

	    System.out.print ("Qual a ordem da matriz? ");
	    n = sc.nextInt();

	    for(i = 0; i < n; i++){

	        for(j = 0; j < n; j++){

	        	System.out.print ("Elemento [" + i + "," + j + "]:");
	            mat[i][j] = sc.nextInt();

	        }
	    }

	    System.out.println ("MAIOR ELEMENTO DE CADA LINHA: ");

	    for(i = 0; i < n; i++){

	        maior = 0;

	        for(j = 0; j < n; j++){

	            if(mat[i][j] > maior){

	                maior = mat[i][j];

	            }
	        }

	        System.out.println (maior);

	    }
	    
	    sc.close();

	}

}
