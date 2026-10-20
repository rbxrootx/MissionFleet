// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879FB60 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_5879fb60_5879FB60() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        ; Exact mapped bytes 75 01: jne 0x5879fb69
        __asm _emit 0x75
        __asm _emit 0x01
        ret
        push esi
        push 114h
        push eax
        ; Exact mapped bytes E8 2B 6F 00 00: call 0x587a6aa0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        add esp, 8
        test esi, esi
        ; Exact mapped bytes 74 10: je 0x5879fb8e
        __asm _emit 0x74
        __asm _emit 0x10
        push 114h
        push 0
        push esi
        ; Exact mapped bytes E8 85 D2 0A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov eax, esi
        pop esi
        ret
    }
}
