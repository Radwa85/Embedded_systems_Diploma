#@Radwa Mohamed
cc = arm-none-eabi-
CFLAGS = -I. -mthumb -mcpu=cortex-m3 -gdwarf-2  -g
INCS = -I.
LIBS =
src = $(wildcard *.c)
OBJ = $(src:.c=.o)
As = $(wildcard *.s)
AsOBG = $(As:.s=.o)
Project_name = Unit3_Lab4_CortexM4
all: $(Project_name).bin
	@echo "=======Build is Done======="

%.o: %.c
	$(cc)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@

%.o: %.s
	$(cc)as.exe $(CFLAGS) $< -o $@

$(Project_name).elf: $(OBJ) $(AsOBG)
	$(cc)ld.exe -T linker_script.ld $(LIBS) $^ -o $@ -Map=map_file.map
	cp $(Project_name).elf $(Project_name).axf

$(Project_name).bin: $(Project_name).elf
	$(cc)objcopy.exe -O binary $< $@

clean_all:
	rm -f *.o *.elf *.bin

clean:
	rm -f *.elf *.bin













