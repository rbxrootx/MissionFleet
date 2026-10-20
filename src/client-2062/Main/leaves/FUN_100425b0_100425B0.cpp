// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100425B0 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_100425b0_100425B0() {
    __asm {
        mov eax, dword ptr [ecx + 8]
        mov ecx, dword ptr [ecx + 0ch]
        push esi
        cmp eax, ecx
        ; Exact mapped bytes 74 13: je 0x100425ce
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, 0f4241h
        mov esi, dword ptr [eax]
        cmp dword ptr [esi + 28h], edx
        ; Exact mapped bytes 74 1E: je 0x100425e5
        __asm _emit 0x74
        __asm _emit 0x1e
        add eax, 4
        cmp eax, ecx
        ; Exact mapped bytes 75 F2: jne 0x100425c0
        __asm _emit 0x75
        __asm _emit 0xf2
        xor eax, eax
        mov ecx, dword ptr [esp + 0ch]
        mov edx, dword ptr [esp + 8]
        push ecx
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 8F F4 FF FF: call 0x10041a70
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB E7: jmp 0x100425d0
        __asm _emit 0xeb
        __asm _emit 0xe7
    }
}
