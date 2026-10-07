// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 39 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878A370 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_5878a370_segment_00() {
    __asm {
        ; Exact mapped bytes 8B 54 24 08: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 8B 41 78: mov eax, dword ptr [ecx + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x78
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 7E 11: jle 0x5878a38c
        __asm _emit 0x7e
        __asm _emit 0x11
        ; Exact mapped bytes EB 03: jmp 0x5878a380
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878A380 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_5878a370_segment_01() {
    __asm {
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 13: je 0x5878a397
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8B 40 14: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x14
        ; Exact mapped bytes 4A: dec edx
        __asm _emit 0x4a
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 7F F4: jg 0x5878a380
        __asm _emit 0x7f
        __asm _emit 0xf4
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 07: je 0x5878a397
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 89 48 08: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
