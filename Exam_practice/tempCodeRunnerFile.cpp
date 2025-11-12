
for(float i = 0.25; i <= 1; i = i + 0.25){
    std::cout.precision(5);
    std::cout.width(7);
    std::cout.fill('#');
    std::cout<<i<<std::endl;
    std::cout.width(10);
    std::cout<<i*i<<std::endl;
}
    return 0;