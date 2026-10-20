// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875BB90 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_5875bb90_5875BB90() {
    __asm {
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes BA 01 00 00 00: mov edx, 1
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 84 C2: test dl, al
        __asm _emit 0x84
        __asm _emit 0xc2
        ; Exact mapped bytes 75 21: jne 0x5875bbbe
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 83 B9 98 01 00 00 00: cmp dword ptr [ecx + 0x198], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 18: je 0x5875bbbe
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 8B 81 90 01 00 00: mov eax, dword ptr [ecx + 0x190]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 89 94 01 00 00: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
