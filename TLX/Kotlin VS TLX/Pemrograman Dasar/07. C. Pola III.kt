import java.util.Scanner

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    val N = sc.nextInt()
    var now = 0
    for(i in 1..N) {
        for(j in 1..i) {
            print(now); now++; 
            if(now == 10) now = 0
        }
        print("\n")
    }
}