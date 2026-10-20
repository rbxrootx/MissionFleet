// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10077E10 .. +0x4E2 bytes.
extern "C" __declspec(naked) void FUN_10077e10_10077E10() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 14h]
        mov ebx, 0aaaaaaaah
        push edi
        mov ebp, dword ptr [esi + 10ch]
        mov edi, dword ptr [esi + 108h]
        mov eax, dword ptr [esi + 124h]
        xor ebp, ebx
        mov dword ptr [esi + 10ch], ebp
        mov edx, ebp
        mov ebp, dword ptr [esi + 12ch]
        xor edi, ebx
        xor eax, ebx
        xor ebp, ebx
        mov dword ptr [esi + 108h], edi
        mov dword ptr [esi + 124h], eax
        mov dword ptr [esi + 12ch], ebp
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ebp, ebp
        mov dword ptr [esp + 10h], ecx
        mov eax, dword ptr [eax + 4]
        mov eax, dword ptr [eax + 0e74h]
        mov al, byte ptr [eax + 2]
        and eax, 1fh
        cmp eax, 8
        ; Exact mapped bytes 77 41: ja 0x10077eb8
        __asm _emit 0x77
        __asm _emit 0x41
        ; Exact mapped bytes FF 24 85 F4 82 07 10: jmp dword ptr [eax*4 + 0x100782f4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x82
        __asm _emit 0x07
        __asm _emit 0x10
        xor ebp, ebp
        ; Exact mapped bytes EB 36: jmp 0x10077eb8
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ebp, 4aah
        ; Exact mapped bytes EB 2F: jmp 0x10077eb8
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ebp, 4cah
        ; Exact mapped bytes EB 28: jmp 0x10077eb8
        __asm _emit 0xeb
        __asm _emit 0x28
        mov ebp, 0be2h
        ; Exact mapped bytes EB 21: jmp 0x10077eb8
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ebp, 1308h
        ; Exact mapped bytes EB 1A: jmp 0x10077eb8
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ebp, 12f6h
        ; Exact mapped bytes EB 13: jmp 0x10077eb8
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ebp, 1c7ch
        ; Exact mapped bytes EB 0C: jmp 0x10077eb8
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ebp, 1d4eh
        ; Exact mapped bytes EB 05: jmp 0x10077eb8
        __asm _emit 0xeb
        __asm _emit 0x05
        mov ebp, 0ea60h
        ; Exact mapped bytes 8B 3D F4 56 1C 10: mov edi, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B BF 94 05 01 00: mov di, word ptr [edi + 0x10594]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FF 04: cmp di, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 52 01 00 00: jne 0x10078021
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [edx + 0ch]
        test edi, edi
        ; Exact mapped bytes 74 75: je 0x10077f51
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [edi + 5c54h]
        test eax, eax
        ; Exact mapped bytes 75 64: jne 0x10077f4a
        __asm _emit 0x75
        __asm _emit 0x64
        mov eax, dword ptr [edi + 0e74h]
        mov dl, byte ptr [eax + 2]
        and edx, 1fh
        lea eax, [edx - 4]
        cmp eax, 5
        ; Exact mapped bytes 77 50: ja 0x10077f4a
        __asm _emit 0x77
        __asm _emit 0x50
        ; Exact mapped bytes FF 24 85 18 83 07 10: jmp dword ptr [eax*4 + 0x10078318]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0x83
        __asm _emit 0x07
        __asm _emit 0x10
        mov eax, dword ptr [edi + 0eb4h]
        xor eax, ebx
        lea edx, [eax + eax*4]
        lea eax, [eax + edx*2]
        lea edx, [eax + eax*4]
        ; Exact mapped bytes EB 22: jmp 0x10077f36
        __asm _emit 0xeb
        __asm _emit 0x22
        mov eax, dword ptr [edi + 0eb4h]
        xor eax, ebx
        lea eax, [eax + eax*2]
        lea edx, [eax + eax*4]
        shl edx, 3
        ; Exact mapped bytes EB 11: jmp 0x10077f38
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [edi + 0eb4h]
        xor eax, ebx
        mov edx, eax
        shl edx, 6
        add edx, eax
        shl edx, 1
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        xor edx, ebx
        mov dword ptr [edi + 0eb4h], edx
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        ; Exact mapped bytes 75 8B: jne 0x10077edc
        __asm _emit 0x75
        __asm _emit 0x8b
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [edx + 0e74h]
        mov dl, byte ptr [eax + 2]
        and edx, 1fh
        lea eax, [edx - 1]
        cmp eax, 8
        ; Exact mapped bytes 0F 87 F8 00 00 00: ja 0x10078069
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 30 83 07 10: jmp dword ptr [eax*4 + 0x10078330]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x83
        __asm _emit 0x07
        __asm _emit 0x10
        mov eax, dword ptr [esi + 10ch]
        lea eax, [eax + eax*2]
        ; Exact mapped bytes E9 C6 00 00 00: jmp 0x1007804c
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10ch]
        lea edx, [eax + eax*4]
        shl edx, 4
        ; Exact mapped bytes E9 BB 00 00 00: jmp 0x10078052
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 10ch]
        mov eax, edx
        shl eax, 4
        add eax, edx
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x1007804f
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10ch]
        lea eax, [eax + eax*4]
        lea edx, [eax + eax*8]
        shl edx, 1
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esi + 124h]
        mov dword ptr [esi + 10ch], edx
        lea edx, [eax + eax*4]
        lea eax, [eax + edx*2]
        lea edx, [eax + eax*4]
        shl edx, 1
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        mov dword ptr [esi + 124h], edx
        ; Exact mapped bytes EB 78: jmp 0x10078069
        __asm _emit 0xeb
        __asm _emit 0x78
        mov eax, dword ptr [esi + 10ch]
        lea edx, [eax + eax*2]
        shl edx, 5
        sub edx, eax
        ; Exact mapped bytes EB B6: jmp 0x10077fb7
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov eax, dword ptr [esi + 124h]
        lea eax, [eax + eax*2]
        lea edx, [eax + eax*4]
        shl edx, 3
        ; Exact mapped bytes EB CD: jmp 0x10077fdf
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov eax, dword ptr [esi + 124h]
        mov edx, eax
        shl edx, 6
        add edx, eax
        ; Exact mapped bytes EB BC: jmp 0x10077fdd
        __asm _emit 0xeb
        __asm _emit 0xbc
        ; Exact mapped bytes 66 83 FF 05: cmp di, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x05
        ; Exact mapped bytes 75 42: jne 0x10078069
        __asm _emit 0x75
        __asm _emit 0x42
        ; Exact mapped bytes 8B 3D C4 58 1C 10: mov edi, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [edi + 0ch]
        test edi, edi
        ; Exact mapped bytes 74 07: je 0x1007803b
        __asm _emit 0x74
        __asm _emit 0x07
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        ; Exact mapped bytes 75 F9: jne 0x10078034
        __asm _emit 0x75
        __asm _emit 0xf9
        dec eax
        ; Exact mapped bytes 74 0B: je 0x10078049
        __asm _emit 0x74
        __asm _emit 0x0b
        dec eax
        ; Exact mapped bytes 75 28: jne 0x10078069
        __asm _emit 0x75
        __asm _emit 0x28
        lea edx, [edx + edx*4]
        shl edx, 4
        ; Exact mapped bytes EB 09: jmp 0x10078052
        __asm _emit 0xeb
        __asm _emit 0x09
        lea eax, [edx + edx*2]
        lea eax, [eax + eax*4]
        lea edx, [eax + eax*4]
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [esi + 10ch], edx
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 4]
        mov edx, dword ptr [eax + 0e74h]
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        mov dl, byte ptr [edx + 0ch]
        shr eax, 0ah
        and eax, 1fh
        and edx, 0fh
        add eax, edx
        mov edx, dword ptr [esi + 10ch]
        imul eax, ebp
        cmp edx, eax
        ; Exact mapped bytes 7E 06: jle 0x1007809d
        __asm _emit 0x7e
        __asm _emit 0x06
        mov dword ptr [esi + 10ch], eax
        lea edx, [ebp + ebp*8]
        mov eax, 0cccccccdh
        mul edx
        mov eax, dword ptr [ecx + 77ch]
        shr edx, 3
        cmp eax, edx
        ; Exact mapped bytes 76 06: jbe 0x100780bb
        __asm _emit 0x76
        __asm _emit 0x06
        mov dword ptr [ecx + 77ch], edx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov edi, dword ptr [ecx + 0e74h]
        ; Exact mapped bytes 66 8B 47 0A: mov ax, word ptr [edi + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x0a
        mov cl, byte ptr [edi + 0ch]
        shr eax, 0ah
        and eax, 1fh
        and ecx, 0fh
        add eax, ecx
        mov ecx, dword ptr [esp + 10h]
        imul eax, ebp
        cmp dword ptr [ecx + 764h], eax
        ; Exact mapped bytes 7E 06: jle 0x100780f0
        __asm _emit 0x7e
        __asm _emit 0x06
        mov dword ptr [esi + 10ch], eax
        cmp dword ptr [ecx + 784h], edx
        ; Exact mapped bytes 76 06: jbe 0x100780fe
        __asm _emit 0x76
        __asm _emit 0x06
        mov dword ptr [esi + 12ch], edx
        cmp dword ptr [ecx + 77ch], edx
        ; Exact mapped bytes 76 06: jbe 0x1007810c
        __asm _emit 0x76
        __asm _emit 0x06
        mov dword ptr [esi + 124h], edx
        lea edx, [ebp + ebp*2]
        mov eax, 0cccccccdh
        shl edx, 2
        mul edx
        mov eax, dword ptr [ecx + 760h]
        shr edx, 3
        cmp eax, edx
        ; Exact mapped bytes 76 06: jbe 0x1007812d
        __asm _emit 0x76
        __asm _emit 0x06
        mov dword ptr [esi + 108h], edx
        mov eax, dword ptr [esi + 11ch]
        mov ebp, dword ptr [esi + 128h]
        mov edi, dword ptr [esi + 120h]
        mov edx, dword ptr [esi + 110h]
        mov ecx, dword ptr [esi + 130h]
        xor eax, ebx
        mov dword ptr [esi + 11ch], eax
        mov eax, dword ptr [esi + 18ch]
        xor ebp, ebx
        xor edi, ebx
        xor edx, ebx
        xor ecx, ebx
        mov dword ptr [esi + 128h], ebp
        xor eax, ebx
        lea ebp, [esi + 6]
        mov dword ptr [esi + 130h], ecx
        mov dword ptr [esi + 18ch], eax
        mov dword ptr [esi + 120h], edi
        mov dword ptr [esi + 110h], edx
        mov eax, ebp
        mov ecx, 20h
        mov bl, 0aah
        mov dl, byte ptr [eax - 1]
        add eax, 2
        xor dl, bl
        mov byte ptr [eax - 3], dl
        mov dl, byte ptr [eax - 2]
        xor dl, bl
        dec ecx
        mov byte ptr [eax - 2], dl
        ; Exact mapped bytes 75 EA: jne 0x1007818d
        __asm _emit 0x75
        __asm _emit 0xea
        mov ecx, dword ptr [esi + 10ch]
        mov dword ptr [esi + 190h], 0
        xor ecx, 0f3a91cd0h
        mov dword ptr [esi + 188h], ecx
        ; Exact mapped bytes A1 E8 56 1C 10: mov eax, dword ptr [0x101c56e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [eax + 40h]
        mov eax, dword ptr [eax + 58h]
        lea edx, [eax + eax*2]
        lea eax, [eax + edx*4]
        xor edx, edx
        div dword ptr [edi + 4]
        mov eax, dword ptr [edi + 0ch]
        mov edx, dword ptr [eax + edx*4]
        xor edx, ecx
        mov dword ptr [esi + 188h], edx
        ; Exact mapped bytes A1 E8 56 1C 10: mov eax, dword ptr [0x101c56e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 40h]
        mov eax, dword ptr [eax + 58h]
        lea edx, [eax + eax*2]
        lea eax, [eax + edx*4]
        xor edx, edx
        div dword ptr [ecx + 4]
        mov eax, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [eax + edx*4]
        xor ecx, 9a2fc507h
        xor eax, eax
        mov dword ptr [esi + 130h], ecx
        mov edi, dword ptr [esi + 190h]
        xor edx, edx
        mov dl, byte ptr [eax + esi]
        add edi, edx
        inc eax
        cmp eax, 190h
        mov dword ptr [esi + 190h], edi
        ; Exact mapped bytes 72 E5: jb 0x1007820d
        __asm _emit 0x72
        __asm _emit 0xe5
        mov ecx, dword ptr [esi + 128h]
        mov edx, 0aaaaaaaah
        mov eax, edi
        mov edi, dword ptr [esi + 11ch]
        xor eax, edx
        xor edi, edx
        mov dword ptr [esi + 190h], eax
        mov eax, dword ptr [esi + 120h]
        xor ecx, edx
        xor eax, edx
        mov dword ptr [esi + 11ch], edi
        mov edi, dword ptr [esi + 110h]
        mov dword ptr [esi + 128h], ecx
        mov ecx, dword ptr [esi + 130h]
        mov dword ptr [esi + 120h], eax
        mov eax, dword ptr [esi + 18ch]
        xor edi, edx
        xor ecx, edx
        xor eax, edx
        mov dword ptr [esi + 130h], ecx
        mov dword ptr [esi + 18ch], eax
        mov dword ptr [esi + 110h], edi
        mov eax, ebp
        mov ecx, 20h
        xor byte ptr [eax - 1], bl
        xor byte ptr [eax], bl
        add eax, 2
        dec ecx
        ; Exact mapped bytes 75 F5: jne 0x10078292
        __asm _emit 0x75
        __asm _emit 0xf5
        mov ecx, dword ptr [esi + 10ch]
        mov eax, dword ptr [esi + 108h]
        mov ebp, dword ptr [esi + 124h]
        mov ebx, dword ptr [esi + 12ch]
        xor ecx, edx
        xor eax, edx
        xor ebp, edx
        xor ebx, edx
        push 0
        push 0
        mov dword ptr [esi + 10ch], ecx
        mov dword ptr [esi + 108h], eax
        mov dword ptr [esi + 124h], ebp
        mov dword ptr [esi + 12ch], ebx
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 194h
        push esi
        ; Exact mapped bytes E8 76 E2 F9 FF: call 0x10016560
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe2
        __asm _emit 0xf9
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
