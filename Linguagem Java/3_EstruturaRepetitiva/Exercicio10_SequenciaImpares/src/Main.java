/* Professor: Nelio
Descrição: Leia um valor inteiro X. Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X,
se for o caso.
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
		
		 int x, i;

		    System.out.print ("Digite o valor de X: ");
		    x = sc.nextInt();

		    for(i = 1; i <= x; i++){

		        if(i%2 != 0){

		        	System.out.println ( i );

		        }
		    }
		    
		    sc.close();
		
	}

}
