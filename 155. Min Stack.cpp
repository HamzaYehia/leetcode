/**
 * @problem name: Min Stack
 * @problem link: https://leetcode.com/problems/min-stack/
 *
 * @time complexity: O(1), any operation on stack takes constant time
 * @space comlexity: O(n)
 *
 * @author: Hamza Yehia (github.com/HamzaYehia)
 * @date: 2022-Jul-11
 */



class MinStackElement {
public:
    int val;
    int minValue;
    MinStackElement* next;
};


class MinStack {
private:
    MinStackElement* currentElement;
public:
    void push(int val) {

        MinStackElement* tempElement = new MinStackElement;

        if (currentElement == NULL) {
            tempElement->val = val;
            tempElement->minValue = val;
            tempElement->next = nullptr;

            currentElement = tempElement;
            return;
        }

        tempElement->val = val;
        tempElement->next = currentElement;
        tempElement->minValue = min(val, currentElement->minValue);

        currentElement = tempElement;
    }

    void pop() {
        MinStackElement* tempElement = currentElement;
        currentElement = currentElement->next;
        delete tempElement;
    }

    int top() {
        return currentElement->val;
    }

    int getMin() {
        return currentElement->minValue;
    }
};