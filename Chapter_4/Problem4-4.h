// 헤더파일

class Sample{
    int size;
    int*p;
    
public :
    Sample(int n){ //생성자
        size = n; 
        p = new int [n]; //n개 정수 배열의 동적생성
    }
    void read(); //동적 할당받은 정수 배열 p에 정수 입력받음
    void write(); //정수 배열을 화면에 출력
    int big(); //정수 배열에서 가장 큰 수 리턴
    ~Sample(); //소멸자
};