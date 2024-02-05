import java.util.Scanner

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    val N = sc.nextInt(); var arr = Array(1001) {0}   
    for(i in 1..N) {arr[sc.nextInt()]++}
    var hm = 0
    for(i in 1..1000) {if(arr[hm] <= arr[i]) hm = i}
    print(hm)
}