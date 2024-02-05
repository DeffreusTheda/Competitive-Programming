import java.util.Scanner

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    val N = sc.nextInt()
    if(N < 10) print("satuan")
    else if(N < 100) print("puluhan")
    else if(N < 1000) print("ratusan")   
    else if(N < 10000) print("ribuan")
    else print("puluhribuan")
}