// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879A8E0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_5879a8e0_5879A8E0() {
    __asm {
        mov edx, dword ptr [ecx + 8]
        movzx eax, dl
        sub eax, 4
        ; Exact mapped bytes 74 34: je 0x5879a91f
        __asm _emit 0x74
        __asm _emit 0x34
        sub eax, 2
        ; Exact mapped bytes 74 05: je 0x5879a8f5
        __asm _emit 0x74
        __asm _emit 0x05
        sub eax, 1
        ; Exact mapped bytes 75 29: jne 0x5879a91e
        __asm _emit 0x75
        __asm _emit 0x29
        push esi
        mov esi, dword ptr [ecx]
        test esi, esi
        ; Exact mapped bytes 74 21: je 0x5879a91d
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [esi]
        mov ecx, esi
        push dword ptr [eax + 4]
        push esi
        ; Exact mapped bytes E8 97 D9 FF FF: call 0x587982a0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        push 30h
        push dword ptr [esi]
        ; Exact mapped bytes E8 22 67 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x67
        __asm _emit 0x09
        __asm _emit 0x00
        push 8
        push esi
        ; Exact mapped bytes E8 1A 67 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x67
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 10h
        pop esi
        ret
        shr edx, 8
        test dl, 1
        ; Exact mapped bytes 74 F7: je 0x5879a91e
        __asm _emit 0x74
        __asm _emit 0xf7
        push dword ptr [ecx]
        ; Exact mapped bytes E8 D2 EC 0B 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xec
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        ret
    }
}
