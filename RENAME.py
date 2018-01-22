from sys import argv

run, filename = argv

new_name = filename + '.tmp'
with open(filename, 'r') as f_in, open(new_name, 'w') as f_out:
    for line in f_in:
        f_out.write(line[5:])

#os.rename(new_name, filename)

