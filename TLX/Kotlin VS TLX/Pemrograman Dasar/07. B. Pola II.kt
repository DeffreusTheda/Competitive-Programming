import java.util.Scanner

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    val N = sc.nextInt()
    for(i in 1..N) {
        for(j in 1..(N-i)) print(" ")
        for(j in 1..i) print("*")
        print("\n")
    }   
}