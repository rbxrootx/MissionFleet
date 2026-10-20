// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004EFC0 .. +0x1B6 bytes.
extern "C" __declspec(naked) void FUN_1004efc0_1004EFC0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        cmp dword ptr [esi + 50h], 40000000h
        ; Exact mapped bytes 75 0D: jne 0x1004efde
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 54h]
        cmp ecx, edi
        ; Exact mapped bytes 74 06: je 0x1004efde
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push edi
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esi + 0a0h]
        mov eax, dword ptr [esi + ecx*4 + 0ach]
        mov ebp, dword ptr [eax + 50h]
        add ebp, edx
        mov dword ptr [eax + 50h], ebp
        mov ebx, dword ptr [esi + ecx*4 + 5ch]
        inc ebx
        mov dword ptr [esi + ecx*4 + 5ch], ebx
        mov edx, dword ptr [esi + 0c4h]
        mov eax, ebx
        cmp eax, edx
        ; Exact mapped bytes 0F 85 5D 01 00 00: jne 0x1004f16d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + ecx*4 + 5ch], edi
        mov eax, dword ptr [esi + 9ch]
        xor ebx, ebx
        cmp eax, edi
        mov ebp, 1
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x1004f0b4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        cmp ecx, 3
        ; Exact mapped bytes 75 11: jne 0x1004f041
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [esi + 0c0h]
        inc eax
        mov dword ptr [esi + 0c0h], eax
        mov edx, eax
        ; Exact mapped bytes EB 48: jmp 0x1004f089
        __asm _emit 0xeb
        __asm _emit 0x48
        cmp ecx, 2
        ; Exact mapped bytes 75 12: jne 0x1004f058
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [esi + 0c0h]
        mov eax, 66666667h
        imul edx
        sar edx, 2
        ; Exact mapped bytes EB 2A: jmp 0x1004f082
        __asm _emit 0xeb
        __asm _emit 0x2a
        cmp ecx, ebp
        ; Exact mapped bytes 75 12: jne 0x1004f06e
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [esi + 0c0h]
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        ; Exact mapped bytes EB 14: jmp 0x1004f082
        __asm _emit 0xeb
        __asm _emit 0x14
        cmp ecx, edi
        ; Exact mapped bytes 75 17: jne 0x1004f089
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [esi + 0c0h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, edx
        mov edi, 0ah
        cdq
        idiv edi
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x1004f0ab
        __asm _emit 0x75
        __asm _emit 0x14
        mov dword ptr [esi + ecx*4 + 7ch], ebp
        mov ecx, dword ptr [esi + ecx*4 + 0ach]
        mov edx, dword ptr [esi + 8ch]
        mov dword ptr [ecx + 50h], edx
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor edx, edx
        cmp ecx, 3
        ; Exact mapped bytes 75 08: jne 0x1004f0c3
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [esi + 0c0h]
        ; Exact mapped bytes EB 48: jmp 0x1004f10b
        __asm _emit 0xeb
        __asm _emit 0x48
        cmp ecx, 2
        ; Exact mapped bytes 75 12: jne 0x1004f0da
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [esi + 0c0h]
        mov eax, 66666667h
        imul edx
        sar edx, 2
        ; Exact mapped bytes EB 2A: jmp 0x1004f104
        __asm _emit 0xeb
        __asm _emit 0x2a
        cmp ecx, ebp
        ; Exact mapped bytes 75 12: jne 0x1004f0f0
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [esi + 0c0h]
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        ; Exact mapped bytes EB 14: jmp 0x1004f104
        __asm _emit 0xeb
        __asm _emit 0x14
        cmp ecx, edi
        ; Exact mapped bytes 75 17: jne 0x1004f10b
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [esi + 0c0h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, edx
        mov ebp, 0ah
        cdq
        idiv ebp
        test edx, edx
        ; Exact mapped bytes 75 09: jne 0x1004f122
        __asm _emit 0x75
        __asm _emit 0x09
        mov ebx, 1
        mov dword ptr [esi + ecx*4 + 7ch], ebx
        cmp dword ptr [esi + ecx*4 + 7ch], edi
        ; Exact mapped bytes 75 13: jne 0x1004f13b
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [esi + 0c0h]
        mov dword ptr [esi + 90h], edi
        dec eax
        mov dword ptr [esi + 0c0h], eax
        cmp ebx, edi
        ; Exact mapped bytes 74 22: je 0x1004f161
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [esi + 0a8h]
        mov dword ptr [esi + 90h], 40000000h
        mov ecx, dword ptr [esi + ecx*4 + 0ach]
        inc edx
        imul edx, dword ptr [esi + 94h]
        add dword ptr [ecx + 50h], edx
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
