// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004388A3 .. +0x23C bytes.
extern "C" __declspec(naked) void FUN_004388a3_004388A3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 110h
        push ebx
        push esi
        push edi
        xor esi, esi
        push 20h
        push esi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 24 62 FE FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x62
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        add esp, 0ch
        lea eax, [ebp - 110h]
        push 43f1a0h
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 B8 9E FF FF: call 0x43278d
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 60 C2 43 00: mov edi, dword ptr [0x43c260]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 90 C2 43 00: mov ebx, dword ptr [0x43c290]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x90
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x4389a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 66 8B 50 08: mov dx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 11: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax + 1ch]
        mov dword ptr [ecx + 1ch], edx
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ecx - 8], esi
        ; Exact mapped bytes 74 43: je 0x438956
        __asm _emit 0x74
        __asm _emit 0x43
        cmp ecx, esi
        ; Exact mapped bytes 75 04: jne 0x43891b
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2B: jmp 0x438946
        __asm _emit 0xeb
        __asm _emit 0x2b
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        inc eax
        mov dword ptr [ebp - 4], eax
        add eax, eax
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 D2 65 FE FF: call 0x41ef00
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x65
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, esp
        push dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        push eax
        push -1
        push dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 30: mov word ptr [eax], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x30
        push esi
        push esi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 50 C3 43 00: call dword ptr [0x43c350]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 18h]
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [eax - 8], esi
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x4389ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, esi
        ; Exact mapped bytes 75 04: jne 0x43896d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2B: jmp 0x438998
        __asm _emit 0xeb
        __asm _emit 0x2b
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        inc eax
        mov dword ptr [ebp - 4], eax
        add eax, eax
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 80 65 FE FF: call 0x41ef00
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x65
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, esp
        push dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        push eax
        push -1
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 89 30: mov word ptr [eax], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x30
        push esi
        push esi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 50 C3 43 00: call dword ptr [0x43c350]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes EB 43: jmp 0x4389ea
        __asm _emit 0xeb
        __asm _emit 0x43
        mov ecx, dword ptr [ebp + 0ch]
        push 43e970h
        ; Exact mapped bytes E8 D9 9D FF FF: call 0x43278d
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        lea eax, [ebp - 110h]
        push 100h
        push eax
        ; Exact mapped bytes 74 14: je 0x4389d8
        __asm _emit 0x74
        __asm _emit 0x14
        push 0f10ah
        ; Exact mapped bytes E8 33 9C FF FF: call 0x432601
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 00 0A F1: mov word ptr [eax], 0xf10a
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0xf1
        ; Exact mapped bytes EB 12: jmp 0x4389ea
        __asm _emit 0xeb
        __asm _emit 0x12
        push 0f108h
        ; Exact mapped bytes E8 1F 9C FF FF: call 0x432601
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 00 08 F1: mov word ptr [eax], 0xf108
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0xf1
        cmp dword ptr [ebp - 0ch], esi
        ; Exact mapped bytes 75 04: jne 0x4389f3
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2D: jmp 0x438a20
        __asm _emit 0xeb
        __asm _emit 0x2d
        push dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        inc eax
        mov dword ptr [ebp - 4], eax
        add eax, eax
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 F8 64 FE FF: call 0x41ef00
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, esp
        push dword ptr [ebp - 4]
        mov dword ptr [ebp + 0ch], eax
        push eax
        push -1
        push dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 30: mov word ptr [eax], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x30
        push esi
        push esi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 50 C3 43 00: call dword ptr [0x43c350]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4], esi
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes 75 4B: jne 0x438a7d
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes E8 7C D2 FF FF: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 10h]
        cmp eax, esi
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 04: jne 0x438a45
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2B: jmp 0x438a70
        __asm _emit 0xeb
        __asm _emit 0x2b
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        inc eax
        mov dword ptr [ebp - 4], eax
        add eax, eax
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 A8 64 FE FF: call 0x41ef00
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, esp
        push dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        push eax
        push -1
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 89 30: mov word ptr [eax], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x30
        push esi
        push esi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 50 C3 43 00: call dword ptr [0x43c350]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], eax
        cmp dword ptr [ecx + 0ch], esi
        ; Exact mapped bytes 75 50: jne 0x438ad2
        __asm _emit 0x75
        __asm _emit 0x50
        cmp dword ptr [ecx + 10h], esi
        ; Exact mapped bytes 74 4B: je 0x438ad2
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes E8 27 D2 FF FF: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        mov eax, dword ptr [eax + 8ch]
        cmp eax, esi
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 74 29: je 0x438ac5
        __asm _emit 0x74
        __asm _emit 0x29
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov edi, eax
        inc edi
        lea eax, [edi + edi]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 51 64 FE FF: call 0x41ef00
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, esp
        push edi
        push eax
        push -1
        push dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 66 89 30: mov word ptr [eax], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x30
        push esi
        push esi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov esi, dword ptr [ebp - 8]
        push esi
        ; Exact mapped bytes FF 15 50 C3 43 00: call dword ptr [0x43c350]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0ch], eax
        lea esp, [ebp - 11ch]
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
