// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879B3E0 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_5879b3e0_5879B3E0() {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 7ch]
        ; Exact mapped bytes E8 45 E9 D0 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0xff
        lea ecx, [esi + 64h]
        ; Exact mapped bytes E8 3D E9 D0 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0xff
        lea ecx, [esi + 4ch]
        ; Exact mapped bytes E8 35 E9 D0 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0xff
        lea ecx, [esi + 30h]
        ; Exact mapped bytes E8 2D E9 D0 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0xff
        lea ecx, [esi + 14h]
        ; Exact mapped bytes E8 25 E9 D0 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0xff
        lea ecx, [esi + 8]
        ; Exact mapped bytes E8 CD BC D6 FF: call 0x585070e0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xbc
        __asm _emit 0xd6
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        mov dword ptr [esi], 588b730ch
        ; Exact mapped bytes 74 0E: je 0x5879b42e
        __asm _emit 0x74
        __asm _emit 0x0e
        push 0a0h
        push esi
        ; Exact mapped bytes E8 09 5C 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x5c
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
