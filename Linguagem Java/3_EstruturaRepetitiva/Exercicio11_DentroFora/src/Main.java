/* Professor: Nelio
Descrição: Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo.
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
		
		int N, x, fora, dentro, i;

		System.out.print ("Quantos numeros voce vai digitar? ");
	    N = sc.nextInt();

	    fora = 0;
	    dentro= 0;

	    for(i = 1; i <= N; i++){

	    	System.out.print ("Digite um numero: ");
	        x = sc.nextInt();

	        if(x >= 10 && x <= 20){

	            dentro = dentro + 1;

	        }else {

	            fora = fora + 1;

	        };
	    };

	    System.out.println (dentro + " Dentro");
	    System.out.print (fora + " Fora");
	    
	    sc.close();

	}

}
