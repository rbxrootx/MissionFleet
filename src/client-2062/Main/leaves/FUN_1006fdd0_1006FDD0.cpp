// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006FDD0 .. +0x453 bytes.
extern "C" __declspec(naked) void FUN_1006fdd0_1006FDD0() {
    __asm {
        sub esp, 4ch
        push ebx
        push ebp
        xor ebx, ebx
        push esi
        mov ebp, ecx
        push ebx
        mov ecx, dword ptr [esp + 60h]
        lea eax, [esp + 24h]
        push ebx
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 30h], ebx
        ; Exact mapped bytes E8 8B 64 FA FF: call 0x10016280
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x64
        __asm _emit 0xfa
        __asm _emit 0xff
        mov esi, eax
        cmp esi, ebx
        mov dword ptr [esp + 0ch], esi
        ; Exact mapped bytes 0F 84 12 04 00 00: je 0x10070215
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 21704h]
        cmp eax, ebx
        ; Exact mapped bytes 74 0F: je 0x1006fe1c
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 71 C9 0F 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc9
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp + 21704h], ebx
        mov eax, dword ptr [ebp + 21708h]
        cmp eax, ebx
        ; Exact mapped bytes 74 0F: je 0x1006fe35
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 58 C9 0F 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc9
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp + 21708h], ebx
        push edi
        mov ecx, 0dh
        lea edi, [esp + 28h]
        mov dword ptr [ebp + 80h], ebx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp + 80h]
        xor eax, eax
        mov ebx, 35h
        xor edx, edx
        mov dl, byte ptr [esp + eax + 28h]
        add ecx, edx
        inc eax
        cmp eax, 34h
        ; Exact mapped bytes 72 F2: jb 0x1006fe54
        __asm _emit 0x72
        __asm _emit 0xf2
        mov eax, dword ptr [esp + 10h]
        lea edx, [ebp + 20ca8h]
        mov dword ptr [ebp + 80h], ecx
        mov ecx, 297h
        lea esi, [eax + 34h]
        mov edi, edx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [esp + 60h], 0a90h
        xor eax, eax
        xor ecx, ecx
        mov esi, dword ptr [ebp + 80h]
        mov cl, byte ptr [eax + edx]
        imul ecx, ebx
        add esi, ecx
        inc ebx
        inc eax
        mov dword ptr [ebp + 80h], esi
        cmp eax, 0a5ch
        ; Exact mapped bytes 72 E1: jb 0x1006fe88
        __asm _emit 0x72
        __asm _emit 0xe1
        mov eax, dword ptr [ebp + 215fch]
        lea ecx, [eax + eax*2]
        lea edx, [ecx + ecx*8]
        shl edx, 1
        sub edx, eax
        shl edx, 2
        push edx
        ; Exact mapped bytes E8 E0 C8 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xc8
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp + 21704h], eax
        mov eax, dword ptr [ebp + 215fch]
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 CB C8 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xc8
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp + 21708h], eax
        mov eax, dword ptr [ebp + 215fch]
        add esp, 8
        mov dword ptr [esp + 1ch], 0
        test eax, eax
        ; Exact mapped bytes 0F 8E F0 02 00 00: jle 0x100701e4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov dword ptr [esp + 14h], edx
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 60h]
        mov edi, edx
        lea esi, [eax + ecx]
        mov eax, dword ptr [ebp + 21704h]
        add edi, eax
        mov ecx, 35h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [esp + 60h]
        mov eax, dword ptr [ebp + 21704h]
        mov esi, edx
        add ecx, 0d4h
        add esi, eax
        mov dword ptr [esp + 60h], ecx
        xor eax, eax
        xor ecx, ecx
        mov edi, dword ptr [ebp + 80h]
        mov cl, byte ptr [eax + esi]
        imul ecx, ebx
        add edi, ecx
        inc ebx
        inc eax
        mov dword ptr [ebp + 80h], edi
        cmp eax, 0d4h
        ; Exact mapped bytes 72 E1: jb 0x1006ff30
        __asm _emit 0x72
        __asm _emit 0xe1
        mov eax, dword ptr [ebp + 21708h]
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [eax + ecx*4], 0
        mov eax, dword ptr [ebp + 21704h]
        mov ecx, dword ptr [edx + eax + 4]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 51 02 00 00: jne 0x100701c3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 60h]
        mov esi, dword ptr [eax + ecx]
        mov ecx, dword ptr [ebp + 80h]
        add eax, 4
        mov dword ptr [esp + 20h], esi
        mov dword ptr [esp + 60h], eax
        xor eax, eax
        xor edx, edx
        mov dl, byte ptr [esp + eax + 20h]
        imul edx, ebx
        add ecx, edx
        inc ebx
        inc eax
        cmp eax, 4
        ; Exact mapped bytes 72 EE: jb 0x1006ff90
        __asm _emit 0x72
        __asm _emit 0xee
        lea eax, [esi + esi*4]
        mov dword ptr [ebp + 80h], ecx
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea ecx, [eax*8 + 4]
        push ecx
        ; Exact mapped bytes E8 E2 C7 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xc7
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 21704h]
        mov ecx, dword ptr [esp + 18h]
        add esp, 4
        mov dword ptr [ecx + edx + 0cch], eax
        mov eax, dword ptr [ebp + 21704h]
        mov edx, dword ptr [ecx + eax + 0cch]
        mov dword ptr [edx], esi
        mov eax, dword ptr [ebp + 21704h]
        mov eax, dword ptr [ecx + eax + 0cch]
        add eax, 4
        test esi, esi
        ; Exact mapped bytes 0F 86 C6 01 00 00: jbe 0x100701bf
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xc6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 20h], esi
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 60h]
        mov edi, eax
        lea esi, [edx + ecx]
        mov ecx, 23h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        add ecx, 8ch
        xor esi, esi
        mov dword ptr [esp + 60h], ecx
        xor ecx, ecx
        mov edx, dword ptr [ebp + 80h]
        mov cl, byte ptr [esi + eax]
        imul ecx, ebx
        add edx, ecx
        inc ebx
        inc esi
        mov dword ptr [ebp + 80h], edx
        cmp esi, 8ch
        ; Exact mapped bytes 72 E0: jb 0x1007001f
        __asm _emit 0x72
        __asm _emit 0xe0
        mov ecx, dword ptr [esp + 10h]
        mov esi, dword ptr [esp + 60h]
        add eax, 8ch
        add esi, ecx
        mov ecx, 2bh
        mov edi, eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [esp + 60h]
        mov edx, eax
        add ecx, 0ach
        xor esi, esi
        mov dword ptr [esp + 60h], ecx
        xor ecx, ecx
        mov edi, dword ptr [ebp + 80h]
        mov cl, byte ptr [esi + eax]
        imul ecx, ebx
        add edi, ecx
        inc ebx
        inc esi
        mov dword ptr [ebp + 80h], edi
        cmp esi, 0ach
        ; Exact mapped bytes 72 E0: jb 0x10070069
        __asm _emit 0x72
        __asm _emit 0xe0
        ; Exact mapped bytes 66 8B 8A AA 00 00 00: mov cx, word ptr [edx + 0xaa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 0ach
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 74 68: je 0x10070106
        __asm _emit 0x74
        __asm _emit 0x68
        mov esi, dword ptr [esp + 60h]
        mov edi, dword ptr [esp + 10h]
        and ecx, 0ffffh
        add esi, edi
        mov ebx, ecx
        mov edi, eax
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, ebx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov esi, dword ptr [esp + 60h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8A AA 00 00 00: mov cx, word ptr [edx + 0xaa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, ecx
        mov ecx, dword ptr [edx + 44h]
        mov dword ptr [esp + 60h], esi
        and ecx, 3eh
        xor esi, esi
        test cl, cl
        ; Exact mapped bytes 76 1A: jbe 0x100700f7
        __asm _emit 0x76
        __asm _emit 0x1a
        lea ecx, [eax + 7]
        mov byte ptr [ecx - 1], 0ffh
        mov byte ptr [ecx], 0ffh
        mov edi, dword ptr [edx + 44h]
        add ecx, 0ah
        shr edi, 1
        inc esi
        and edi, 1fh
        cmp esi, edi
        ; Exact mapped bytes 72 E9: jb 0x100700e0
        __asm _emit 0x72
        __asm _emit 0xe9
        mov ebx, dword ptr [esp + 18h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8A AA 00 00 00: mov cx, word ptr [edx + 0xaa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, ecx
        mov cl, byte ptr [edx + 0a4h]
        test cl, cl
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x100701b0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and ecx, 0ffh
        mov edi, dword ptr [esp + 10h]
        mov esi, ecx
        lea ecx, [esi*8]
        sub ecx, esi
        mov esi, dword ptr [esp + 60h]
        shl ecx, 2
        mov ebx, ecx
        add esi, edi
        mov edi, eax
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, ebx
        mov ebx, dword ptr [esp + 60h]
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        xor ecx, ecx
        mov cl, byte ptr [edx + 0a4h]
        mov esi, ecx
        lea ecx, [esi*8]
        sub ecx, esi
        xor esi, esi
        shl ecx, 2
        add ebx, ecx
        mov dword ptr [esp + 60h], ebx
        mov ebx, dword ptr [esp + 18h]
        test ecx, ecx
        ; Exact mapped bytes 76 30: jbe 0x1007019c
        __asm _emit 0x76
        __asm _emit 0x30
        xor ecx, ecx
        mov edi, dword ptr [ebp + 80h]
        mov cl, byte ptr [esi + eax]
        imul ecx, ebx
        add edi, ecx
        xor ecx, ecx
        mov dword ptr [ebp + 80h], edi
        mov cl, byte ptr [edx + 0a4h]
        inc ebx
        inc esi
        lea edi, [ecx*8]
        sub edi, ecx
        shl edi, 2
        cmp esi, edi
        ; Exact mapped bytes 72 D0: jb 0x1007016c
        __asm _emit 0x72
        __asm _emit 0xd0
        xor ecx, ecx
        mov cl, byte ptr [edx + 0a4h]
        lea edx, [ecx*8]
        sub edx, ecx
        lea eax, [eax + edx*4]
        mov ecx, dword ptr [esp + 20h]
        dec ecx
        mov dword ptr [esp + 20h], ecx
        ; Exact mapped bytes 0F 85 3E FE FF FF: jne 0x1006fffd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [ebp + 215fch]
        inc eax
        add edx, 0d4h
        cmp eax, ecx
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes 0F 8C 16 FD FF FF: jl 0x1006fefa
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x16
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 80h]
        mov ecx, dword ptr [esp + 64h]
        push 0
        push 0
        push 0
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 80025002h
        ; Exact mapped bytes E8 4A BD 0F 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xbd
        __asm _emit 0x0f
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 4ch
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 4ch
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
