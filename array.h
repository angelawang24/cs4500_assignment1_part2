#pragma once
#include "object.h"

/**
 * An Array class to which elements can be added to and removed from.
 * author: chasebish */
class StringArray : public Object {
public:

  /** CONSTRUCTORS & DESTRUCTORS **/

  /** Creates an Array of desired size */
  StringArray(size_t array_size) {}

  /** Creates an Array of desired size */
  StringArray(const size_t array_size) {}

  /** Copies the contents of an already existing Array */
  StringArray(StringArray* copy_array) {}

  /** Clears Array from memory */
  ~StringArray() {}

  /** INHERITED METHODS **/

  /** Inherited from Object, generates a hash for an Array */
  size_t hash_me_() {}

  /** Inherited from Object, checks equality between an Array and an Object */
  bool equals(Object* obj) {}

  /** Inherited from Object, converts an Array to a string */
  char* to_string() {}

  /** Inhertied from Object, prints a string representation of an Array */
  void print() {}


  /** ARRAY METHODS **/

  /** Removes all elements from the Array */
  void clear() {}

  /** Returns the current length of the contents in an Array */
  size_t length() {}

  /** Adds an Array to existing contents */
  void concat(StringArray* toAdd) {}

  /** Returns the index of the given Object, -1 if Object is not found */
  size_t index_of(String* to_find) {}

  /** Removes the last Object of the Array, returns the removed Object */
  String* pop() {}

  /** Adds an Object to the end of the Array, returns the new length */
  size_t push(String* to_add) {}

  /** Removes an Object at the given index, returns removed Object */
  String* remove(size_t index) {}

  /** Replaces an Object at the given index with the given Object, returns the replaced Object */
  String* replace(size_t index, String* new_value) {}
};

class IntArray : public Object {
  /** CONSTRUCTORS & DESTRUCTORS **/

  /** Creates an Array of desired size */
  IntArray(size_t array_size) {}

  /** Creates an Array of desired size */
  IntArray(const size_t array_size) {}

  /** Copies the contents of an already existing Array */
  IntArray(IntArray* copy_array) {}

  /** Clears Array from memory */
  ~IntArray() {}


  /** INHERITED METHODS **/

  /** Inherited from Object, generates a hash for an Array */
  size_t hash_me_() {}

  /** Inherited from Object, checks equality between an Array and an Object */
  bool equals(Object* obj) {}

  /** Inherited from Object, converts an Array to a string */
  char* to_string() {}

  /** Inhertied from Object, prints a string representation of an Array */
  void print() {}


  /** ARRAY METHODS **/
  
  /** Removes all elements from the Array */
  void clear() {}

  /** Returns the current length of the contents in an Array */
  size_t length() {}

  /** Adds an Array to existing contents */
  void concat(IntArray* toAdd) {}

  /** Gets an int at the given index */
  int get(size_t index) {}

  /** Returns the index of the given Object, -1 if Object is not found */
  size_t index_of(int to_find) {}

  /** Removes the last Object of the Array, returns the removed Object */
  int pop() {}

  /** Adds an Object to the end of the Array, returns the new length */
  size_t push(int to_add) {}

  /** Removes an Object at the given index, returns removed Object */
  int remove(size_t index) {}

  /** Replaces an Object at the given index with the given Object, returns the replaced Object */
  int replace(size_t index, int new_value) {}
};

class FloatArray : public Object {
  /** CONSTRUCTORS & DESTRUCTORS **/

  /** Creates an Array of desired size */
  FloatArray(size_t array_size) {}

  /** Creates an Array of desired size */
  FloatArray(const size_t array_size) {}

  /** Copies the contents of an already existing Array */
  FloatArray(FloatArray* copy_array) {}

  /** Clears Array from memory */
  ~FloatArray() {}


  /** INHERITED METHODS **/

  /** Inherited from Object, generates a hash for an Array */
  size_t hash_me_() {}

  /** Inherited from Object, checks equality between an Array and an Object */
  bool equals(Object* obj) {}

  /** Inherited from Object, converts an Array to a string */
  char* to_string() {}

  /** Inhertied from Object, prints a string representation of an Array */
  void print() {}


  /** ARRAY METHODS **/
  
  /** Removes all elements from the Array */
  void clear() {}

  /** Returns the current length of the contents in an Array */
  size_t length() {}

  /** Adds an Array to existing contents */
  void concat(FloatArray* toAdd) {}

  /** Gets an float at the given index */
  float get(size_t index) {}

  /** Returns the index of the given float, -1 if float is not found */
  size_t index_of(float to_find) {}

  /** Removes the last float of the Array, returns the removed float */
  float pop() {}

  /** Adds an float to the end of the Array, returns the new length */
  size_t push(float to_add) {}

  /** Removes an float at the given index, returns removed float */
  float remove(size_t index) {}

  /** Replaces an Object at the given index with the given Object, returns the replaced float */
  float replace(size_t index, float new_value) {}
};

class BoolArray : public Object {
  /** CONSTRUCTORS & DESTRUCTORS **/

  /** Creates an Array of desired size */
  BoolArray(size_t array_size) {}

  /** Creates an Array of desired size */
  BoolArray(const size_t array_size) {}

  /** Copies the contents of an already existing Array */
  BoolArray(BoolArray* copy_array) {}

  /** Clears Array from memory */
  ~BoolArray() {}


  /** INHERITED METHODS **/

  /** Inherited from Object, generates a hash for an Array */
  size_t hash_me_() {}

  /** Inherited from Object, checks equality between an Array and an Object */
  bool equals(bool obj) {}

  /** Inherited from Object, converts an Array to a string */
  char* to_string() {}

  /** Inhertied from Object, prints a string representation of an Array */
  void print() {}


  /** ARRAY METHODS **/
  
  /** Removes all elements from the Array */
  void clear() {}

  /** Returns the current length of the contents in an Array */
  size_t length() {}

  /** Adds an Array to existing contents */
  void concat(BoolArray* toAdd) {}

  /** Gets an bool at the given index */
  bool get(size_t index) {}

  /** Returns the index of the given bool, -1 if bool is not found */
  size_t index_of(bool to_find) {}

  /** Removes the last bool of the Array, returns the removed bool */
  bool pop() {}

  /** Adds an bool to the end of the Array, returns the new length */
  size_t push(bool to_add) {}

  /** Removes an bool at the given index, returns removed bool */
  bool remove(size_t index) {}

  /** Replaces an bool at the given index with the given bool, returns the replaced bool */
  bool replace(size_t index, bool new_value) {}
};