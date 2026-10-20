// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1003C430 .. +0x197 bytes.
extern "C" __declspec(naked) void FUN_1003c430_1003C430() {
    __asm {
        sub esp, 0ch
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr [esp + 1ch]
        push ebp
        push esi
        push edi
        test ecx, ecx
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 75 34: jne 0x1003c479
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes 66 8B 83 A4 02 00 00: mov ax, word ptr [ebx + 0x2a4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 0B 00: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes 74 27: je 0x1003c479
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 66 3D 0C 00: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 74 21: je 0x1003c479
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 66 3D 0E 00: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 74 1B: je 0x1003c479
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebx + 0dch]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebx + 0e0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes EB 22: jmp 0x1003c49b
        __asm _emit 0xeb
        __asm _emit 0x22
        mov eax, dword ptr [ebx + 0dch]
        mov edx, 1
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ebx + 0e0h]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ebx + 0e0h]
        mov dword ptr [eax + 50h], ecx
        mov ebp, dword ptr [ebx + 4]
        mov ecx, dword ptr [ebx + 8]
        mov eax, 0d78h
        add ebp, 64h
        add ecx, 0aah
        sub eax, ebx
        mov dword ptr [esp + 18h], ecx
        mov edi, 3dfh
        lea esi, [ebx + 204h]
        mov dword ptr [esp + 28h], eax
        ; Exact mapped bytes EB 04: jmp 0x1003c4ca
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ecx, dword ptr [esp + 18h]
        test byte ptr [esp + 20h], 1
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x1003c57e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [esi]
        push ebp
        ; Exact mapped bytes E8 F2 27 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x27
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], edi
        ; Exact mapped bytes 0F 8E 97 00 00 00: jle 0x1003c586
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 8C 8F 00 00 00: jl 0x1003c586
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x1003c586
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 28h]
        lea edx, [ecx + esi]
        mov eax, dword ptr [edx + eax]
        test eax, eax
        ; Exact mapped bytes 74 73: je 0x1003c586
        __asm _emit 0x74
        __asm _emit 0x73
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 50h], eax
        mov ebx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], ebx
        mov ebx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], ebx
        add ecx, 14h
        mov ebx, dword ptr [eax]
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebx
        mov ebx, dword ptr [esp + 10h]
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], edi
        ; Exact mapped bytes 7E 1C: jle 0x1003c56d
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x1003c56d
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [edx + eax]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [esi]
        or byte ptr [eax + 24h], 1
        lea ebp, [ecx + ebp + 5]
        ; Exact mapped bytes EB 19: jmp 0x1003c586
        __asm _emit 0xeb
        __asm _emit 0x19
        xor eax, eax
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [esi]
        or byte ptr [eax + 24h], 1
        lea ebp, [ecx + ebp + 5]
        ; Exact mapped bytes EB 08: jmp 0x1003c586
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esp + 20h]
        add esi, 4
        shr eax, 1
        inc edi
        mov dword ptr [esp + 20h], eax
        lea edx, [edi - 3dfh]
        cmp edx, 20h
        ; Exact mapped bytes 0F 8C 23 FF FF FF: jl 0x1003c4c6
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 24h]
        mov ecx, dword ptr [ebx + 108h]
        push eax
        ; Exact mapped bytes E8 6D 31 0C 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x31
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 108h]
        pop edi
        pop esi
        pop ebp
        or byte ptr [eax + 24h], 1
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
