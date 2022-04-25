/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *  public:
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

class PeekingIterator : public Iterator {
public:
    int val; bool itr_hasNext;
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
	    itr_hasNext = Iterator::hasNext();
        if(itr_hasNext){
            val = Iterator::next();
        }
	}
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        return val;
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
	    int current_val = val;
        itr_hasNext = Iterator::hasNext();
        if(itr_hasNext){
            val = Iterator::next();
        }
        return current_val;
	}
	
	bool hasNext() const {
	    return itr_hasNext;
	}
};