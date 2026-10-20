// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A7E50 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_587a7e50() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        ; Exact mapped bytes 75 17: jne 0x587a7e70
        __asm _emit 0x75
        __asm _emit 0x17
        push 64fh
        push 589999a4h
        push 58999968h
        ; Exact mapped bytes E8 61 50 1D 00: call 0x5897cece
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x50
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [esi + 78h]
        pop esi
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x587a7ea6
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, eax
        and ecx, 80000000h
        cmp ecx, 80000000h
        ; Exact mapped bytes 75 08: jne 0x587a7e90
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, 10000000h
        ; Exact mapped bytes 74 0F: je 0x587a7ea6
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 10524h]
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
