// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878AE50 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_5878ae50() {
    __asm {
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 42: je 0x5878ae9c
        __asm _emit 0x74
        __asm _emit 0x42
        push esi
        ; Exact mapped bytes E8 00 9C 10 00: call 0x58894a60
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x9c
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 34 10 00: call 0x5888e2b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x34
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, ecx
        ; Exact mapped bytes E8 A8 7D 17 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x7d
        __asm _emit 0x17
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 F1 7D 17 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x7d
        __asm _emit 0x17
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        pop esi
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x5878ae9c
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes C7 05 C0 45 A2 58 00 00 00 00: mov dword ptr [0x58a245c0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ret
    }
}
