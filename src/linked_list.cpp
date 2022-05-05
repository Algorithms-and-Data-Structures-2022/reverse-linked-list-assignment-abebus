#include "assignment/linked_list.hpp"

namespace assignment {

  /**
   * Переворачивает связный список, используя три указателя.
   *
   * Сложность
   *    по памяти ~ O(1)
   *    по времени ~ O(N)
   */
  void LinkedList::ReverseIterative() {
    // Напишите здесь свой код ...
    Node* cur = front_;
    Node* prev = nullptr;
    while (cur != nullptr){
      Node* next = cur->next;
      cur->next = prev;
      prev = cur;
      cur = next;
    }
    back_ = front_;
    front_ = prev;
  }

  /**
   * Переворачивает связный список, используя рекурсию.
   *
   * Сложность
   *    по памяти ~ O(N)
   *    по времени ~ O(N)
   */
  void LinkedList::ReverseRecursive() {
    // Напишите здесь свой код ...
    reverse_recursive_helper(front_, nullptr);
    Node* tmp = front_;
    front_ = back_;
    back_ = tmp;
  }

  // вспомогательный метод для реализации рекурсии
  void LinkedList::reverse_recursive_helper(Node*& curr, Node* prev) {
    // Напишите здесь свой код ...
    if (curr != nullptr)
    {
      reverse_recursive_helper(curr->next, curr);
      curr->next = prev;
    }
  }

}  // namespace assignment
