#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
void createTable() {

}
int x_13= 0;
int y_13 = 0;
int r_13 = 0;
int p_13 = 0;

void randomA(){
        
    srand(time_t(nullptr));
    r_13 = rand();
        
    for (int n=0; n != 1; ++n) {
        x_13 = 10;
        while(x_13 > 9)
            x_13 = 1 + std::rand()/((RAND_MAX + 1u)/9);
        std::cout << x_13 << ' ';
    }
    for (int n=0; n != 1; ++n) {
        y_13 = 10;
        while(y_13 > 9)
            y_13 = 1 + std::rand()/((RAND_MAX + 1u)/9);
        std::cout << y_13 << ' ' << std::endl;
    }
        
}

void compare(){
        
    if (p_13 == x_13*y_13){
        std::cout << "Верно";
    }
    else{
        std::cout << "Неверно";
    }
        
}
int n_15 = 0;

void time(){
    
    if ((n_15 > 0) & (n_15 <= 12)){
        if ((n_15 == 12) || (n_15 == 1) || (n_15 == 2)){
            std::cout << "Время года - зима" << std::endl;
            if (n_15 == 12){
                std::cout << "Месяц - декабрь";
            }
            if (n_15 == 1){
                std::cout << "Месяц - январь";
            }
            if (n_15 == 2){
                std::cout << "Месяц - февраль";
            }
        }
        
        if ((n_15 == 3) || (n_15 == 4) || (n_15 == 5)){
            std::cout << "Время года - весна" << std::endl;
            if (n_15 == 3){
                std::cout << "Месяц - март";
            }
            if (n_15 == 4){
                std::cout << "Месяц - апрель";
            }
            if (n_15 == 5){
                std::cout << "Месяц - май";
            }
        }
        
        if ((n_15 == 6) || (n_15 == 7) || (n_15 == 8)){
            std::cout << "Время года - лето" << std::endl;
            if (n_15 == 6){
                std::cout << "Месяц - июнь";
            }
            if (n_15 == 7){
                std::cout << "Месяц - июль";
            }
            if (n_15 == 8){
                std::cout << "Месяц - август";
            }
        }
        
        if ((n_15 == 9) || (n_15 == 10) || (n_15 == 11)){
            std::cout << "Время года - осень" << std::endl;
            if (n_15 == 9){
                std::cout << "Месяц - сентябрь";
            }
            if (n_15 == 10){
                std::cout << "Месяц - октябрь";
            }
            if (n_15 == 11){
                std::cout << "Месяц - ноябрь";
            }
        }
        
    }
    else{
        std::cout << "Такого месяца не существует ";
    }
}
int n_17 = 0;
int a_17 = 0;

void kop(){
    
    a_17 = n_17 % 10;
    
    if ((n_17 >= 1) & (n_17 < 100)){
        
            std::cout << n_17;
            
            if ((n_17 == 11) || (n_17 == 12) || (n_17 == 13) || (n_17 == 14) || (n_17 == 15) || (n_17 == 16) || (n_17 == 17) || (n_17 == 18) || (n_17 == 19)){
            std::cout << " копеек";
                
            } else{
                
            switch (a_17) {
        case 0:
            std::cout << " копеек";
            break;
        case 1:
            std::cout << " копейка";
            break;
        case 2:
            std::cout << " копейки";
            break;
        case 3:
            std::cout << " копейки";
            break;
        case 4:
            std::cout << " копейки";
            break;
        case 5:
            std::cout << " копеек";
            break;
        case 6:
            std::cout << " копеек";
            break;
        case 7:
            std::cout << " копеек";
            break;
        case 8:
            std::cout << " копеек";
            break;
        case 9:
            std::cout << " копеек";
            break;
                }
            }
    }else{
        std::cout << "Введите число в диапозоне от 1 до 99: ";
    }
}
int D0_191 = 0;
int D1_191 = 0;
int D2_191 = 0;
int r_191 = 0;
int x_191 = 0;
int b_191 = 0;

void randomA191(){
    
    srand(time_t(nullptr));
    r_191 = rand();
    
    for (int n=0; n != 1; ++n) {
        x_191 = 1000;
        while(x_191 > 999)
            x_191 = 100 + std::rand()/((RAND_MAX + 100u)/999);
        std::cout << x_191 << ' ' <<std::endl;
    }
    
}

void number191(){
    
    D0_191 = x_191 % 10;
    D1_191 = (x_191 % 100) / 10;
    D2_191 = (x_191 % 1000) / 100;
    
}

void count191(){
    
    if (b_191 == D2_191 * D1_191 *  D0_191){
         std::cout << "Ваше число равно произведению цифр заданного числа " << x_191 << std::endl;
     }
     
     if (b_191 < D2_191 * D1_191 *  D0_191){
         std::cout << "Ваше число меньше произведения цифр заданного числа " << x_191 << std::endl;
     }
     
      if (b_191 > D2_191 * D1_191 *  D0_191){
         std::cout << "Ваше число больше произведения цифр заданного числа " << x_191 << std::endl;
     }
     
}
int D0_192 = 0;
int D1_192 = 0;
int D2_192 = 0;
int x_192 = 0;
int r_192 = 0;

void randomA_192(){
    
    srand(time_t(nullptr));
    r_192 = rand();
    
    for (int n=0; n != 1; ++n) {
        x_192 = 1000;
        while(x_192 > 999)
            x_192 = 100 + std::rand()/((RAND_MAX + 100u)/999);
        std::cout << x_192 << ' ' <<std::endl;
    }
    
}

void number_192(){
    
    D0_192 = x_192 % 10;
    D1_192 = (x_192 % 100) / 10;
    D2_192 = (x_192% 1000) / 100;
    
}

void count_192(){
    
    if ((D2_192 + D1_192 +  D0_192) % 7 == 0){
      std::cout << "Сумма цифр числа " << x_192 << " кратно семи";
    }else{
      std::cout << "Сумма цифр числа " << x_192 << " не кратно семи";
    }
  
}
int main() {
    
    /*Task 1*/
    std::cout << "Task 1" << "\n\n";
    double base1_1,base2_1,height_1;
    std::cout << "Enter the length of the first base of the trapezoid: " << std::endl;
    std::cin >> base1_1;
    std::cout << "Enter the length of the second base of the trapezoid: " << std::endl;
    std::cin >> base2_1;
    std::cout << "Enter the height of the trapezoid: " << std::endl;
    std::cin >> height_1;
    double AreaOfTrapezoid_1=((base1_1 + base2_1) * height_1) / 2.0;
    std::cout << "Area of trapezoid: "<< AreaOfTrapezoid_1<< std::endl;
    createTable();
    
    /*Task 2*/
    std::cout << "Task 2" << "\n\n";
    int radius_2 = 0;
    float pi = 3.1415927, circumference = 0.0;
    std::cout << "Enter the radius" << std::endl;
    std::cin >> radius_2;
    circumference = 2 * radius_2 * pi;
    std::cout << "Circumference length : ";
    std::cout << circumference << "\n\n\n";
    createTable();
    
    /*Task 3*/
    std::cout << "Task 3" << "\n\n";
    double leg1_3,leg2_3;
    std::cout << "Enter the length of the first leg: " << std::endl;
    std::cin >> leg1_3;
    std::cout << "Enter the length of the second leg: " << std::endl;
    std::cin >> leg2_3;
    double AreaOfRightTriangle_3= leg1_3 * leg2_3 * 0.5;
    double HypotenuseOfRightTriangle = sqrt(leg1_3 * leg1_3 + leg2_3 * leg2_3);
    std::cout << "Area of right triangle: "<< AreaOfRightTriangle_3<< std::endl;
    std::cout << "Hypotenuse of right triangle "<< HypotenuseOfRightTriangle<< std::endl;
    createTable();
    
    /*Task 4*/
    std::cout << "Task 4" << "\n\n";
    int numb = 0, podnumb_1 = 0, podnumb_2 = 0, podnumb_3 = 0, podnumb_4 = 0, ans4 = 0;
    std::cout << "Enter a four-digit number" << std::endl;
    std::cin >> numb;
    podnumb_1 = numb % 10;
    numb /= 10;
    podnumb_2 = numb % 10;
    numb /= 10;
    podnumb_3 = numb % 10;
    podnumb_4 = numb / 10;
    std::cout << "Answer : ";
    ans4 = podnumb_1 + podnumb_2 + podnumb_3 + podnumb_4;
    std::cout << ans4 << "\n\n\n";
    createTable();
    
    /*Task 5*/
    std::cout << "Task 5" << "\n\n";
    double x_5, y_5;
    std::cout << "Enter x coordinate: ";
    std::cin >> x_5;
    std::cout << "Enter y coordinate: ";
    std::cin >> y_5;
    
    double radius_5 = sqrt(x_5 * x_5 + y_5 * y_5);
    double theta_5 = atan2(y_5, x_5);
    
    std::cout << "Radius (r): " << radius_5 << std::endl;
    std::cout << "Angle (theta) in radians: " << theta_5 << std::endl;
    createTable();
    
    /*Task 6*/
    std::cout << "Task 6" << "\n\n";
    float radius_6=0.0, theta=0.0, x_6=0.0, y_6=0.0;
    std::cout << "Enter radius : ";
    std::cin >> radius_6;
    std::cout << "Enter the angle value (from 0 to 360) : ";
    std::cin >> theta;
    x_6 = radius_6 * cos(theta * 3.1415927 / 180);
    y_6 = radius_6 * sin(theta * 3.1415927 / 180);
    if (theta == 90) {
        x_6 = 0.0;
        std::cout << "x : " << x_6 << "  y : " << radius_6 << "\n\n\n";
    }
    if (theta == 180 ) {
        y_6 = 0.0;
        std::cout << "x : " << -radius_6 << "  y : " << y_6 << "\n\n\n";
    }
    if (theta == 270) {
        x_6 = 0.0;
        std::cout << "x : " << x_6 << "  y : " << -radius_6 << "\n\n\n";
    }
    if ((theta == 360) || (theta == 0)) {
        x_6 = 0.0;
        std::cout << "x : " << radius_6 << "  y : " << x_6 << "\n\n\n";
    }
    if((theta!=0)&& (theta != 90) && (theta != 180) && (theta != 270) && (theta != 360)){
        x_6 = radius_6 * cos(theta * 3.1415927 / 180);
        y_6 = radius_6 * sin(theta * 3.1415927 / 180);
        std::cout << "x : " << x_6 << "  y : " << y_6 << "\n\n\n";
    }
    createTable();
    
    /*Task 7*/
    std::cout << "Task 7" << "\n\n";
    double a_7, b_7, c_7;
    std::cout << "Enter coefficient a: ";
    std::cin >> a_7;
    std::cout << "Enter coefficient b: ";
    std::cin >> b_7;
    std::cout << "Enter coefficient c: ";
    std::cin >> c_7;
    double discriminant = b_7 * b_7 - 4 * a_7 * c_7;
    double root1_7, root2_7;
    if (discriminant > 0) {
        root1_7 = (-b_7 + sqrt(discriminant)) / (2 * a_7);
        root2_7 = (-b_7 - sqrt(discriminant)) / (2 * a_7);
        std::cout << "Root 1: " << root1_7 << std::endl;
        std::cout << "Root 2: " << root2_7 << std::endl;
        
    }   else if (discriminant == 0) {
        root1_7 = -b_7 / (2 * a_7);
        std::cout << "Root: " << root1_7 << std::endl;
    }   else {
        std::cout << "No Roots: " << std::endl;
    }
    createTable();
    
    /*Task 8*/
    int a_8 = 0, b_8 = 0, c_8 = 0, a_squared = 0, b_squared = 0, c_squared = 0;
    float m1_8 = 0.0, m2_8 = 0.0, m3_8 = 0.0;
    std::cout << "Task 8" << "\n\n";
    std::cout << "Enter a, b, c : ";
    std::cin >> a_8 >> b_8 >> c_8;
    a_squared = a_8 * a_8;
    b_squared = b_8 * b_8;
    c_squared = c_8 * c_8;
    m1_8 = 0.5 * (0.5 * (2 * b_squared + 2 * c_squared - a_squared));
    m2_8 = 0.5 * (0.5 * (2 * c_squared + 2 * a_squared - b_squared));
    m3_8 = 0.5 * (0.5 * (2 * a_squared + 2 * b_squared - c_squared));
    std::cout << "Answer : " << m1_8 << ", " << m2_8 << ", " << m3_8 << "\n\n\n";
    createTable();
    
    /*Task 9*/
    std::cout << "Task 9" << "\n\n";
    int k_9;
    
    std::cout << "Enter the number of seconds of the day (k): ";
    std::cin >> k_9;
    int hours_9 = k_9 / 3600;
    int Seconds_9 = k_9 % 3600;
    int minutes_9 = Seconds_9 / 60;
    std::cout << "Whole hours have passed: " << hours_9 << std::endl;
    std::cout << "Whole minutes have passed: " << minutes_9 << std::endl;
    createTable();
    
    /*Task 10*/
    std::cout << "Task 10" << "\n\n";
    int a = 0, b = 0, c = 0;
    std::cout << "Enter a, b, c : ";
    std::cin >> a >> b >> c;
    if (((a == b) & (a != c)) || ((a == c) & (a != b)) || ((c == b) & (c != a))) {
        std::cout << "the triangle is isosceles" << "\n\n\n";
    }
    else {
        std::cout << "the triangle is not isosceles" << "\n\n\n";
    }
    createTable();
    
    /*Task 11*/
    std::cout << "Task 11" << "\n\n";
    
    double s1_11 = 0;
    double s2_11 = 0;
    
    std::cout << "Введите стоимость покупки: ";
    std::cin >> s1_11;
    
    if (s1_11 > 1000){
        s2_11 = s1_11*0.9;
        std::cout << "Стоимость с учетом скидки: " << s2_11;
    }else{
        std::cout << "Скидка не предоставляется.";
        createTable();
        
        /*Task 12*/
        std::cout << "Task 12" << "\n\n";
        int height = 0;
        float weight = 0.0, ideal_weight = 0.0;
        std::cout << "Enter height" << std::endl;
        std::cin >> height;
        std::cout << "Enter weight" << std::endl;
        std::cin >> weight;
        ideal_weight = height - 100;
        if (weight == ideal_weight) {
            std::cout << "Perfect" << "\n\n\n";
        }
        if (weight < ideal_weight) {
            std::cout << "you need to gain weight" << "\n\n\n";
        }
        if (weight > ideal_weight) {
            std::cout << "you need to lose weight" << "\n\n\n";
        }
        createTable();
        
        /*Task 13*/
        std::cout << "Task 13" << "\n\n";
        
        std::cout << "Вам даны два числа: ";
        randomA();
        std::cout << "Напишите их произведение ";
        std::cin >> p_13;
        compare();
        createTable();
        
        /*Task 14*/
        std::cout << "Task 14" << "\n\n";
        int coast_per_hour = 100, hours = 0, week = 0, total_coast = 0;
        float discount = 0.8;
        std::cout << "Enter day of the week" << std::endl;
        std::cin >> week;
        std::cout << "Enter the number of hours" << std::endl;
        std::cin >> hours;
        if (week >= 6) {
            total_coast = coast_per_hour * discount * hours;
            std::cout << "your total cost will be : " << total_coast << "\n\n\n";
        }
        else {
            total_coast = coast_per_hour * hours;
            std::cout << "your total cost will be : " << total_coast << "\n\n\n";
        }
        createTable();
        
        /*Task 15*/
        std::cout << "Task 15" << "\n\n";
        std::cout << "Введите номер месяца ";
        std::cin >> n_15;
        time();
        createTable();
        
        /*Task 16*/
        std::cout << "Task 16" << "\n\n";
        int ticket_number = 0, figure_1 = 0, figure_2 = 0, figure_3 = 0, figure_4 = 0, figure_5 = 0, figure_6 = 0, ans_1_three = 0, ans_2_three = 0;
        std::cout << "Enter a six-digit number" << std::endl;
        std::cin >> ticket_number;
        figure_1 = ticket_number % 10;
        ticket_number /= 10;
        figure_2 = ticket_number % 10;
        ticket_number /= 10;
        figure_3 = ticket_number % 10;
        ticket_number /= 10;
        figure_4 = ticket_number % 10;
        ticket_number /= 10;
        figure_5 = ticket_number % 10;
        figure_6 = ticket_number / 10;
        ans_1_three = figure_1 + figure_2 + figure_3;
        ans_2_three = figure_4 + figure_5 + figure_6;
        if (ans_1_three == ans_2_three) {
            std::cout << "Your number is a lucky one" << "\n\n\n";
        }
        else {
            std::cout << "Your number is unlucky" << "\n\n\n";
        }
        createTable();
        
        /*Task 17*/
        std::cout << "Task 17" << "\n\n";
        std::cout << "Введите число от 1 до 99: ";
            std::cin >> n_17;
            
            kop();
        createTable();
        
        /*Task 18*/
        std::cout << "Task 18" << "\n\n";
        int four_digit_number, dop_four_digit_number_1 = 0, dop_four_digit_number_2 = 0, dop_four_digit_number_3 = 0, dop_four_digit_number_4 = 0;
        std::cout << "Enter a four-digit number" << std::endl;
        std::cin >> four_digit_number;
        dop_four_digit_number_1 = four_digit_number % 10;
        four_digit_number /= 10;
        dop_four_digit_number_2 = four_digit_number % 10;
        four_digit_number /= 10;
        dop_four_digit_number_3 = four_digit_number % 10;
        dop_four_digit_number_4 = four_digit_number / 10;
        if ((dop_four_digit_number_1 == dop_four_digit_number_4) & (dop_four_digit_number_2 == dop_four_digit_number_3)) {
            std::cout << "The number is a palindrome" << "\n\n\n";
        }
        else {
            std::cout << "The number is not a palindrome" << "\n\n\n";
        }
        createTable();
        
        /*Task 19.1*/
        std::cout << "Task 19.1" << "\n\n";
        randomA191();
            
        number191();
            
        std::cout << "Введите любое число " << std::endl;
            std::cin >> b_191;

            count191();
            
            std::cout << "Произведение цифр " << D2_191 << "*" << D1_191 << "*" << D0_191 << " = ";
            std::cout << D2_191 * D1_191 *  D0_191;
            
        }
        createTable();
    
        /*Task 19.2*/
        std::cout << "Task 19.2" << "\n\n";
    randomA_192();
        
        number_192();
        
        std::cout << "Сумма цифр " << D2_192 << "+" << D1_192 << "+" << D0_192 << " = ";
        std::cout << D2_192 + D1_192 +  D0_192 << std::endl;

        count_192();
        createTable();
        
        /*Task 20*/
        std::cout << "Task 20" << "\n\n";
        float a_20 = 0.0, b_20 = 0.0, c_20 = 0.0, d_20 = 0.0;
        std::cout << "Enter a, b, c, d : ";
        std::cin >> a_20 >> b_20 >> c_20 >> d_20;
        if (((c_20 > a_20) && (d_20 > b_20)) || ((c_20 > b_20) && (d_20 > a_20))) {
            std::cout << "Yes, the rectangle can be placed" << "\n\n\n";
        }
        else {
            std::cout << "No, the rectangle cannot be placed" << "\n\n\n";
        }
        createTable();
        
        
        
        /*Task 21*/
        std::cout << "Task 21" << "\n\n";
        std::cout << "Size of char: " << sizeof(char) << " byte(s)" << std::endl;
        std::cout << "Size of int: " << sizeof(int) << " byte(s)" << std::endl;
        std::cout << "Size of float: " << sizeof(float) << " byte(s)" << std::endl;
        std::cout << "Size of double: " << sizeof(double) << " byte(s)" << std::endl;
        std::cout << "Size of bool: " << sizeof(bool) << " byte(s)" << std::endl;
        
        /*Size of char: 1 byte(s)
         Size of int : 4 byte(s)
         Size of float : 4 byte(s)
         Size of double : 8 byte(s)
         Size of bool : 1 byte(s)
         
         Можем прийти к выводу, что тип bool и тип char имеют одинаковый размер. bool может принимать значения false или true, в то время как char может занимать от -128 до 127 по дефолту (от 0 да 255 когда используется /J)
         Обычный тип int занимает столько же места, сколько и тип float.
         Тип double занимает в 2 раза больше, чем float*/
        
        return 0;
    }

