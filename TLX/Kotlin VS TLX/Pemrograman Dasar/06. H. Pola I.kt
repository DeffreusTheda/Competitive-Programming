import java.util.Scanner

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    val N = sc.nextInt(); val K = sc.nextInt()
    for(i in 1..N) {
        if(i == 1 && i % K == 0) print("*")
        else if(i == 1 && i % K != 0) print("${i}")
        else if(i % K == 0) print(" *")
        else print(" ${i}")
    }   
}