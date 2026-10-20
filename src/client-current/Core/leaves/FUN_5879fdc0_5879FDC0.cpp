// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879FDC0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_5879fdc0_5879FDC0() {
    __asm {
        push edi
        mov edi, dword ptr [esp + 8]
        test edi, edi
        ; Exact mapped bytes 74 3B: je 0x5879fe04
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 33: je 0x5879fe04
        __asm _emit 0x74
        __asm _emit 0x33
        push esi
        mov esi, dword ptr [eax]
        test esi, esi
        ; Exact mapped bytes 74 2B: je 0x5879fe03
        __asm _emit 0x74
        __asm _emit 0x2b
        push -1
        push 0ffffh
        push esi
        push edi
        mov dword ptr [eax], 0
        ; Exact mapped bytes E8 24 00 00 00: call 0x5879fe10
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 114h
        push 0
        push esi
        ; Exact mapped bytes E8 17 D0 0A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd0
        __asm _emit 0x0a
        __asm _emit 0x00
        push esi
        push edi
        ; Exact mapped bytes E8 D0 6B 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        pop esi
        pop edi
        ret
    }
}
