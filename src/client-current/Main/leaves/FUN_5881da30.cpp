// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881DA30 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_5881da30() {
    __asm {
        push ebx
        ; Exact mapped bytes 8B 1D A8 C1 98 58: mov ebx, dword ptr [0x5898c1a8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push edi
        lea edi, [ecx + 0e4h]
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x5881da6b
        __asm _emit 0x74
        __asm _emit 0x26
        push esi
        mov esi, dword ptr [esp + 10h]
        push esi
        push edi
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push 0
        push esi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        push esi
        push 12eh
        ; Exact mapped bytes E8 8D E0 F4 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe0
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 06 CB F4 FF: call 0x5876a570
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xcb
        __asm _emit 0xf4
        __asm _emit 0xff
        pop esi
        pop edi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
