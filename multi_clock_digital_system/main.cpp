 #include <iostream>
 #include "alu.cpp"
    
 using namespace std;
    
 int main()
 {
    cxxrtl_design::p_alu top;
        
    top.p_reset__n.set<bool>(false);
    top.step();

    for(int cycle=0;cycle<1;++cycle){
    
         top.p_data__a__in.set<uint32_t>(3);
         top.p_data__b__in.set<uint32_t>(5);
         top.p_en__in.set<bool>(true);
         top.p_alu__func__in.set<uint32_t>(0);

         top.p_reset__n.set<bool>(true);
         top.p_clk.set<bool>(false);
         top.step();
         top.p_clk.set<bool>(true);
         top.step();
         cout << "cycle " << cycle << " - alu_out: " << top.p_data__out.get<uint32_t>()<<endl;
    }
 }
