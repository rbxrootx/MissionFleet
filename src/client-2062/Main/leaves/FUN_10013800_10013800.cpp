// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10013800 .. +0x2AB bytes.
extern "C" __declspec(naked) void FUN_10013800_10013800() {
    __asm {
        sub esp, 98h
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes 8B 3D B0 50 17 10: mov edi, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea eax, [esp + 24h]
        xor esi, esi
        push 1017f3ech
        mov ebx, ecx
        push eax
        mov dword ptr [esp + 18h], esi
        mov dword ptr [esp + 8ch], esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        lea ecx, [esp + 50h]
        push 1017f3e0h
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [ebx + 8]
        xor edx, edx
        mov dword ptr [esp + 90h], edx
        mov dword ptr [esp + 80h], eax
        mov dword ptr [esp + 94h], edx
        mov dword ptr [esp + 88h], esi
        mov dword ptr [esp + 98h], edx
        mov dword ptr [esp + 8ch], esi
        mov dword ptr [esp + 9ch], edx
        mov dword ptr [esp + 7ch], esi
        mov dword ptr [esp + 0a0h], edx
        mov dword ptr [esp + 4ch], esi
        shl eax, 2
        ; Exact mapped bytes 66 89 94 24 A4 00 00 00: mov word ptr [esp + 0xa4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov byte ptr [esp + 0aah], dl
        mov byte ptr [esp + 7eh], dl
        mov byte ptr [esp + 7ch], 3
        mov byte ptr [esp + 7dh], 3
        ; Exact mapped bytes E8 FE 8E 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x8e
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 8]
        add esp, 4
        cmp ecx, esi
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esp + 14h], esi
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x10013978
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 18h], eax
        mov ecx, dword ptr [esp + 14h]
        push ecx
        mov ecx, ebx
        ; Exact mapped bytes E8 E8 01 00 00: call 0x10013ab0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, eax
        mov eax, dword ptr [ebp + 130h]
        add eax, 70h
        push eax
        ; Exact mapped bytes E8 C7 8E 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x8e
        __asm _emit 0x15
        __asm _emit 0x00
        mov edx, dword ptr [esp + 1ch]
        lea esi, [ebp + 100h]
        mov ecx, 1ch
        mov edi, eax
        mov dword ptr [edx], eax
        mov eax, edx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp + 130h]
        mov edi, dword ptr [eax]
        mov esi, dword ptr [ebp + 170h]
        mov edx, ecx
        add edi, 70h
        xor eax, eax
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        add esp, 4
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov ecx, dword ptr [ebp + 130h]
        mov dword ptr [ebp + 16ch], eax
        cmp ecx, eax
        ; Exact mapped bytes 7E 1D: jle 0x10013941
        __asm _emit 0x7e
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 170h]
        ; Exact mapped bytes 0F BE 34 02: movsx esi, byte ptr [edx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x34
        __asm _emit 0x02
        mov edi, dword ptr [ebp + 16ch]
        add edi, esi
        inc eax
        cmp eax, ecx
        mov dword ptr [ebp + 16ch], edi
        ; Exact mapped bytes 7C E9: jl 0x1001392a
        __asm _emit 0x7c
        __asm _emit 0xe9
        mov eax, dword ptr [ebp + 16ch]
        mov edi, dword ptr [esp + 84h]
        mov edx, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebx + 8]
        add edi, eax
        mov eax, dword ptr [esp + 14h]
        inc eax
        add edx, 4
        cmp eax, ecx
        mov dword ptr [esp + 84h], edi
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes 0F 85 46 FF FF FF: jne 0x100138bc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor esi, esi
        mov eax, dword ptr [ebx + 24h]
        xor edi, edi
        cmp eax, esi
        ; Exact mapped bytes 74 17: je 0x10013998
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebx + 20h]
        mov edx, dword ptr [ecx + edi*4]
        push edx
        ; Exact mapped bytes E8 F7 8D 15 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x8d
        __asm _emit 0x15
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 24h]
        add esp, 4
        inc edi
        cmp edi, eax
        ; Exact mapped bytes 75 E9: jne 0x10013981
        __asm _emit 0x75
        __asm _emit 0xe9
        push esi
        push 80h
        push 2
        push esi
        push esi
        push 40000000h
        push 1017f3d0h
        ; Exact mapped bytes FF 15 C4 50 17 10: call dword ptr [0x101750c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 2D A4 50 17 10: mov ebp, dword ptr [0x101750a4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edi, eax
        lea eax, [esp + 1ch]
        push esi
        push eax
        lea ecx, [esp + 2ch]
        push 84h
        push ecx
        push edi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        xor ecx, ecx
        xor eax, eax
        ; Exact mapped bytes 0F BE 54 04 24: movsx edx, byte ptr [esp + eax + 0x24]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x24
        add ecx, edx
        inc eax
        cmp eax, 84h
        ; Exact mapped bytes 72 F1: jb 0x100139d1
        __asm _emit 0x72
        __asm _emit 0xf1
        lea eax, [esp + 1ch]
        mov dword ptr [esp + 10h], ecx
        push esi
        push eax
        lea ecx, [esp + 18h]
        push 4
        push ecx
        push edi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [esp + 14h], esi
        cmp eax, esi
        ; Exact mapped bytes 74 69: je 0x10013a68
        __asm _emit 0x74
        __asm _emit 0x69
        mov esi, dword ptr [esp + 20h]
        mov eax, dword ptr [esi]
        lea edx, [esp + 1ch]
        push 0
        push edx
        push 70h
        push eax
        push edi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        xor eax, eax
        mov dword ptr [esp + 10h], eax
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 0F BE 14 01: movsx edx, byte ptr [ecx + eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x01
        mov ecx, dword ptr [esp + 10h]
        add ecx, edx
        inc eax
        cmp eax, 70h
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 72 EA: jb 0x10013a18
        __asm _emit 0x72
        __asm _emit 0xea
        lea eax, [esp + 1ch]
        push 0
        push eax
        lea ecx, [esp + 18h]
        push 4
        push ecx
        push edi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esi]
        lea edx, [esp + 1ch]
        push 0
        push edx
        mov ecx, dword ptr [eax + 30h]
        add eax, 70h
        push ecx
        push eax
        push edi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [ebx + 8]
        inc eax
        add esi, 4
        cmp eax, ecx
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 75 9D: jne 0x10013a03
        __asm _emit 0x75
        __asm _emit 0x9d
        xor esi, esi
        push edi
        ; Exact mapped bytes FF 15 C0 50 17 10: call dword ptr [0x101750c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [ebx + 8]
        xor edi, edi
        cmp eax, esi
        ; Exact mapped bytes 74 1B: je 0x10013a93
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ebp, dword ptr [esp + 20h]
        mov edx, dword ptr [ebp]
        push edx
        ; Exact mapped bytes E8 FF 8C 15 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x8c
        __asm _emit 0x15
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 8]
        add esp, 4
        inc edi
        add ebp, 4
        cmp edi, eax
        ; Exact mapped bytes 75 E9: jne 0x10013a7c
        __asm _emit 0x75
        __asm _emit 0xe9
        mov eax, dword ptr [esp + 20h]
        push eax
        ; Exact mapped bytes E8 E7 8C 15 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x8c
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 98h
        ret
    }
}
