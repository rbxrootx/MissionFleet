// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10055C30 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_10055c30_10055C30() {
    __asm {
        sub esp, 20h
        mov eax, ecx
        push esi
        mov ecx, dword ptr [esp + 28h]
        mov esi, dword ptr [esp + 2ch]
        push edi
        mov dword ptr [esp + 8], ecx
        mov ecx, 6
        lea edi, [esp + 0ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [eax + 188h]
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        mov edx, dword ptr [eax + 4]
        mov edi, dword ptr [eax + 8]
        dec edx
        cmp edi, edx
        ; Exact mapped bytes 75 04: jne 0x10055c65
        __asm _emit 0x75
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 03: jmp 0x10055c68
        __asm _emit 0xeb
        __asm _emit 0x03
        lea ecx, [edi + 1]
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [eax + 8], ecx
        cmp ecx, edx
        ; Exact mapped bytes 74 13: je 0x10055c85
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [eax + 10h]
        lea esi, [esp + 8]
        shl edi, 5
        add edi, ecx
        mov ecx, 8
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        pop edi
        pop esi
        add esp, 20h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
