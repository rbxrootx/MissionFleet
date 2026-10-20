// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587722B0 .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_587722b0() {
    __asm {
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 40h]
        sub ecx, dword ptr [esi + 3ch]
        mov eax, 3e0f83e1h
        imul ecx
        sar edx, 6
        mov eax, edx
        push edi
        shr eax, 1fh
        xor ebp, ebp
        xor edi, edi
        add eax, edx
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x58772368
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        xor ebx, ebx
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 40h]
        sub ecx, dword ptr [esi + 3ch]
        mov eax, 3e0f83e1h
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        cmp edi, ecx
        ; Exact mapped bytes 72 05: jb 0x58772300
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 72 A9 20 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa9
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, dword ptr [esi + 3ch]
        mov eax, dword ptr [esp + 18h]
        cmp dword ptr [edx + ebx + 104h], eax
        ; Exact mapped bytes 75 31: jne 0x58772341
        __asm _emit 0x75
        __asm _emit 0x31
        mov ecx, dword ptr [esi + 40h]
        sub ecx, edx
        mov eax, 3e0f83e1h
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        cmp edi, ecx
        ; Exact mapped bytes 72 05: jb 0x5877232f
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 43 A9 20 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xa9
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, dword ptr [esi + 3ch]
        mov eax, dword ptr [esp + 14h]
        add edx, ebx
        push edx
        push eax
        ; Exact mapped bytes FF 15 5C C1 98 58: call dword ptr [0x5898c15c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        inc ebp
        mov ecx, dword ptr [esi + 40h]
        sub ecx, dword ptr [esi + 3ch]
        mov eax, 3e0f83e1h
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        inc edi
        add ecx, edx
        add ebx, 108h
        cmp edi, ecx
        ; Exact mapped bytes 0F 82 79 FF FF FF: jb 0x587722e0
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebx
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
