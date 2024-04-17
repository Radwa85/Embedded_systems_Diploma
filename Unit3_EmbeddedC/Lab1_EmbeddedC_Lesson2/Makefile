#@Radwa Mohamed
cc = arm-none-eabi-
CFLAGS = -g -mcpu=arm926ej-s
INCS = -I.
LIBS =
src = $(wildcard *.c)
OBJ = $(src:.c=.o)
As = $(wildcard *.s)
AsOBG = $(As:.s=.o)

all: learn-in-depth.bin

%.o: %.c
	$(cc)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@

%.o: %.s
	$(cc)as.exe $(CFLAGS) $< -o $@

learn-in-depth.elf: $(OBJ) $(AsOBG)
	$(cc)ld.exe -T linker_script.ld $(LIBS) $^ -o $@ -Map=map_file.map

learn-in-depth.bin: learn-in-depth.elf
	$(cc)objcopy.exe -O binary $< $@

clean_all:
	rm -f *.o *.elf *.bin

clean:
	rm -f *.elf *.bin













