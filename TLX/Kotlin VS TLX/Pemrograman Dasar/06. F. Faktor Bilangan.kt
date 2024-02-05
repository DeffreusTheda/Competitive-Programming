import java.util.Scanner

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    val N = sc.nextInt(); 
    var i = N;
    while(i >= 1) {
        if(N % i == 0) println(i)
        i--
    }
}