// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A6A00 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_587a6a00_587A6A00() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        ; Exact mapped bytes 75 04: jne 0x587a6a0d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop esi
        ret
        mov eax, dword ptr [esi + 290h]
        push dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x587a6a23
        __asm _emit 0x74
        __asm _emit 0x08
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        add esp, 8
        ; Exact mapped bytes EB 08: jmp 0x587a6a2b
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes E8 E8 2B 0B 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 DC: jne 0x587a6a0b
        __asm _emit 0x75
        __asm _emit 0xdc
        push 588b9448h
        push esi
        ; Exact mapped bytes E8 46 84 FF FF: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
