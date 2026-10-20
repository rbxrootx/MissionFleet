// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10055C90 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_10055c90_10055C90() {
    __asm {
        sub esp, 24h
        push ebx
        mov ebx, ecx
        mov eax, dword ptr [ebx + 188h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 0ch]
        cmp ecx, edx
        ; Exact mapped bytes 74 79: je 0x10055d1f
        __asm _emit 0x74
        __asm _emit 0x79
        push esi
        push edi
        mov esi, dword ptr [eax + 0ch]
        mov ecx, dword ptr [eax + 8]
        cmp esi, ecx
        ; Exact mapped bytes 74 12: je 0x10055cc4
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax + 4]
        dec edx
        cmp esi, edx
        ; Exact mapped bytes 75 04: jne 0x10055cbe
        __asm _emit 0x75
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 03: jmp 0x10055cc1
        __asm _emit 0xeb
        __asm _emit 0x03
        lea ecx, [esi + 1]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [eax + 10h]
        mov ecx, 8
        shl esi, 5
        add esi, edx
        lea edi, [esp + 0ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [esp + 0ch]
        dec eax
        ; Exact mapped bytes 74 15: je 0x10055cf3
        __asm _emit 0x74
        __asm _emit 0x15
        dec eax
        ; Exact mapped bytes 75 2C: jne 0x10055d0d
        __asm _emit 0x75
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [esp + 10h]
        push eax
        ; Exact mapped bytes E8 8F 6A 06 00: call 0x100bc780
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x6a
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x10055d0d
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [esp + 29h]
        mov edx, dword ptr [esp + 28h]
        push ecx
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [esp + 14h]
        push edx
        push eax
        ; Exact mapped bytes E8 23 69 06 00: call 0x100bc630
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x69
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 188h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 0ch]
        cmp ecx, edx
        ; Exact mapped bytes 75 8B: jne 0x10055ca8
        __asm _emit 0x75
        __asm _emit 0x8b
        pop edi
        pop esi
        pop ebx
        add esp, 24h
        ret
    }
}
