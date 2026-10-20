// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10073D30 .. +0x111 bytes.
extern "C" __declspec(naked) void FUN_10073d30_10073D30() {
    __asm {
        sub esp, 0d4h
        mov eax, dword ptr [esp + 0d8h]
        push ebx
        ; Exact mapped bytes 66 8B 94 24 F0 00 00 00: mov dx, word ptr [esp + 0xf0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        push esi
        mov esi, dword ptr [esp + 0e8h]
        mov ebx, ecx
        push edi
        mov ecx, 2bh
        lea edi, [esp + 14h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 8B 8C 24 F8 00 00 00: mov cx, word ptr [esp + 0xf8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4000008h
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 66 89 8C 24 DA 00 00 00: mov word ptr [esp + 0xda], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 94 24 DC 00 00 00: mov word ptr [esp + 0xdc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 0e0h], 0
        ; Exact mapped bytes 74 07: je 0x10073d92
        __asm _emit 0x74
        __asm _emit 0x07
        cmp eax, 4000009h
        ; Exact mapped bytes 75 56: jne 0x10073de8
        __asm _emit 0x75
        __asm _emit 0x56
        mov eax, dword ptr [esp + 0b8h]
        mov edx, dword ptr [esp + 0beh]
        mov esi, dword ptr [esp + 0f0h]
        and eax, 0ffh
        and edx, 0ffffh
        lea ecx, [eax*8]
        sub ecx, eax
        test esi, esi
        lea ebp, [edx + ecx*4]
        ; Exact mapped bytes 74 26: je 0x10073de8
        __asm _emit 0x74
        __asm _emit 0x26
        test ebp, ebp
        ; Exact mapped bytes 74 22: je 0x10073de8
        __asm _emit 0x74
        __asm _emit 0x22
        push ebp
        ; Exact mapped bytes E8 D4 89 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x89
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, ebp
        mov dword ptr [esp + 0e4h], eax
        mov edi, eax
        mov eax, ecx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, eax
        add esp, 4
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov ecx, dword ptr [ebx + 1f8h]
        mov eax, dword ptr [ebx + 200h]
        dec ecx
        cmp eax, ecx
        ; Exact mapped bytes 75 04: jne 0x10073dfd
        __asm _emit 0x75
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 03: jmp 0x10073e00
        __asm _emit 0xeb
        __asm _emit 0x03
        lea ecx, [eax + 1]
        mov edx, dword ptr [ebx + 204h]
        mov dword ptr [ebx + 200h], ecx
        cmp ecx, edx
        ; Exact mapped bytes 74 24: je 0x10073e34
        __asm _emit 0x74
        __asm _emit 0x24
        lea ecx, [eax + eax*2]
        lea esi, [esp + 10h]
        lea edx, [ecx + ecx*8]
        mov ecx, 35h
        shl edx, 1
        sub edx, eax
        mov eax, dword ptr [ebx + 208h]
        lea edi, [eax + edx*4]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        inc dword ptr [ebx + 1fch]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0d4h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
