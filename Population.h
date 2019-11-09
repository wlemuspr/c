#ifndef Population_h
#define Population_h

class Fish;

class Population{
private:
    Fish** fishes;
    int size;
    
public:
    Population();
    virtual ~Population();
    
    void add(Fish* f);
    
    int getSize() const;
    
    Fish* get(int index) const;
    
    void remove(Fish* f);
};


#endif /* population_hpp */
