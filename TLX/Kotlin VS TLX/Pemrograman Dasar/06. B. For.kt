import java.util.Scanner

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    val N = sc.nextInt(); var out = 0;
    for(i in 1..N) {
        out += sc.nextInt()
    }   
    print("${out}")
}