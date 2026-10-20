// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876EB40 .. +0x7A3 bytes.
extern "C" __declspec(naked) void FUN_5876eb40_5876EB40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 6ch
        mov dword ptr [ebp - 8], ecx
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        cmp dword ptr [ebp + 8], 6
        ; Exact mapped bytes 74 0A: je 0x5876eb5f
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp dword ptr [ebp + 8], 7
        ; Exact mapped bytes 0F 85 A6 01 00 00: jne 0x5876ed05
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], 1
        cmp dword ptr [ebp + 8], 6
        ; Exact mapped bytes 75 09: jne 0x5876eb75
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 44h], 1
        ; Exact mapped bytes EB 0D: jmp 0x5876eb82
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp dword ptr [ebp + 8], 7
        ; Exact mapped bytes 75 07: jne 0x5876eb82
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0ffffffffh
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 5f16h]
        and edx, 30h
        cmp edx, 30h
        ; Exact mapped bytes 75 66: jne 0x5876ebfa
        __asm _emit 0x75
        __asm _emit 0x66
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x5876eba6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 30h]
        add eax, 1
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 30h]
        cmp edx, dword ptr [ecx + 1284h]
        ; Exact mapped bytes 7D 41: jge 0x5876ebf5
        __asm _emit 0x7d
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 30h]
        movzx ecx, byte ptr [eax + 1fch]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 2D: jne 0x5876ebf3
        __asm _emit 0x75
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 17ch], 0
        ; Exact mapped bytes 74 1D: je 0x5876ebf3
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 CE 16 D3 FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x16
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A8: jmp 0x5876eb9d
        __asm _emit 0xeb
        __asm _emit 0xa8
        ; Exact mapped bytes E9 F5 00 00 00: jmp 0x5876ecef
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 5f16h]
        and eax, 10h
        ; Exact mapped bytes 74 74: je 0x5876ec7d
        __asm _emit 0x74
        __asm _emit 0x74
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5876ec1b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + 1284h]
        ; Exact mapped bytes 7D 52: jge 0x5876ec7b
        __asm _emit 0x7d
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 10h]
        movzx edx, byte ptr [ecx + 21ch]
        test edx, edx
        ; Exact mapped bytes 75 3F: jne 0x5876ec79
        __asm _emit 0x75
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax + 1fch]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 2D: jne 0x5876ec79
        __asm _emit 0x75
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 17ch], 0
        ; Exact mapped bytes 74 1D: je 0x5876ec79
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 48 16 D3 FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x16
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 97: jmp 0x5876ec12
        __asm _emit 0xeb
        __asm _emit 0x97
        ; Exact mapped bytes EB 72: jmp 0x5876ecef
        __asm _emit 0xeb
        __asm _emit 0x72
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5876ec8f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 7D 52: jge 0x5876ecef
        __asm _emit 0x7d
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 14h]
        movzx eax, byte ptr [edx + 21ch]
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x5876eced
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 14h]
        movzx edx, byte ptr [ecx + 1fch]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 2D: jne 0x5876eced
        __asm _emit 0x75
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 17ch], 0
        ; Exact mapped bytes 74 1D: je 0x5876eced
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 17ch]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 D4 15 D3 FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x15
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 97: jmp 0x5876ec86
        __asm _emit 0xeb
        __asm _emit 0x97
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 5f08h]
        or ecx, 1
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E9 D4 05 00 00: jmp 0x5876f2d9
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 4
        ; Exact mapped bytes 74 0A: je 0x5876ed15
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp dword ptr [ebp + 8], 5
        ; Exact mapped bytes 0F 85 A6 01 00 00: jne 0x5876eebb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], 0ffffffffh
        cmp dword ptr [ebp + 8], 4
        ; Exact mapped bytes 75 09: jne 0x5876ed2b
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 48h], 1
        ; Exact mapped bytes EB 0D: jmp 0x5876ed38
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp dword ptr [ebp + 8], 5
        ; Exact mapped bytes 75 07: jne 0x5876ed38
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0ffffffffh
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 5f16h]
        and eax, 30h
        cmp eax, 30h
        ; Exact mapped bytes 75 66: jne 0x5876edb0
        __asm _emit 0x75
        __asm _emit 0x66
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 09: jmp 0x5876ed5c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 1
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 34h]
        cmp eax, dword ptr [edx + 1284h]
        ; Exact mapped bytes 7D 41: jge 0x5876edab
        __asm _emit 0x7d
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 34h]
        movzx edx, byte ptr [ecx + 1fch]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 2D: jne 0x5876eda9
        __asm _emit 0x75
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 17ch], 0
        ; Exact mapped bytes 74 1D: je 0x5876eda9
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 17ch]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 E8 14 D3 FF: call 0x584a0290
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A8: jmp 0x5876ed53
        __asm _emit 0xeb
        __asm _emit 0xa8
        ; Exact mapped bytes E9 F5 00 00 00: jmp 0x5876eea5
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 5f16h]
        and ecx, 10h
        ; Exact mapped bytes 74 74: je 0x5876ee33
        __asm _emit 0x74
        __asm _emit 0x74
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5876edd1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 7D 52: jge 0x5876ee31
        __asm _emit 0x7d
        __asm _emit 0x52
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 18h]
        movzx eax, byte ptr [edx + 21ch]
        test eax, eax
        ; Exact mapped bytes 75 3F: jne 0x5876ee2f
        __asm _emit 0x75
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 18h]
        movzx edx, byte ptr [ecx + 1fch]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 2D: jne 0x5876ee2f
        __asm _emit 0x75
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 17ch], 0
        ; Exact mapped bytes 74 1D: je 0x5876ee2f
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 17ch]
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 62 14 D3 FF: call 0x584a0290
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x14
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 97: jmp 0x5876edc8
        __asm _emit 0xeb
        __asm _emit 0x97
        ; Exact mapped bytes EB 72: jmp 0x5876eea5
        __asm _emit 0xeb
        __asm _emit 0x72
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5876ee45
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ecx + 1284h]
        ; Exact mapped bytes 7D 52: jge 0x5876eea5
        __asm _emit 0x7d
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 1ch]
        movzx ecx, byte ptr [eax + 21ch]
        test ecx, ecx
        ; Exact mapped bytes 74 3F: je 0x5876eea3
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 1ch]
        movzx eax, byte ptr [edx + 1fch]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 2D: jne 0x5876eea3
        __asm _emit 0x75
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 17ch], 0
        ; Exact mapped bytes 74 1D: je 0x5876eea3
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 17ch]
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 EE 13 D3 FF: call 0x584a0290
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x13
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 97: jmp 0x5876ee3c
        __asm _emit 0xeb
        __asm _emit 0x97
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 5f08h]
        or edx, 2
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes E9 1E 04 00 00: jmp 0x5876f2d9
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 14h
        ; Exact mapped bytes 0F 85 DC 01 00 00: jne 0x5876f0a1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 5f04h], 40000000h
        ; Exact mapped bytes 75 69: jne 0x5876ef3d
        __asm _emit 0x75
        __asm _emit 0x69
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x5876eee6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 1
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 38h]
        cmp eax, dword ptr [edx + 1284h]
        ; Exact mapped bytes 7D 37: jge 0x5876ef2b
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 38h]
        movzx edx, byte ptr [ecx + 1fch]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 23: jne 0x5876ef29
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 17ch], 0
        ; Exact mapped bytes 74 13: je 0x5876ef29
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 17ch]
        ; Exact mapped bytes E8 C8 23 D2 FF: call 0x584912f0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x23
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B2: jmp 0x5876eedd
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 5f04h], 0
        ; Exact mapped bytes E9 5F 01 00 00: jmp 0x5876f09c
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 5f04h], 0
        ; Exact mapped bytes 0F 85 4F 01 00 00: jne 0x5876f09c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 5f16h]
        and ecx, 30h
        cmp ecx, 30h
        ; Exact mapped bytes 75 5C: jne 0x5876efbb
        __asm _emit 0x75
        __asm _emit 0x5c
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5876ef71
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 3ch]
        add edx, 1
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 3ch]
        cmp ecx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 7D 37: jge 0x5876efb6
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 3ch]
        movzx eax, byte ptr [edx + 1fch]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 23: jne 0x5876efb4
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 17ch], 0
        ; Exact mapped bytes 74 13: je 0x5876efb4
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 17ch]
        ; Exact mapped bytes E8 3D 23 D2 FF: call 0x584912f0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x23
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B2: jmp 0x5876ef68
        __asm _emit 0xeb
        __asm _emit 0xb2
        ; Exact mapped bytes E9 E1 00 00 00: jmp 0x5876f09c
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 5f16h]
        and eax, 10h
        ; Exact mapped bytes 74 6A: je 0x5876f034
        __asm _emit 0x74
        __asm _emit 0x6a
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x5876efdc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [edx + 1284h]
        ; Exact mapped bytes 7D 48: jge 0x5876f032
        __asm _emit 0x7d
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 20h]
        movzx edx, byte ptr [ecx + 21ch]
        test edx, edx
        ; Exact mapped bytes 75 35: jne 0x5876f030
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 20h]
        movzx ecx, byte ptr [eax + 1fch]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 23: jne 0x5876f030
        __asm _emit 0x75
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 17ch], 0
        ; Exact mapped bytes 74 13: je 0x5876f030
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 17ch]
        ; Exact mapped bytes E8 C1 22 D2 FF: call 0x584912f0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x22
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A1: jmp 0x5876efd3
        __asm _emit 0xeb
        __asm _emit 0xa1
        ; Exact mapped bytes EB 68: jmp 0x5876f09c
        __asm _emit 0xeb
        __asm _emit 0x68
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x5876f046
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 24h]
        cmp edx, dword ptr [ecx + 1284h]
        ; Exact mapped bytes 7D 48: jge 0x5876f09c
        __asm _emit 0x7d
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 24h]
        movzx ecx, byte ptr [eax + 21ch]
        test ecx, ecx
        ; Exact mapped bytes 74 35: je 0x5876f09a
        __asm _emit 0x74
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 24h]
        movzx eax, byte ptr [edx + 1fch]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 23: jne 0x5876f09a
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 17ch], 0
        ; Exact mapped bytes 74 13: je 0x5876f09a
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 17ch]
        ; Exact mapped bytes E8 57 22 D2 FF: call 0x584912f0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x22
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A1: jmp 0x5876f03d
        __asm _emit 0xeb
        __asm _emit 0xa1
        ; Exact mapped bytes E9 38 02 00 00: jmp 0x5876f2d9
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 15h
        ; Exact mapped bytes 0F 85 54 01 00 00: jne 0x5876f1ff
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 5f16h]
        and eax, 30h
        cmp eax, 30h
        ; Exact mapped bytes 75 5C: jne 0x5876f119
        __asm _emit 0x75
        __asm _emit 0x5c
        mov dword ptr [ebp - 40h], 0
        ; Exact mapped bytes EB 09: jmp 0x5876f0cf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 1
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 40h]
        cmp eax, dword ptr [edx + 1284h]
        ; Exact mapped bytes 7D 37: jge 0x5876f114
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 40h]
        movzx edx, byte ptr [ecx + 1fch]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 23: jne 0x5876f112
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 17ch], 0
        ; Exact mapped bytes 74 13: je 0x5876f112
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 17ch]
        ; Exact mapped bytes E8 BF 21 D2 FF: call 0x584912d0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x21
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B2: jmp 0x5876f0c6
        __asm _emit 0xeb
        __asm _emit 0xb2
        ; Exact mapped bytes E9 E1 00 00 00: jmp 0x5876f1fa
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [ecx + 5f16h]
        and edx, 10h
        ; Exact mapped bytes 74 6A: je 0x5876f192
        __asm _emit 0x74
        __asm _emit 0x6a
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x5876f13a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 28h]
        add eax, 1
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 28h]
        cmp edx, dword ptr [ecx + 1284h]
        ; Exact mapped bytes 7D 48: jge 0x5876f190
        __asm _emit 0x7d
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 28h]
        movzx ecx, byte ptr [eax + 21ch]
        test ecx, ecx
        ; Exact mapped bytes 75 35: jne 0x5876f18e
        __asm _emit 0x75
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 28h]
        movzx eax, byte ptr [edx + 1fch]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 23: jne 0x5876f18e
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 17ch], 0
        ; Exact mapped bytes 74 13: je 0x5876f18e
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 17ch]
        ; Exact mapped bytes E8 43 21 D2 FF: call 0x584912d0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x21
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A1: jmp 0x5876f131
        __asm _emit 0xeb
        __asm _emit 0xa1
        ; Exact mapped bytes EB 68: jmp 0x5876f1fa
        __asm _emit 0xeb
        __asm _emit 0x68
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5876f1a4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 2ch]
        add edx, 1
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 2ch]
        cmp ecx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 7D 48: jge 0x5876f1fa
        __asm _emit 0x7d
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 2ch]
        movzx eax, byte ptr [edx + 21ch]
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x5876f1f8
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 2ch]
        movzx edx, byte ptr [ecx + 1fch]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 23: jne 0x5876f1f8
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 17ch], 0
        ; Exact mapped bytes 74 13: je 0x5876f1f8
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 17ch]
        ; Exact mapped bytes E8 D9 20 D2 FF: call 0x584912d0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x20
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A1: jmp 0x5876f19b
        __asm _emit 0xeb
        __asm _emit 0xa1
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x5876f2d9
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0ah
        ; Exact mapped bytes 74 0A: je 0x5876f20f
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp dword ptr [ebp + 8], 0bh
        ; Exact mapped bytes 0F 85 CA 00 00 00: jne 0x5876f2d9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], 1
        cmp dword ptr [ebp + 8], 0ah
        ; Exact mapped bytes 75 09: jne 0x5876f225
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4ch], 1
        ; Exact mapped bytes EB 0D: jmp 0x5876f232
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp dword ptr [ebp + 8], 0bh
        ; Exact mapped bytes 75 07: jne 0x5876f232
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0ffffffffh
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5876f244
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 1284h]
        ; Exact mapped bytes 7D 76: jge 0x5876f2c8
        __asm _emit 0x7d
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 0ch]
        movzx edx, byte ptr [ecx + 1fch]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 5F: jne 0x5876f2c3
        __asm _emit 0x75
        __asm _emit 0x5f
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 17ch], 0
        ; Exact mapped bytes 74 4F: je 0x5876f2c3
        __asm _emit 0x74
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 0ch]
        movzx eax, byte ptr [edx + 21ch]
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x5876f2a6
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 4ch]
        neg ecx
        push ecx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 1D 10 D3 FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x10
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1D: jmp 0x5876f2c3
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 17ch]
        mov dword ptr [ebp - 6ch], ecx
        mov edx, dword ptr [ebp - 4ch]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 FE 0F D3 FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x0f
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 73 FF FF FF: jmp 0x5876f23b
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 5f08h]
        or ecx, 1
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        movzx eax, word ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
