
def calculate_bh_days(current_xp, project_xp):
    old_max_xp = 49980
    new_max_xp = 78909
    old_days = 560
    initial_days = 77
    total_days = old_days - initial_days
    arbitrary_value = 0.45
    
    x = current_xp
    y = current_xp + project_xp
    
    if x > new_max_xp or y > new_max_xp:
        raise ValueError("XP values exceed the maximum allowed value.")
    
    bh_days = ((y / old_max_xp) ** arbitrary_value - (x / old_max_xp) ** arbitrary_value) * total_days
    return bh_days

# Example usage
current_xp = 23143
project_xp = 10042

bh_days = calculate_bh_days(current_xp, project_xp)
print(f"Number of Black Hole days earned: {bh_days}")
