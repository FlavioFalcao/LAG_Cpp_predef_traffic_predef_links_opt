    #ifndef DESTINATIONS_H
    #define DESTINATIONS_H
    
    #include "parameters.h"
    
    enum traffic_t {RANDOM_TRAFFIC, PREDEFINED_TRAFFIC};
    
    struct dest_t {
                      int dest_addr_x;           // [x,y] - address in mesh network
                      int dest_addr_y;
                      float dest_injection_rate;  // in flit/(clock cycle)
    };
    
    
    struct destinations_t {
    
                      static const int max_dest_num = 4;
                   
                      
                      int dest_num;                // number of destinations for this traffic source
                      dest_t dests[max_dest_num];
                      
                      /* destinations_t()
                      {
                        dest_num = 0;
                      } */ 
    };


	
    // 1-st dim. - network x
    // 2-st dim. - network y
     

    const destinations_t destinations[network_x][network_y] = {
                                            { // x = 0
                                                
                                                { // y = 0
                                                  
                                                  3, { {1, 0, 0.67}, {1, 0, 0.67}, {0, 1, 0.09} }  
                                                    
                                                },
                                                { // y = 1
                                                
                                                  7, { {0, 0, 0.09}, {1, 1, 0.68}, {1, 1, 0.68}, {1, 1, 0.68}, {3, 1, 0.07}, {1, 2, 0.09}, {0, 2, 0.43} }
                                                  
                                                },
                                                { // y = 2
                                                
                                                  1, { {0, 1, 0.43} }    
                                                  
                                                }
                                            },
//-----------------------------------------------------------------------------------------------------------------
                                            { // x = 1
                                                { // y = 0
                                                
                                                  3, { {0, 0, 0.67}, {0, 0, 0.67}, {1, 2, 0.14} }   
                                                    
                                                },
                                                { // y = 1
                                                
                                                  5, { {0, 1, 0.68}, {0, 1, 0.68}, {0, 1, 0.68}, {2, 1, 0.75}, {2, 1, 0.75} }
                                                  
                                                },
                                                { // y = 2
                                                
                                                  2, { {1, 0, 0.14}, {0, 1, 0.09} }  
                                                  
                                                }
                                            },
//-----------------------------------------------------------------------------------------------------------------
                                            { // x = 2
                                                { // y = 0
                                                  
                                                  2, { {2, 1, 0.56}, {2, 1, 0.56} }  
                                                  
                                                },
                                                { // y = 1
                                                  
                                                  6, { {2, 0, 0.56}, {2, 0, 0.56}, {1, 1, 0.75}, {1, 1, 0.75}, {2, 2, 0.56}, {3, 1, 0.39} }
                                                  
                                                },
                                                { // y = 2
                                                  
                                                  1, { {2, 1, 0.56} }
                                                  
                                                }
                                            },
//-----------------------------------------------------------------------------------------------------------------
                                            { // x = 3
                                                { // y = 0
                                                  
                                                    
                                                  
                                                },
                                                { // y = 1
                                                  
                                                  2, { {2, 1, 0.39}, {0, 1, 0.07} }
                                                  
                                                },
                                                { // y = 2
                                                  
                                                   
                                                  
                                                }
                                            }
                                            };   
//-----------------------------------------------------------------------------------------------------------------
#endif
