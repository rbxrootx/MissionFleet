// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002C010 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_1002c010_1002C010() {
    __asm {
        mov eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 4]
        test ecx, ecx
        ; Exact mapped bytes 74 18: je 0x1002c038
        __asm _emit 0x74
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x1002c038
        __asm _emit 0x74
        __asm _emit 0x14
        xor edx, edx
        ; Exact mapped bytes 66 8B 91 2C 03 00 00: mov dx, word ptr [ecx + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 18h], edx
        ; Exact mapped bytes 74 09: je 0x1002c03b
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [eax]
        test eax, eax
        ; Exact mapped bytes 75 F5: jne 0x1002c02d
        __asm _emit 0x75
        __asm _emit 0xf5
        xor eax, eax
        ret
        mov eax, dword ptr [eax + 24h]
        ret
    }
}
