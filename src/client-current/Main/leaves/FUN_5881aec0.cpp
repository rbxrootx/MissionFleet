// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881AEC0 .. +0x207 bytes.
extern "C" __declspec(naked) void FUN_5881aec0() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, 2
        mov ebp, ecx
        cmp dword ptr [esp + 18h], edi
        ; Exact mapped bytes 0F 85 EF 01 00 00: jne 0x5881b0c4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        cmp eax, dword ptr [ebp + 70h]
        ; Exact mapped bytes 0F 85 CE 01 00 00: jne 0x5881b0b0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 30h]
        mov ecx, dword ptr [eax + 0cc0h]
        mov dl, byte ptr [ecx + 4]
        and dl, 1fh
        lea ebx, [edi - 1]
        cmp dl, 9
        ; Exact mapped bytes 74 4C: je 0x5881af4a
        __asm _emit 0x74
        __asm _emit 0x4c
        xor esi, esi
        lea ecx, [eax + 0ac0h]
        mov eax, dword ptr [ecx + 80h]
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x5881af40
        __asm _emit 0x74
        __asm _emit 0x30
        movzx edx, word ptr [eax + 20h]
        ; Exact mapped bytes 66 3B D7: cmp dx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd7
        ; Exact mapped bytes 75 06: jne 0x5881af1f
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 66 39 58 22: cmp word ptr [eax + 0x22], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x22
        ; Exact mapped bytes 74 21: je 0x5881af40
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 66 83 FA 04: cmp dx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x04
        ; Exact mapped bytes 75 06: jne 0x5881af2b
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 66 39 78 22: cmp word ptr [eax + 0x22], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x78
        __asm _emit 0x22
        ; Exact mapped bytes 74 15: je 0x5881af40
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, 0aah
        ; Exact mapped bytes 66 33 01: xor ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x01
        ; Exact mapped bytes 75 0B: jne 0x5881af40
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, 0aah
        ; Exact mapped bytes 66 33 51 02: xor dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 74 6B: je 0x5881afab
        __asm _emit 0x74
        __asm _emit 0x6b
        add esi, ebx
        add ecx, 4
        cmp esi, 1ch
        ; Exact mapped bytes 7C BC: jl 0x5881af06
        __asm _emit 0x7c
        __asm _emit 0xbc
        ; Exact mapped bytes 8B 35 54 83 A2 58: mov esi, dword ptr [0x58a28354]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        test esi, esi
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x5881b002
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0c4h
        ; Exact mapped bytes E8 EC 1C 16 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x1c
        __asm _emit 0x16
        __asm _emit 0x00
        push 0c4h
        mov esi, eax
        push 0
        push esi
        ; Exact mapped bytes 89 35 54 83 A2 58: mov dword ptr [0x58a28354], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 D1 1C 16 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x1c
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, 5899d880h
        add esp, 10h
        mov edi, 30h
        mov eax, esi
        sub edx, esi
        ; Exact mapped bytes EB 06: jmp 0x5881af90
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [edi + 7fffffceh]
        test ecx, ecx
        ; Exact mapped bytes 74 2E: je 0x5881afc8
        __asm _emit 0x74
        __asm _emit 0x2e
        mov cl, byte ptr [edx + eax]
        test cl, cl
        ; Exact mapped bytes 74 27: je 0x5881afc8
        __asm _emit 0x74
        __asm _emit 0x27
        mov byte ptr [eax], cl
        add eax, ebx
        sub edi, ebx
        ; Exact mapped bytes 75 E7: jne 0x5881af90
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 21: jmp 0x5881afcc
        __asm _emit 0xeb
        __asm _emit 0x21
        push 0
        push 0
        push 0
        push 2ch
        ; Exact mapped bytes E8 38 0B F5 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x0b
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 71 9D F4 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x9d
        __asm _emit 0xf4
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 75 02: jne 0x5881afce
        __asm _emit 0x75
        __asm _emit 0x02
        sub eax, ebx
        mov byte ptr [eax], 0
        mov cl, byte ptr [esi + 32h]
        and byte ptr [esi + 31h], 80h
        mov edx, 3
        and cl, 0f1h
        mov eax, edx
        or cl, 21h
        ; Exact mapped bytes 66 89 96 84 00 00 00: mov word ptr [esi + 0x84], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi + 47h], 64h
        mov byte ptr [esi + 46h], bl
        mov dword ptr [esi + 40h], ebx
        ; Exact mapped bytes 66 89 46 36: mov word ptr [esi + 0x36], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x36
        mov byte ptr [esi + 32h], cl
        mov edi, 2
        mov edx, dword ptr [ebp + 74h]
        mov dword ptr [esi + 40h], edx
        cmp dword ptr [ebp + 74h], edi
        ; Exact mapped bytes 75 14: jne 0x5881b021
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D A0 45 A2 58: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        ; Exact mapped bytes E8 47 53 FB FF: call 0x587d0360
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x53
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, ebx
        ; Exact mapped bytes 0F 85 A3 00 00 00: jne 0x5881b0c4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx + 0cc0h]
        movzx eax, word ptr [edx + 4]
        mov cl, al
        and cl, 1fh
        cmp cl, 7
        ; Exact mapped bytes 75 32: jne 0x5881b06f
        __asm _emit 0x75
        __asm _emit 0x32
        and eax, 3e0h
        cmp eax, 100h
        ; Exact mapped bytes 75 26: jne 0x5881b06f
        __asm _emit 0x75
        __asm _emit 0x26
        cmp dword ptr [ebp + 74h], 0ah
        ; Exact mapped bytes 74 20: je 0x5881b06f
        __asm _emit 0x74
        __asm _emit 0x20
        push 0
        push 0
        push 0
        push 516h
        ; Exact mapped bytes E8 91 0A F5 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x0a
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CA 9C F4 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x9c
        __asm _emit 0xf4
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A0 45 A2 58: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        push 0
        push 0eeach
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 54 83 A2 58: mov ecx, dword ptr [0x58a28354]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 0c4h
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 0
        push 80010118h
        ; Exact mapped bytes E8 C9 5B 15 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x5b
        __asm _emit 0x15
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 78h]
        ; Exact mapped bytes 75 0F: jne 0x5881b0c4
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp + 7ch], 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebp
    }
}
