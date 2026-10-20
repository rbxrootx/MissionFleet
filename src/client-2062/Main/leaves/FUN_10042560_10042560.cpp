// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10042560 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_10042560_10042560() {
    __asm {
        mov eax, dword ptr [ecx + 8]
        mov ecx, dword ptr [ecx + 0ch]
        push esi
        cmp eax, ecx
        ; Exact mapped bytes 74 13: je 0x1004257e
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, 0f4241h
        mov esi, dword ptr [eax]
        cmp dword ptr [esi + 28h], edx
        ; Exact mapped bytes 74 19: je 0x10042590
        __asm _emit 0x74
        __asm _emit 0x19
        add eax, 4
        cmp eax, ecx
        ; Exact mapped bytes 75 F2: jne 0x10042570
        __asm _emit 0x75
        __asm _emit 0xf2
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 D4 F3 FF FF: call 0x10041960
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 8]
        mov eax, dword ptr [eax]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 C2 F3 FF FF: call 0x10041960
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
