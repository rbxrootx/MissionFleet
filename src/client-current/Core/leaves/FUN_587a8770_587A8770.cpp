// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A8770 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_587a8770_587A8770() {
    __asm {
        sub esp, 8
        push esi
        mov esi, dword ptr [esp + 10h]
        test esi, esi
        ; Exact mapped bytes 74 1D: je 0x587a8799
        __asm _emit 0x74
        __asm _emit 0x1d
        push 4
        lea eax, [esp + 8]
        push eax
        push esi
        ; Exact mapped bytes E8 67 EB FF FF: call 0x587a72f0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        push 4
        lea eax, [esp + 14h]
        push eax
        push esi
        ; Exact mapped bytes E8 1A 6E FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        push 0
        push 0
        push esi
        ; Exact mapped bytes E8 8D 11 00 00: call 0x587a9930
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x587a87b1
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        pop esi
        add esp, 8
        ret
        push dword ptr [esp + 7]
        push dword ptr [esp + 0ah]
        push dword ptr [esp + 0dh]
        push dword ptr [esp + 10h]
        push dword ptr [esp + 24h]
        push esi
        ; Exact mapped bytes E8 95 87 FF FF: call 0x587a0f60
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov eax, 3
        pop esi
        add esp, 8
        ret
    }
}
