// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10103E90 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_10103e90_10103E90() {
    __asm {
        ; Exact mapped bytes 8B 51 78: mov edx, dword ptr [ecx + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x78
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 12: je 0x10103eab
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8B 89 84 00 00 00: mov ecx, dword ptr [ecx + 0x84]
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B D1: cmp edx, ecx
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 74 0B: je 0x10103eae
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 52 14: mov edx, dword ptr [edx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x14
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 F4: jne 0x10103e9f
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
