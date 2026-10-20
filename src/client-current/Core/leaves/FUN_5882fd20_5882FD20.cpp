// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882FD20 .. +0x226 bytes.
extern "C" __declspec(naked) void FUN_5882fd20_5882FD20() {
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
        mov ecx, dword ptr [ebx + 14h]
        mov edx, dword ptr [ebx + 0ch]
        mov dword ptr [ebp - 30h], edx
        push esi
        mov esi, dword ptr [ebx + 8]
        push edi
        mov edi, dword ptr [ebx + 10h]
        test ecx, ecx
        ; Exact mapped bytes 75 07: jne 0x5882fd5f
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, esi
        ; Exact mapped bytes E9 D2 01 00 00: jmp 0x5882ff31
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 75 10: jne 0x5882fd74
        __asm _emit 0x75
        __asm _emit 0x10
        movzx eax, byte ptr [edi]
        push eax
        push edx
        push esi
        ; Exact mapped bytes E8 81 FD FF FF: call 0x5882faf0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 BD 01 00 00: jmp 0x5882ff31
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub edx, esi
        cmp edx, ecx
        ; Exact mapped bytes 0F 82 B0 01 00 00: jb 0x5882ff2e
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xb0
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
        ; Exact mapped bytes 0F 84 5B 01 00 00: je 0x5882fee9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 10h
        ; Exact mapped bytes 0F 82 52 01 00 00: jb 0x5882fee9
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 10h
        ; Exact mapped bytes 0F 87 8A 00 00 00: ja 0x5882fe2a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 10h
        sub eax, ecx
        push ecx
        mov dword ptr [ebp - 28h], eax
        lea eax, [ebp - 20h]
        push edi
        push eax
        ; Exact mapped bytes E8 DB CA 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F 28 4D E0: movaps xmm1, xmmword ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x4d
        __asm _emit 0xe0
        add esp, 0ch
        mov edi, dword ptr [ebx + 14h]
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
        mov edx, 10h
        ; Exact mapped bytes 66 0F 3A 61 C8 0C: pcmpestri xmm1, xmm0, 0xc
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x61
        __asm _emit 0xc8
        __asm _emit 0x0c
        ; Exact mapped bytes 72 04: jb 0x5882fdd9
        __asm _emit 0x72
        __asm _emit 0x04
        add esi, edx
        ; Exact mapped bytes EB 0B: jmp 0x5882fde4
        __asm _emit 0xeb
        __asm _emit 0x0b
        add esi, ecx
        cmp ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F 8E 74 FF FF FF: jle 0x5882fd58
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 30h]
        lea eax, [ecx - 10h]
        cmp esi, eax
        ; Exact mapped bytes 76 D5: jbe 0x5882fdc3
        __asm _emit 0x76
        __asm _emit 0xd5
        mov eax, ecx
        sub eax, esi
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 0F 84 33 01 00 00: je 0x5882ff2e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 20h]
        push esi
        push eax
        ; Exact mapped bytes E8 8A CA 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xca
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
        mov edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 0F 3A 61 C1 0C: pcmpestri xmm0, xmm1, 0xc
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x61
        __asm _emit 0xc1
        __asm _emit 0x0c
        ; Exact mapped bytes 0F 83 0C 01 00 00: jae 0x5882ff2e
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + ecx]
        ; Exact mapped bytes E9 07 01 00 00: jmp 0x5882ff31
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 10 0F: movups xmm1, xmmword ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0f
        mov eax, esi
        sub eax, ecx
        add eax, edx
        mov dword ptr [ebp - 28h], eax
        lea eax, [edi + 10h]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        ; Exact mapped bytes 0F 10 06: movups xmm0, xmmword ptr [esi]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x06
        mov eax, 10h
        mov edx, eax
        ; Exact mapped bytes 66 0F 3A 61 C8 0C: pcmpestri xmm1, xmm0, 0xc
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0x61
        __asm _emit 0xc8
        __asm _emit 0x0c
        ; Exact mapped bytes 72 07: jb 0x5882fe59
        __asm _emit 0x72
        __asm _emit 0x07
        add esi, eax
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x5882fede
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 18: je 0x5882fe75
        __asm _emit 0x74
        __asm _emit 0x18
        add esi, ecx
        cmp esi, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F 87 C6 00 00 00: ja 0x5882ff2e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc6
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
        ; Exact mapped bytes 75 68: jne 0x5882fedd
        __asm _emit 0x75
        __asm _emit 0x68
        mov edi, dword ptr [ebx + 14h]
        lea ecx, [esi + 10h]
        mov edx, dword ptr [ebp - 2ch]
        add edi, -10h
        sub edi, 4
        ; Exact mapped bytes 72 11: jb 0x5882fe97
        __asm _emit 0x72
        __asm _emit 0x11
        mov eax, dword ptr [ecx]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 75 14: jne 0x5882fea0
        __asm _emit 0x75
        __asm _emit 0x14
        add ecx, 4
        add edx, 4
        sub edi, 4
        ; Exact mapped bytes 73 EF: jae 0x5882fe86
        __asm _emit 0x73
        __asm _emit 0xef
        cmp edi, -4
        ; Exact mapped bytes 0F 84 B8 FE FF FF: je 0x5882fd58
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [ecx]
        cmp al, byte ptr [edx]
        ; Exact mapped bytes 75 37: jne 0x5882fedd
        __asm _emit 0x75
        __asm _emit 0x37
        cmp edi, -3
        ; Exact mapped bytes 0F 84 A9 FE FF FF: je 0x5882fd58
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [ecx + 1]
        cmp al, byte ptr [edx + 1]
        ; Exact mapped bytes 75 26: jne 0x5882fedd
        __asm _emit 0x75
        __asm _emit 0x26
        cmp edi, -2
        ; Exact mapped bytes 0F 84 98 FE FF FF: je 0x5882fd58
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [ecx + 2]
        cmp al, byte ptr [edx + 2]
        ; Exact mapped bytes 75 15: jne 0x5882fedd
        __asm _emit 0x75
        __asm _emit 0x15
        cmp edi, -1
        ; Exact mapped bytes 0F 84 87 FE FF FF: je 0x5882fd58
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [ecx + 3]
        cmp al, byte ptr [edx + 3]
        ; Exact mapped bytes 0F 84 7B FE FF FF: je 0x5882fd58
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        inc esi
        cmp esi, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F 86 59 FF FF FF: jbe 0x5882fe40
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 45: jmp 0x5882ff2e
        __asm _emit 0xeb
        __asm _emit 0x45
        mov eax, esi
        sub eax, ecx
        inc eax
        add eax, edx
        mov dword ptr [ebp - 2ch], eax
        cmp esi, eax
        ; Exact mapped bytes 74 37: je 0x5882ff2e
        __asm _emit 0x74
        __asm _emit 0x37
        mov cl, byte ptr [edi]
        sub edi, esi
        mov byte ptr [ebp - 21h], cl
        ; Exact mapped bytes 66 90: nop
        __asm _emit 0x66
        __asm _emit 0x90
        cmp byte ptr [esi], cl
        ; Exact mapped bytes 75 24: jne 0x5882ff28
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, 1
        lea ecx, [esi + 1]
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        mov al, byte ptr [ecx]
        cmp al, byte ptr [edi + ecx]
        ; Exact mapped bytes 75 0B: jne 0x5882ff22
        __asm _emit 0x75
        __asm _emit 0x0b
        inc edx
        inc ecx
        cmp edx, dword ptr [ebx + 14h]
        ; Exact mapped bytes 75 F2: jne 0x5882ff10
        __asm _emit 0x75
        __asm _emit 0xf2
        mov eax, esi
        ; Exact mapped bytes EB 0F: jmp 0x5882ff31
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 2ch]
        mov cl, byte ptr [ebp - 21h]
        inc esi
        dec edi
        cmp esi, eax
        ; Exact mapped bytes 75 D2: jne 0x5882ff00
        __asm _emit 0x75
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 4]
        pop edi
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 13 11 00 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x11
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
