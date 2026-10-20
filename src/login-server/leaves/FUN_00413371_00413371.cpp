// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413371 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_00413371_00413371() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 8]
        push dword ptr [esp + 0ch]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        cmp dword ptr [esi + 88h], 2
        lea edi, [esi + 88h]
        ; Exact mapped bytes 75 06: jne 0x413396
        __asm _emit 0x75
        __asm _emit 0x06
        test byte ptr [esi + 2dh], 8
        ; Exact mapped bytes 74 2F: je 0x4133c5
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, esi
        ; Exact mapped bytes E8 5F 08 00 00: call 0x413bfc
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi], 2
        ; Exact mapped bytes 74 23: je 0x4133c5
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, esi
        ; Exact mapped bytes E8 6A 05 00 00: call 0x413913
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 F9 05 00 00: call 0x4139a9
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        mov edi, eax
        ; Exact mapped bytes E8 7D 08 00 00: call 0x413c36
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov ecx, esi
        push dword ptr [esp + 10h]
        ; Exact mapped bytes E8 93 08 00 00: call 0x413c58
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
