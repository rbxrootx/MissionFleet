// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879B4A0 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_5879b4a0_5879B4A0() {
    __asm {
        push esi
        mov esi, ecx
        lea ecx, [esi + 8]
        mov dword ptr [esi], 588b7318h
        ; Exact mapped bytes E8 CF DA FF FF: call 0x58798f80
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        mov dword ptr [esi], 588b7300h
        ; Exact mapped bytes 74 0B: je 0x5879b4c9
        __asm _emit 0x74
        __asm _emit 0x0b
        push 20h
        push esi
        ; Exact mapped bytes E8 6E 5B 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x5b
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
