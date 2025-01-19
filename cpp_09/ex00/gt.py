import random
import datetime

def generate_random_date(start_year=2000, end_year=2023):
    start_date = datetime.date(start_year, 1, 1)
    end_date = datetime.date(end_year, 12, 31)
    random_date = start_date + datetime.timedelta(days=random.randint(0, (end_date - start_date).days))
    return random_date

def generate_random_value():
    return round(random.uniform(0, 1000), 2)

def generate_file(filename, num_lines=100):
    with open(filename, 'w') as file:
        for _ in range(num_lines):
            date = generate_random_date()
            value = generate_random_value()
            file.write(f"{date} | {value}\n")

if __name__ == "__main__":
    generate_file("input.txt")
