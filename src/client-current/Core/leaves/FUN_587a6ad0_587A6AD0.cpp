// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A6AD0 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_587a6ad0_587A6AD0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        ; Exact mapped bytes 74 30: je 0x587a6b09
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [esi + 290h]
        push dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x587a6aef
        __asm _emit 0x74
        __asm _emit 0x08
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        add esp, 8
        ; Exact mapped bytes EB 08: jmp 0x587a6af7
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes E8 1C 2B 0B 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x2b
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x587a6b0b
        __asm _emit 0x75
        __asm _emit 0x10
        push 588b9448h
        push esi
        ; Exact mapped bytes E8 2A 89 FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop esi
        ret
    }
}
