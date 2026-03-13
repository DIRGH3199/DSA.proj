
def delete_duplicate_numbers(arr):
    unique_numbers = []
    for num in arr:
        if num not in unique_numbers:
            unique_numbers.append(num)
    return unique_numbers
# Example usage
numbers = [1, 2, 3, 2, 4, 1, 5]
result = delete_duplicate_numbers(numbers)  
print(result)  
