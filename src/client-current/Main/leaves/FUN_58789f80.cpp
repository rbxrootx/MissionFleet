// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58789F80 .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_58789f80() {
    __asm {
        ; Exact mapped bytes 8B 49 08: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x08
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 17: je 0x58789f9e
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 54 24 04: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes EB 03: jmp 0x58789f90
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 39 51 08: cmp dword ptr [ecx + 8], edx
        __asm _emit 0x39
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 8D 41 08: lea eax, [ecx + 8]
        __asm _emit 0x8d
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 74 08: je 0x58789fa0
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 8B 09: mov ecx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x09
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F2: jne 0x58789f90
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
    }
}
