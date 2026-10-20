// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58836E7B .. +0x645 bytes.
extern "C" __declspec(naked) void FUN_58836e7b_58836E7B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4a4h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov al, byte ptr [ebp + 0ch]
        push ebx
        push esi
        mov esi, ecx
        mov byte ptr [ebp - 48dh], al
        xor ebx, ebx
        mov dword ptr [ebp - 48ch], esi
        push edi
        mov edi, dword ptr [ebp + 8]
        cmp dword ptr [esi], -1
        mov dword ptr [ebp - 58h], 206h
        mov dword ptr [ebp - 54h], 0a400h
        mov dword ptr [ebp - 50h], 31415352h
        mov dword ptr [ebp - 4ch], 200h
        mov dword ptr [ebp - 48h], 10001h
        mov dword ptr [ebp - 44h], 9ab0c891h
        mov dword ptr [ebp - 40h], 73d2392ch
        mov dword ptr [ebp - 3ch], 156f8f5eh
        mov dword ptr [ebp - 38h], 0bd4fe72ah
        mov dword ptr [ebp - 34h], 8d4eff66h
        mov dword ptr [ebp - 30h], 8dc0b38ch
        mov dword ptr [ebp - 2ch], 0dcb2f498h
        mov dword ptr [ebp - 28h], 0bc514381h
        mov dword ptr [ebp - 24h], 5074d6f3h
        mov dword ptr [ebp - 20h], 0a887397fh
        mov dword ptr [ebp - 1ch], 36065c1bh
        mov dword ptr [ebp - 18h], 0d8a80847h
        mov dword ptr [ebp - 14h], 6dfdad63h
        mov dword ptr [ebp - 10h], 0f094a4b5h
        mov dword ptr [ebp - 0ch], 0c5eadfe0h
        mov dword ptr [ebp - 8], 0d2dc73f4h
        ; Exact mapped bytes 74 07: je 0x58836f46
        __asm _emit 0x74
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 67 05 00 00: jmp 0x588374ad
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [esi + 143ch], eax
        mov eax, dword ptr [ebp + 14h]
        push edi
        mov dword ptr [esi + 1440h], eax
        ; Exact mapped bytes E8 22 A2 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        cmp eax, 3
        ; Exact mapped bytes 76 58: jbe 0x58836fbc
        __asm _emit 0x76
        __asm _emit 0x58
        cmp byte ptr [edi + 1], 3ah
        ; Exact mapped bytes 74 52: je 0x58836fbc
        __asm _emit 0x74
        __asm _emit 0x52
        push 104h
        lea eax, [ebp - 284h]
        push eax
        push ebx
        ; Exact mapped bytes FF 15 E4 42 89 58: call dword ptr [0x588942e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 284h]
        push ebx
        push eax
        ; Exact mapped bytes E8 D7 F9 02 00: call 0x58866961
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xf9
        __asm _emit 0x02
        __asm _emit 0x00
        pop ecx
        pop ecx
        cmp eax, -1
        ; Exact mapped bytes 75 13: jne 0x58836fa4
        __asm _emit 0x75
        __asm _emit 0x13
        lea eax, [ebp - 284h]
        push 588f0024h
        push eax
        ; Exact mapped bytes E8 FE 2A 02 00: call 0x58859aa0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        pop ecx
        pop ecx
        lea eax, [ebp - 284h]
        push 5ch
        push eax
        ; Exact mapped bytes E8 A7 0D 02 00: call 0x58857d59
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        pop ecx
        pop ecx
        push edi
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x58836fbd
        __asm _emit 0x74
        __asm _emit 0x04
        inc eax
        ; Exact mapped bytes EB 07: jmp 0x58836fc3
        __asm _emit 0xeb
        __asm _emit 0x07
        push edi
        lea eax, [ebp - 284h]
        push eax
        ; Exact mapped bytes E8 D7 2A 02 00: call 0x58859aa0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        pop ecx
        pop ecx
        lea eax, [ebp - 284h]
        push 2eh
        push eax
        ; Exact mapped bytes E8 80 0D 02 00: call 0x58857d59
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        mov edi, 104h
        push edi
        push ebx
        mov byte ptr [eax], bl
        lea eax, [ebp - 17ch]
        push eax
        ; Exact mapped bytes E8 22 5E 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        push edi
        lea eax, [ebp - 488h]
        push ebx
        push eax
        ; Exact mapped bytes E8 14 5E 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 20h
        mov ecx, esi
        ; Exact mapped bytes E8 C2 BF FF FF: call 0x58832fc8
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        or edi, 0ffffffffh
        lea eax, [ebp - 284h]
        cmp edi, -1
        ; Exact mapped bytes 75 17: jne 0x5883702d
        __asm _emit 0x75
        __asm _emit 0x17
        push eax
        lea eax, [ebp - 17ch]
        push 588f0028h
        push eax
        ; Exact mapped bytes E8 38 5B CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x5b
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 16: jmp 0x58837043
        __asm _emit 0xeb
        __asm _emit 0x16
        push edi
        push eax
        lea eax, [ebp - 17ch]
        push 588f0030h
        push eax
        ; Exact mapped bytes E8 20 5B CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x5b
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 10h
        lea eax, [ebp - 17ch]
        push 0
        push eax
        ; Exact mapped bytes E8 10 F9 02 00: call 0x58866961
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xf9
        __asm _emit 0x02
        __asm _emit 0x00
        pop ecx
        pop ecx
        cmp eax, -1
        ; Exact mapped bytes 75 09: jne 0x58837061
        __asm _emit 0x75
        __asm _emit 0x09
        cmp edi, 1
        ; Exact mapped bytes 0F 8D AB 00 00 00: jge 0x5883710c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ebx, ebx
        ; Exact mapped bytes 75 0D: jne 0x58837072
        __asm _emit 0x75
        __asm _emit 0x0d
        lea eax, [ebp - 17ch]
        push eax
        ; Exact mapped bytes FF 15 04 43 89 58: call dword ptr [0x58894304]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        inc edi
        cmp edi, 63h
        ; Exact mapped bytes 7E 93: jle 0x5883700b
        __asm _emit 0x7e
        __asm _emit 0x93
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x5883710c
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [edi - 1]
        cmp ebx, -1
        ; Exact mapped bytes 75 17: jne 0x5883709c
        __asm _emit 0x75
        __asm _emit 0x17
        push eax
        lea eax, [ebp - 17ch]
        push 588f0028h
        push eax
        ; Exact mapped bytes E8 C9 5A CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x5a
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 16: jmp 0x588370b2
        __asm _emit 0xeb
        __asm _emit 0x16
        push ebx
        push eax
        lea eax, [ebp - 17ch]
        push 588f0030h
        push eax
        ; Exact mapped bytes E8 B1 5A CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x5a
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 10h
        push edi
        lea eax, [ebp - 284h]
        push eax
        lea eax, [ebp - 488h]
        push 588f0030h
        push eax
        ; Exact mapped bytes E8 95 5A CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x5a
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 10h
        lea eax, [ebp - 488h]
        push 1
        push eax
        lea eax, [ebp - 17ch]
        push eax
        ; Exact mapped bytes FF 15 04 44 89 58: call dword ptr [0x58894404]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x5883710a
        __asm _emit 0x75
        __asm _emit 0x22
        push eax
        lea eax, [ebp - 488h]
        push eax
        lea eax, [ebp - 17ch]
        push eax
        ; Exact mapped bytes FF 15 2C 41 89 58: call dword ptr [0x5889412c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 17ch]
        push eax
        ; Exact mapped bytes FF 15 04 43 89 58: call dword ptr [0x58894304]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edi, ebx
        lea eax, [ebp - 284h]
        cmp edi, -1
        ; Exact mapped bytes 0F 8F 62 FF FF FF: jg 0x5883707d
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea eax, [ebp - 17ch]
        push 588f0028h
        push eax
        ; Exact mapped bytes E8 33 5A CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x5a
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes 8B 1D 00 42 89 58: mov ebx, dword ptr [0x58894200]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp byte ptr [ebp - 48dh], 0
        push 2
        pop edi
        push 4
        pop eax
        push 0
        push 80h
        cmovne edi, eax
        lea eax, [ebp - 17ch]
        push edi
        push 0
        push 5
        push 0c0000000h
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov dword ptr [esi], eax
        cmp eax, -1
        ; Exact mapped bytes 75 1C: jne 0x58837183
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0
        push 80000080h
        push edi
        push 0
        push 1
        push 0c0000000h
        lea eax, [ebp - 17ch]
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov dword ptr [esi], eax
        cmp dword ptr [esi], -1
        ; Exact mapped bytes 0F 84 B3 FD FF FF: je 0x58836f3f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [ebp - 48dh], 0
        ; Exact mapped bytes 74 0E: je 0x588371a3
        __asm _emit 0x74
        __asm _emit 0x0e
        push 2
        push 0
        push 0
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 44 42 89 58: call dword ptr [0x58894244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        lea edi, [esi + 1020h]
        push edi
        ; Exact mapped bytes FF 15 48 42 89 58: call dword ptr [0x58894248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        movzx eax, word ptr [esi + 102eh]
        lea ebx, [esi + 20h]
        push eax
        movzx eax, word ptr [esi + 102ch]
        push eax
        movzx eax, word ptr [esi + 102ah]
        push eax
        movzx eax, word ptr [esi + 1028h]
        push eax
        movzx eax, word ptr [esi + 1026h]
        push eax
        movzx eax, word ptr [esi + 1022h]
        push eax
        movzx eax, word ptr [edi]
        push eax
        push 588f0040h
        ; Exact mapped bytes E8 E8 54 00 00: call 0x5883c6d9
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push ebx
        ; Exact mapped bytes E8 67 59 CD FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x59
        __asm _emit 0xcd
        __asm _emit 0xff
        push ebx
        ; Exact mapped bytes E8 81 9F 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, eax
        add esp, 28h
        xor eax, eax
        cmp dword ptr [esi + 1440h], 3e7h
        cmove edx, eax
        mov dword ptr [ebp - 4a0h], edx
        cmp dword ptr [esi + 143ch], eax
        ; Exact mapped bytes 74 28: je 0x58837249
        __asm _emit 0x74
        __asm _emit 0x28
        test edx, edx
        ; Exact mapped bytes 0F 8E 6F 02 00 00: jle 0x58837498
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, ebx
        mov edi, edx
        add dword ptr [esi + 143ch], 2
        mov eax, dword ptr [esi + 143ch]
        add al, 43h
        xor byte ptr [ecx], al
        inc ecx
        sub edi, 1
        ; Exact mapped bytes 75 E9: jne 0x5883722d
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes E9 4F 02 00 00: jmp 0x58837498
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D B8 42 89 58: mov ebx, dword ptr [0x588942b8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xb8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        movzx edx, word ptr [esi + 102eh]
        mov edi, eax
        mov ecx, dword ptr [ebp - 48ch]
        movzx esi, word ptr [esi + 1020h]
        push 0ah
        movzx eax, word ptr [ecx + 1026h]
        imul esi, eax
        movzx eax, word ptr [ecx + 1022h]
        imul esi, eax
        movzx eax, word ptr [ecx + 102ch]
        movzx ecx, word ptr [ecx + 102ah]
        add eax, edx
        add ecx, eax
        mov eax, dword ptr [ebp - 48ch]
        add ecx, edi
        imul esi, edx
        xor edx, edx
        pop edi
        inc esi
        imul esi, ecx
        mov dword ptr [eax + 1030h], esi
        xor eax, eax
        mov esi, dword ptr [ebp - 48ch]
        ; Exact mapped bytes 66 89 86 32 10 00 00: mov word ptr [esi + 0x1032], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x32
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1030h]
        or ecx, 0fc000000h
        mov eax, ecx
        div edi
        xor edx, 55h
        shl edx, 10h
        or edx, ecx
        mov dword ptr [esi + 1030h], edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        ; Exact mapped bytes E8 B1 99 01 00: call 0x58850c8d
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        xor ebx, ebx
        pop ecx
        mov edi, ebx
        ; Exact mapped bytes E8 86 99 01 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        and eax, 800000ffh
        ; Exact mapped bytes 79 07: jns 0x588372f4
        __asm _emit 0x79
        __asm _emit 0x07
        dec eax
        or eax, 0ffffff00h
        inc eax
        mov byte ptr [ebp + edi - 68h], al
        inc edi
        cmp edi, 10h
        ; Exact mapped bytes 7C E3: jl 0x588372e1
        __asm _emit 0x7c
        __asm _emit 0xe3
        lea eax, [ebp - 68h]
        push eax
        lea edi, [esi + 1034h]
        push 10h
        push edi
        ; Exact mapped bytes E8 09 7A 00 00: call 0x5883ed19
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 498h], ebx
        lea eax, [ebp - 498h]
        mov dword ptr [ebp - 494h], ebx
        push 0f0000000h
        push 1
        push 588f0090h
        push ebx
        push eax
        ; Exact mapped bytes FF 15 00 40 89 58: call dword ptr [0x58894000]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 3D 01 00 00: je 0x5883747e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 494h]
        push eax
        push ebx
        push ebx
        push 54h
        lea eax, [ebp - 58h]
        push eax
        push dword ptr [ebp - 498h]
        ; Exact mapped bytes FF 15 50 40 89 58: call dword ptr [0x58894050]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 0D 01 00 00: je 0x58837471
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        lea eax, [ebp - 48ch]
        mov dword ptr [ebp - 48ch], ebx
        push eax
        push ebx
        push ebx
        push 1
        push ebx
        push dword ptr [ebp - 494h]
        ; Exact mapped bytes 8B 1D 4C 40 89 58: mov ebx, dword ptr [0x5889404c]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x4c
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edi, dword ptr [ebp - 48ch]
        test edi, edi
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x58837414
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        pop eax
        push eax
        mov dword ptr [ebp - 48ch], eax
        lea eax, [ebp - 68h]
        push eax
        lea eax, [ebp - 384h]
        push eax
        ; Exact mapped bytes E8 E3 54 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        xor byte ptr [ebp - 384h], 23h
        lea eax, [ebp - 48ch]
        add esp, 0ch
        push edi
        push eax
        lea eax, [ebp - 384h]
        push eax
        push 0
        push 1
        push 0
        push dword ptr [ebp - 494h]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x5883745d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 34 43 89 58: mov ebx, dword ptr [0x58894334]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 48ch]
        push 0
        push eax
        push 4
        lea eax, [ebp - 49ch]
        mov dword ptr [ebp - 49ch], 0ccfc00h
        push eax
        push dword ptr [esi]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push 0
        lea eax, [ebp - 48ch]
        push eax
        push edi
        lea eax, [ebp - 384h]
        ; Exact mapped bytes EB 44: jmp 0x58837458
        __asm _emit 0xeb
        __asm _emit 0x44
        ; Exact mapped bytes 8B 1D 34 43 89 58: mov ebx, dword ptr [0x58894334]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 48ch]
        push 0
        push eax
        push 4
        lea eax, [ebp - 49ch]
        mov dword ptr [ebp - 49ch], 0ccfd00h
        push eax
        push dword ptr [esi]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 0F 10 4D BD: movups xmm1, xmmword ptr [ebp - 0x43]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xbd
        push 0
        ; Exact mapped bytes 0F 10 45 98: movups xmm0, xmmword ptr [ebp - 0x68]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x98
        lea eax, [ebp - 48ch]
        push eax
        ; Exact mapped bytes 66 0F EF C8: pxor xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xef
        __asm _emit 0xc8
        lea eax, [ebp - 78h]
        ; Exact mapped bytes 0F 11 4D 88: movups xmmword ptr [ebp - 0x78], xmm1
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x4d
        __asm _emit 0x88
        push 10h
        push eax
        push dword ptr [esi]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push dword ptr [ebp - 494h]
        ; Exact mapped bytes FF 15 54 40 89 58: call dword ptr [0x58894054]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        lea edi, [esi + 1034h]
        xor ebx, ebx
        push ebx
        push dword ptr [ebp - 498h]
        ; Exact mapped bytes FF 15 58 40 89 58: call dword ptr [0x58894058]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        lea ebx, [esi + 20h]
        push ebx
        push ebx
        push dword ptr [ebp - 4a0h]
        push edi
        ; Exact mapped bytes E8 EE 74 00 00: call 0x5883e97d
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4a0h]
        add esp, 10h
        push 0
        lea ecx, [ebp - 4a4h]
        push ecx
        push edx
        push ebx
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov al, 1
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 96 9B FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
