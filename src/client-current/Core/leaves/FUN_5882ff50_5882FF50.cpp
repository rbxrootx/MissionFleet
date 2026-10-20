// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882FF50 .. +0x240 bytes.
extern "C" __declspec(naked) void FUN_5882ff50_5882FF50() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff0h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        sub esp, 48h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebx + 14h]
        mov ecx, dword ptr [ebx + 0ch]
        mov dword ptr [ebp - 30h], ecx
        push esi
        mov esi, dword ptr [ebx + 8]
        push edi
        mov edi, dword ptr [ebx + 10h]
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5882ff8f
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, esi
        ; Exact mapped bytes E9 EC 01 00 00: jmp 0x5883017b
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 10: jne 0x5882ffa4
        __asm _emit 0x75
        __asm _emit 0x10
        movzx eax, word ptr [edi]
        push eax
        push ecx
        push esi
        ; Exact mapped bytes E8 61 FC FF FF: call 0x5882fc00
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D7 01 00 00: jmp 0x5883017b
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [eax + eax]
        sub ecx, esi
        mov dword ptr [ebp - 24h], edx
        cmp ecx, edx
        ; Exact mapped bytes 0F 82 C4 01 00 00: jb 0x58830178
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 60 90 58: mov eax, dword ptr [0x589060b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        shr eax, 2
        test al, 1
        ; Exact mapped bytes 0F 84 69 01 00 00: je 0x5883012d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 10h
        ; Exact mapped bytes 0F 82 60 01 00 00: jb 0x5883012d
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 10h
        ; Exact mapped bytes 0F 87 97 00 00 00: ja 0x5883006d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edx
        mov ecx, 8
        shr eax, 1
        push edx
        sub ecx, eax
        mov dword ptr [ebp - 28h], eax
        lea eax, [ebp - 20h]
        mov dword ptr [ebp - 24h], ecx
        push edi
        push eax
        ; Exact mapped bytes E8 9E C8 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 28 4D E0: movaps xmm1, xmmword ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x4d
        __asm _emit 0xe0
        add esp, 0ch
        mov edi, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F 29 4D C0: movaps xmmword ptr [ebp - 0x40], xmm1
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 10 06: movups xmm0, xmmword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x06
        mov eax, edi
        mov edx, 8
        ; Exact mapped bytes 66 0F 3A 61 C8 0D: pcmpestri xmm1, xmm0, 0xd
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x61
        __asm _emit 0xc8
        __asm _emit 0x0d
        ; Exact mapped bytes 72 05: jb 0x58830017
        __asm _emit 0x72
        __asm _emit 0x05
        add esi, 10h
        ; Exact mapped bytes EB 0C: jmp 0x58830023
        __asm _emit 0xeb
        __asm _emit 0x0c
        lea esi, [esi + ecx*2]
        cmp ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F 8E 65 FF FF FF: jle 0x5882ff88
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 30h]
        lea eax, [ecx - 10h]
        cmp esi, eax
        ; Exact mapped bytes 76 D3: jbe 0x58830000
        __asm _emit 0x76
        __asm _emit 0xd3
        mov eax, ecx
        sub eax, esi
        ; Exact mapped bytes 0F 84 41 01 00 00: je 0x58830178
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, eax
        lea eax, [ebp - 20h]
        shr ecx, 1
        push esi
        push eax
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes E8 47 C8 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 28 4D E0: movaps xmm1, xmmword ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x4d
        __asm _emit 0xe0
        mov eax, edi
        ; Exact mapped bytes 0F 28 45 C0: movaps xmm0, xmmword ptr [ebp - 0x40]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x45
        __asm _emit 0xc0
        add esp, 0ch
        mov edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 0F 3A 61 C1 0D: pcmpestri xmm0, xmm1, 0xd
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x61
        __asm _emit 0xc1
        __asm _emit 0x0d
        ; Exact mapped bytes 0F 83 13 01 00 00: jae 0x58830178
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + ecx*2]
        ; Exact mapped bytes E9 0E 01 00 00: jmp 0x5883017b
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 10 0F: movups xmm1, xmmword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0f
        mov eax, esi
        sub eax, edx
        add eax, ecx
        mov dword ptr [ebp - 28h], eax
        lea eax, [edi + 10h]
        mov dword ptr [ebp - 2ch], eax
        nop
        ; Exact mapped bytes 0F 10 06: movups xmm0, xmmword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x06
        mov eax, 8
        mov edx, eax
        ; Exact mapped bytes 66 0F 3A 61 C8 0D: pcmpestri xmm1, xmm0, 0xd
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x61
        __asm _emit 0xc8
        __asm _emit 0x0d
        ; Exact mapped bytes 72 08: jb 0x5883009a
        __asm _emit 0x72
        __asm _emit 0x08
        add esi, 10h
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x58830122
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 19: je 0x588300b7
        __asm _emit 0x74
        __asm _emit 0x19
        lea esi, [esi + ecx*2]
        cmp esi, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F 87 CE 00 00 00: ja 0x58830178
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 10 06: movups xmm0, xmmword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x06
        ; Exact mapped bytes 0F 57 C1: xorps xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc1
        ; Exact mapped bytes 66 0F 38 17 C0: ptest xmm0, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x38
        __asm _emit 0x17
        __asm _emit 0xc0
        ; Exact mapped bytes 75 68: jne 0x5883011f
        __asm _emit 0x75
        __asm _emit 0x68
        mov edi, dword ptr [ebp - 24h]
        lea ecx, [esi + 10h]
        mov edx, dword ptr [ebp - 2ch]
        add edi, -10h
        sub edi, 4
        ; Exact mapped bytes 72 11: jb 0x588300d9
        __asm _emit 0x72
        __asm _emit 0x11
        mov eax, dword ptr [ecx]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 75 14: jne 0x588300e2
        __asm _emit 0x75
        __asm _emit 0x14
        add ecx, 4
        add edx, 4
        sub edi, 4
        ; Exact mapped bytes 73 EF: jae 0x588300c8
        __asm _emit 0x73
        __asm _emit 0xef
        cmp edi, -4
        ; Exact mapped bytes 0F 84 A6 FE FF FF: je 0x5882ff88
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [ecx]
        cmp al, byte ptr [edx]
        ; Exact mapped bytes 75 37: jne 0x5883011f
        __asm _emit 0x75
        __asm _emit 0x37
        cmp edi, -3
        ; Exact mapped bytes 0F 84 97 FE FF FF: je 0x5882ff88
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [ecx + 1]
        cmp al, byte ptr [edx + 1]
        ; Exact mapped bytes 75 26: jne 0x5883011f
        __asm _emit 0x75
        __asm _emit 0x26
        cmp edi, -2
        ; Exact mapped bytes 0F 84 86 FE FF FF: je 0x5882ff88
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [ecx + 2]
        cmp al, byte ptr [edx + 2]
        ; Exact mapped bytes 75 15: jne 0x5883011f
        __asm _emit 0x75
        __asm _emit 0x15
        cmp edi, -1
        ; Exact mapped bytes 0F 84 75 FE FF FF: je 0x5882ff88
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [ecx + 3]
        cmp al, byte ptr [edx + 3]
        ; Exact mapped bytes 0F 84 69 FE FF FF: je 0x5882ff88
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, 2
        cmp esi, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F 86 55 FF FF FF: jbe 0x58830080
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 4B: jmp 0x58830178
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov eax, esi
        sub eax, edx
        add eax, 2
        add eax, ecx
        mov dword ptr [ebp - 2ch], eax
        cmp esi, eax
        ; Exact mapped bytes 74 3B: je 0x58830178
        __asm _emit 0x74
        __asm _emit 0x3b
        movzx ecx, word ptr [edi]
        sub edi, esi
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes 66 39 0E: cmp word ptr [esi], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x0e
        ; Exact mapped bytes 75 24: jne 0x5883016e
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, 1
        lea ecx, [esi + 2]
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 66 3B 04 0F: cmp ax, word ptr [edi + ecx]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x04
        __asm _emit 0x0f
        ; Exact mapped bytes 75 0D: jne 0x58830168
        __asm _emit 0x75
        __asm _emit 0x0d
        inc edx
        add ecx, 2
        cmp edx, dword ptr [ebx + 14h]
        ; Exact mapped bytes 75 EE: jne 0x58830152
        __asm _emit 0x75
        __asm _emit 0xee
        mov eax, esi
        ; Exact mapped bytes EB 13: jmp 0x5883017b
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 24h]
        add esi, 2
        sub edi, 2
        cmp esi, eax
        ; Exact mapped bytes 75 CD: jne 0x58830145
        __asm _emit 0x75
        __asm _emit 0xcd
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 4]
        pop edi
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 C9 0E 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
