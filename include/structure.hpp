class IntStack {
public:
  struct Node {
    Node *next_;
    int data_;
  };
  IntStack() : head_(nullptr) {}
  IntStack(Node *node) : head_(node) {}
  IntStack(int num) : head_(to_node(num)) {}
  IntStack(const IntStack &) = delete;
  IntStack &operator=(const IntStack &) = delete;
  void push(int num) {
    Node *node = to_node(num);
    node->next_ = head_;
    head_ = node;
  }
  int pop() {
    Node *cur = head_;
    head_ = head_->next_;
    int result = cur->data_;
    delete cur;
    return result;
  }
  bool empty() { return head_ == nullptr; }
  void clear() {
    while (head_) {
      Node *cur = head_;
      head_ = head_->next_;
      delete cur;
    }
  }

private:
  Node *head_;
  Node *to_node(int num) { return new Node{nullptr, num}; }
};