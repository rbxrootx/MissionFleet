// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100051E0 .. +0x289 bytes.
extern "C" __declspec(naked) void FUN_100051e0_100051E0() {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        xor edx, edx
        mov al, byte ptr [esi + 0f4h]
        test al, al
        ; Exact mapped bytes 76 29: jbe 0x10005219
        __asm _emit 0x76
        __asm _emit 0x29
        lea eax, [esi + 100h]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 7E 0D: jle 0x10005209
        __asm _emit 0x7e
        __asm _emit 0x0d
        dec ecx
        test ecx, ecx
        mov dword ptr [eax], ecx
        ; Exact mapped bytes 75 06: jne 0x10005209
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [eax], 0ffffffffh
        xor ecx, ecx
        inc edx
        mov cl, byte ptr [esi + 0f4h]
        add eax, 14h
        cmp edx, ecx
        ; Exact mapped bytes 7C DD: jl 0x100051f6
        __asm _emit 0x7c
        __asm _emit 0xdd
        xor eax, eax
        lea ecx, [esi + 0c4h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 09: jne 0x1000522f
        __asm _emit 0x75
        __asm _emit 0x09
        inc eax
        add ecx, 4
        cmp eax, 4
        ; Exact mapped bytes 7C F2: jl 0x10005221
        __asm _emit 0x7c
        __asm _emit 0xf2
        cmp eax, 4
        ; Exact mapped bytes 0F 84 2E 02 00 00: je 0x10005466
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov bl, byte ptr [esi + 238h]
        push ebp
        push edi
        test bl, bl
        ; Exact mapped bytes 0F 86 9B 00 00 00: jbe 0x100052e4
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0ch]
        ; Exact mapped bytes 66 8B 82 EA 0C 00 00: mov ax, word ptr [edx + 0xcea]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xea
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 35 AA 00: xor ax, 0xaa
        __asm _emit 0x66
        __asm _emit 0x35
        __asm _emit 0xaa
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 44 24 12: mov word ptr [esp + 0x12], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x12
        ; Exact mapped bytes 0F 86 82 00 00 00: jbe 0x100052e4
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov ebp, 2
        mov dl, byte ptr [esi + 0f4h]
        test edx, edx
        ; Exact mapped bytes 7E 2B: jle 0x1000529e
        __asm _emit 0x7e
        __asm _emit 0x2b
        lea ecx, [esi + 0fdh]
        mov edi, edx
        cmp byte ptr [ecx - 1], 2
        ; Exact mapped bytes 75 13: jne 0x10005294
        __asm _emit 0x75
        __asm _emit 0x13
        mov al, byte ptr [ecx]
        test al, al
        ; Exact mapped bytes 76 0D: jbe 0x10005294
        __asm _emit 0x76
        __asm _emit 0x0d
        cmp dword ptr [ecx + 3], 0
        ; Exact mapped bytes 74 07: je 0x10005294
        __asm _emit 0x74
        __asm _emit 0x07
        and eax, 0ffh
        sub ebp, eax
        add ecx, 14h
        dec edi
        ; Exact mapped bytes 75 E1: jne 0x1000527b
        __asm _emit 0x75
        __asm _emit 0xe1
        test ebp, ebp
        ; Exact mapped bytes 7E 46: jle 0x100052e4
        __asm _emit 0x7e
        __asm _emit 0x46
        xor edi, edi
        test edx, edx
        ; Exact mapped bytes 7E 40: jle 0x100052e4
        __asm _emit 0x7e
        __asm _emit 0x40
        lea eax, [esi + 0fdh]
        cmp byte ptr [eax - 1], 2
        ; Exact mapped bytes 75 05: jne 0x100052b5
        __asm _emit 0x75
        __asm _emit 0x05
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 74 0A: je 0x100052bf
        __asm _emit 0x74
        __asm _emit 0x0a
        inc edi
        add eax, 14h
        cmp edi, edx
        ; Exact mapped bytes 7C ED: jl 0x100052aa
        __asm _emit 0x7c
        __asm _emit 0xed
        ; Exact mapped bytes EB 25: jmp 0x100052e4
        __asm _emit 0xeb
        __asm _emit 0x25
        cmp bl, 2
        ; Exact mapped bytes 72 08: jb 0x100052cc
        __asm _emit 0x72
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 7C 24 12 02: cmp word ptr [esp + 0x12], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x12
        __asm _emit 0x02
        ; Exact mapped bytes 73 05: jae 0x100052d1
        __asm _emit 0x73
        __asm _emit 0x05
        mov ebp, 1
        push ebp
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 96 01 00 00: call 0x10005470
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [edi + edi*4]
        mov dword ptr [esi + ecx*4 + 0f8h], eax
        xor ecx, ecx
        xor edi, edi
        mov cl, byte ptr [esi + 0f4h]
        xor ebx, ebx
        test ecx, ecx
        ; Exact mapped bytes 7E 18: jle 0x1000530c
        __asm _emit 0x7e
        __asm _emit 0x18
        lea eax, [esi + 0fdh]
        cmp byte ptr [eax - 1], 4
        ; Exact mapped bytes 75 06: jne 0x10005306
        __asm _emit 0x75
        __asm _emit 0x06
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 75 01: jne 0x10005306
        __asm _emit 0x75
        __asm _emit 0x01
        inc ebx
        add eax, 14h
        dec ecx
        ; Exact mapped bytes 75 EE: jne 0x100052fa
        __asm _emit 0x75
        __asm _emit 0xee
        mov al, byte ptr [esi + 238h]
        test al, al
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x100053f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 0F 84 CE 00 00 00: je 0x100053f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [edi + edi*4]
        mov al, byte ptr [esi + edx*4 + 0fch]
        lea ebp, [esi + edx*4]
        cmp al, 4
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x100053d3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebp + 0fdh]
        test al, al
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x100053d3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 1047ch]
        mov edx, dword ptr [ecx + 10474h]
        mov ecx, dword ptr [esi + 240h]
        add eax, edx
        add eax, ecx
        xor edx, edx
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 64 45 1C 10: mov eax, dword ptr [0x101c4564]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, 0ah
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div ecx
        cmp edx, 4
        ; Exact mapped bytes 7D 04: jge 0x10005383
        __asm _emit 0x7d
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 17: jmp 0x1000539a
        __asm _emit 0xeb
        __asm _emit 0x17
        cmp edx, 7
        ; Exact mapped bytes 7D 07: jge 0x1000538f
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x1000539a
        __asm _emit 0xeb
        __asm _emit 0x0b
        xor eax, eax
        cmp edx, 9
        setge al
        add eax, 2
        mov ecx, dword ptr [esi + eax*4 + 0c4h]
        test ecx, ecx
        ; Exact mapped bytes 75 0F: jne 0x100053b4
        __asm _emit 0x75
        __asm _emit 0x0f
        inc eax
        and eax, 80000003h
        ; Exact mapped bytes 79 ED: jns 0x1000539a
        __asm _emit 0x79
        __asm _emit 0xed
        dec eax
        or eax, 0fffffffch
        inc eax
        ; Exact mapped bytes EB E6: jmp 0x1000539a
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov eax, dword ptr [esi + eax*4 + 0c4h]
        lea edx, [edi + edi*4 + 41h]
        push 3
        push edi
        mov ecx, esi
        mov dword ptr [esi + edx*4], eax
        ; Exact mapped bytes E8 A4 00 00 00: call 0x10005470
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 0f8h], eax
        dec ebx
        xor ecx, ecx
        inc edi
        mov cl, byte ptr [esi + 0f4h]
        cmp edi, ecx
        ; Exact mapped bytes 75 02: jne 0x100053e2
        __asm _emit 0x75
        __asm _emit 0x02
        xor edi, edi
        mov al, byte ptr [esi + 238h]
        test al, al
        ; Exact mapped bytes 0F 85 2A FF FF FF: jne 0x1000531a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [esi + 0f4h]
        xor edi, edi
        test al, al
        ; Exact mapped bytes 76 2A: jbe 0x10005426
        __asm _emit 0x76
        __asm _emit 0x2a
        lea ebp, [esi + 0fch]
        cmp dword ptr [ebp + 4], -1
        ; Exact mapped bytes 75 0E: jne 0x10005416
        __asm _emit 0x75
        __asm _emit 0x0e
        cmp byte ptr [ebp], 4
        ; Exact mapped bytes 75 08: jne 0x10005416
        __asm _emit 0x75
        __asm _emit 0x08
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 3A 01 00 00: call 0x10005550
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        inc edi
        mov dl, byte ptr [esi + 0f4h]
        add ebp, 14h
        cmp edi, edx
        ; Exact mapped bytes 7C DC: jl 0x10005402
        __asm _emit 0x7c
        __asm _emit 0xdc
        mov al, byte ptr [esi + 0f4h]
        xor edi, edi
        test al, al
        ; Exact mapped bytes 76 2A: jbe 0x1000545c
        __asm _emit 0x76
        __asm _emit 0x2a
        lea ebp, [esi + 100h]
        cmp byte ptr [ebp - 4], 2
        ; Exact mapped bytes 75 0E: jne 0x1000544c
        __asm _emit 0x75
        __asm _emit 0x0e
        cmp dword ptr [ebp], -1
        ; Exact mapped bytes 75 08: jne 0x1000544c
        __asm _emit 0x75
        __asm _emit 0x08
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 04 01 00 00: call 0x10005550
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        inc edi
        mov al, byte ptr [esi + 0f4h]
        add ebp, 14h
        cmp edi, eax
        ; Exact mapped bytes 7C DC: jl 0x10005438
        __asm _emit 0x7c
        __asm _emit 0xdc
        mov ecx, esi
        ; Exact mapped bytes E8 CD 01 00 00: call 0x10005630
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop ebp
        pop ebx
        pop esi
        pop ecx
        ret
    }
}
