// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002BCE0 .. +0x173 bytes.
extern "C" __declspec(naked) void FUN_1002bce0_1002BCE0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov eax, dword ptr [esi + 38h]
        push 2ch
        cmp eax, edi
        ; Exact mapped bytes 75 78: jne 0x1002bd69
        __asm _emit 0x75
        __asm _emit 0x78
        ; Exact mapped bytes E8 AA 0A 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x0a
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        add esp, 4
        cmp eax, edi
        ; Exact mapped bytes 74 5B: je 0x1002bd5c
        __asm _emit 0x74
        __asm _emit 0x5b
        mov dword ptr [eax], edi
        mov dword ptr [eax + 4], edi
        ; Exact mapped bytes 66 89 78 28: mov word ptr [eax + 0x28], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x28
        ; Exact mapped bytes 66 8B 58 28: mov bx, word ptr [eax + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x28
        ; Exact mapped bytes 66 0F B6 F9: movzx di, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xf9
        mov edx, dword ptr [esp + 14h]
        mov ebp, dword ptr [esp + 24h]
        shl edi, 2
        and ebx, 0fc03h
        mov dword ptr [eax + 18h], edx
        or edi, ebx
        mov ebx, dword ptr [esp + 20h]
        ; Exact mapped bytes 66 89 78 28: mov word ptr [eax + 0x28], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x28
        mov edi, dword ptr [esp + 1ch]
        mov dword ptr [eax + 1ch], edi
        mov dword ptr [eax + 20h], ebx
        mov dword ptr [eax + 24h], ebp
        mov byte ptr [eax + 8], dl
        mov byte ptr [eax + 9], cl
        mov dword ptr [eax + 0ch], edi
        mov dword ptr [eax + 10h], ebx
        mov dword ptr [eax + 14h], ebp
        xor edi, edi
        mov dword ptr [esi + 3ch], eax
        mov dword ptr [esi + 38h], eax
        mov dword ptr [esi + 34h], eax
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x1002bde2
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [esi + 3ch], eax
        mov dword ptr [esi + 38h], eax
        mov dword ptr [esi + 34h], eax
        ; Exact mapped bytes EB 79: jmp 0x1002bde2
        __asm _emit 0xeb
        __asm _emit 0x79
        ; Exact mapped bytes E8 32 0A 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x0a
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        add esp, 4
        cmp eax, edi
        ; Exact mapped bytes 74 4F: je 0x1002bdc8
        __asm _emit 0x74
        __asm _emit 0x4f
        mov dword ptr [eax], edi
        mov dword ptr [eax + 4], edi
        ; Exact mapped bytes 66 89 78 28: mov word ptr [eax + 0x28], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x28
        ; Exact mapped bytes 66 8B 58 28: mov bx, word ptr [eax + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0x28
        ; Exact mapped bytes 66 0F B6 F9: movzx di, cl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xf9
        mov edx, dword ptr [esp + 14h]
        mov ebp, dword ptr [esp + 24h]
        shl edi, 2
        and ebx, 0fc03h
        mov dword ptr [eax + 18h], edx
        or edi, ebx
        mov ebx, dword ptr [esp + 20h]
        ; Exact mapped bytes 66 89 78 28: mov word ptr [eax + 0x28], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x28
        mov edi, dword ptr [esp + 1ch]
        mov dword ptr [eax + 1ch], edi
        mov dword ptr [eax + 0ch], edi
        mov dword ptr [eax + 20h], ebx
        mov dword ptr [eax + 24h], ebp
        mov byte ptr [eax + 8], dl
        mov byte ptr [eax + 9], cl
        mov dword ptr [eax + 10h], ebx
        mov dword ptr [eax + 14h], ebp
        xor edi, edi
        ; Exact mapped bytes EB 02: jmp 0x1002bdca
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 38h]
        mov dword ptr [edx], eax
        mov eax, dword ptr [esi + 38h]
        mov edx, dword ptr [eax]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [esi + 38h]
        mov eax, dword ptr [eax]
        mov dword ptr [esi + 38h], eax
        mov dword ptr [esi + 3ch], eax
        mov edx, dword ptr [esi + 24h]
        inc edx
        mov dword ptr [esi + 24h], edx
        ; Exact mapped bytes 8B 15 10 57 1C 10: mov edx, dword ptr [0x101c5710]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 118h], edi
        ; Exact mapped bytes 74 1D: je 0x1002be14
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + 4]
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x1002be14
        __asm _emit 0x74
        __asm _emit 0x11
        xor edx, edx
        ; Exact mapped bytes 66 8B 90 2C 03 00 00: mov dx, word ptr [eax + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        cmp dword ptr [eax + 18h], edx
        ; Exact mapped bytes 74 14: je 0x1002be28
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [esi + 38h]
        mov dword ptr [esi + 1ch], edi
        mov dword ptr [esi + 18h], edi
        mov eax, dword ptr [edx + 24h]
        mov edx, dword ptr [esi + 20h]
        add edx, eax
        mov dword ptr [esi + 20h], edx
        cmp cl, 10h
        ; Exact mapped bytes 73 13: jae 0x1002be40
        __asm _emit 0x73
        __asm _emit 0x13
        and ecx, 0ffh
        pop edi
        lea eax, [ecx + esi + 4]
        pop esi
        pop ebp
        pop ebx
        inc byte ptr [eax]
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
        and ecx, 0ffh
        pop edi
        lea eax, [ecx + esi - 2]
        pop esi
        pop ebp
        pop ebx
        inc byte ptr [eax]
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
