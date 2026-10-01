// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587962C0 .. +0x42 bytes.
extern "C" __declspec(naked) void AllocScreen() {
    __asm {
        push 84h
        ; Exact mapped bytes E8 84 69 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x587962df
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [esp + 8]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 C3 D2 02 00: call 0x587c35a0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x587962e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esp + 0ch]
        ; Exact mapped bytes A3 84 45 A2 58: mov dword ptr [0x58a24584], eax
        __asm _emit 0xa3
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        test edx, edx
        ; Exact mapped bytes 74 13: je 0x58796301
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 94 45 A2 58: mov ecx, dword ptr [0x58a24594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx]
        push edx
        mov edx, dword ptr [eax + 20h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes A1 84 45 A2 58: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ret
    }
}
