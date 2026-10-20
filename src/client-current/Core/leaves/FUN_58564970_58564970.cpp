// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58564970 .. +0x6B4 bytes.
extern "C" __declspec(naked) void FUN_58564970_58564970() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 164h], 0
        ; Exact mapped bytes 75 07: jne 0x5856498e
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 90 06 00 00: jmp 0x5856501e
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 1
        mov dword ptr [ebp - 28h], 1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 164h]
        ; Exact mapped bytes E8 56 00 F2 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 48h], edx
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 164h]
        mov dword ptr [ebp - 34h], edx
        lea eax, [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 170h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        mov edx, dword ptr [edx + ecx*4 + 4]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 FC F8 1F 00: call 0x587642e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 48h]
        sub ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 44h]
        sub eax, dword ptr [edx + 8]
        imul eax, eax, 75h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 3ch], eax
        mov edx, 900h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 3e4h]
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + 0a4h], 120h
        add edx, ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        mov eax, dword ptr [ebp - 40h]
        sub eax, dword ptr [edx + ecx*8]
        mov dword ptr [ebp - 40h], eax
        mov ecx, 900h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 3e4h]
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 0a4h], 120h
        add ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        mov edx, dword ptr [ebp - 3ch]
        add edx, dword ptr [ecx + eax*8 + 4]
        mov dword ptr [ebp - 3ch], edx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 40h]
        imul eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 3ch]
        imul ecx, dword ptr [ebp - 3ch]
        add eax, ecx
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 7C C5 2E 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xc5
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 E4 C7 2C 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xc7
        __asm _emit 0x2c
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 170h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 16ch]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + edx*4 + 0e14h]
        ; Exact mapped bytes 0F 86 14 01 00 00: jbe 0x58564be5
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 16ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 16ch]
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB 09: jmp 0x58564af4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 1c2h
        ; Exact mapped bytes 7D 6E: jge 0x58564b6b
        __asm _emit 0x7d
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 170h]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + eax*4 + 0e14h]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 76 08: jbe 0x58564b1d
        __asm _emit 0x76
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 4E: jmp 0x58564b6b
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 170h]
        mov edx, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 16ch]
        mov esi, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ecx + esi*4 + 0e14h]
        cmp ecx, dword ptr [eax + edx*4 + 0e14h]
        ; Exact mapped bytes 76 1E: jbe 0x58564b69
        __asm _emit 0x76
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 170h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + ecx*4 + 0e14h]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 06: jae 0x58564b69
        __asm _emit 0x73
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 80: jmp 0x58564aeb
        __asm _emit 0xeb
        __asm _emit 0x80
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 56: jne 0x58564bc7
        __asm _emit 0x75
        __asm _emit 0x56
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 50: je 0x58564bc7
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 1
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes EB 09: jmp 0x58564b8b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        sub edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 7C 2A: jl 0x58564bbb
        __asm _emit 0x7c
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp - 24h]
        cmp eax, 14h
        ; Exact mapped bytes 7E 1D: jle 0x58564bb9
        __asm _emit 0x7e
        __asm _emit 0x1d
        imul ecx, dword ptr [ebp - 24h], 1c24h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 170h]
        lea ecx, [eax + ecx + 0e14h]
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x58564bb9
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x58564bbb
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C7: jmp 0x58564b82
        __asm _emit 0xeb
        __asm _emit 0xc7
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 170h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, dword ptr [edx + eax*4 + 0e14h]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x58564c9f
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 170h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 16ch]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + edx*4 + 0e14h]
        ; Exact mapped bytes 0F 83 98 00 00 00: jae 0x58564c9f
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 16ch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 16ch]
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 09: jmp 0x58564c2a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        sub eax, 1
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 7C 56: jl 0x58564c86
        __asm _emit 0x7c
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 170h]
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [edx + eax*4 + 0e14h], 0
        ; Exact mapped bytes 74 20: je 0x58564c66
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 170h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + eax*4 + 0e14h]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 08: jae 0x58564c66
        __asm _emit 0x73
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 20: jmp 0x58564c86
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ecx + edx*4 + 0e14h]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 76 06: jbe 0x58564c84
        __asm _emit 0x76
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 9B: jmp 0x58564c21
        __asm _emit 0xeb
        __asm _emit 0x9b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 170h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 10h]
        sub edx, dword ptr [eax + ecx*4 + 0e14h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 75 1E: jne 0x58564cc5
        __asm _emit 0x75
        __asm _emit 0x1e
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 08: je 0x58564cb5
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 0B: jmp 0x58564cc0
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 33 16 00 00: call 0x585662f0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E9 08 01 00 00: jmp 0x58564dcd
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 170h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 170h]
        mov ecx, dword ptr [ebp - 18h]
        mov esi, dword ptr [ebp - 8]
        mov eax, dword ptr [eax + ecx*4 + 0e14h]
        sub eax, dword ptr [edx + esi*4 + 0e14h]
        ; Exact mapped bytes 74 3F: je 0x58564d2c
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 18h]
        sub eax, dword ptr [ebp - 8]
        imul eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 170h]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 170h]
        mov esi, dword ptr [ebp - 18h]
        mov edi, dword ptr [ebp - 8]
        mov esi, dword ptr [edx + esi*4 + 0e14h]
        sub esi, dword ptr [ecx + edi*4 + 0e14h]
        xor edx, edx
        div esi
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x58564dcd
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 170h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 16ch]
        cmp dword ptr [eax + edx*4 + 0e14h], 0
        ; Exact mapped bytes 74 2D: je 0x58564d75
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 16ch]
        imul eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 170h]
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [edx + 16ch]
        xor edx, edx
        div dword ptr [ecx + esi*4 + 0e14h]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 58: jmp 0x58564dcd
        __asm _emit 0xeb
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 16ch]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + eax*4 + 0e14h]
        ; Exact mapped bytes 76 0B: jbe 0x58564d9e
        __asm _emit 0x76
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        add eax, 0ah
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 2F: jmp 0x58564dcd
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 170h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + ecx*4 + 0e14h]
        ; Exact mapped bytes 73 0B: jae 0x58564dc7
        __asm _emit 0x73
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 0ah
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 06: jmp 0x58564dcd
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 26 02 00 00: mov cx, word ptr [eax + 0x226]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 7F: and cx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x7f
        movzx edx, cx
        imul eax, edx, 0ah
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 7C 52: jl 0x58564e3c
        __asm _emit 0x7c
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 26 02 00 00: mov dx, word ptr [ecx + 0x226]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 7F: and dx, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x7f
        movzx eax, dx
        imul ecx, eax, 0ah
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 170h]
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + ecx*4 + 0e14h], 0
        ; Exact mapped bytes 74 1F: je 0x58564e3a
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 170h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [eax + ecx*4 + 0e14h]
        ; Exact mapped bytes 76 07: jbe 0x58564e3a
        __asm _emit 0x76
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 0D: jmp 0x58564e49
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 07: jge 0x58564e49
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 15ch], 0
        ; Exact mapped bytes 74 1F: je 0x58564e74
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        imul eax, dword ptr [ecx + 15ch], 0ch
        xor edx, edx
        mov ecx, 0ah
        div ecx
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 07: jae 0x58564e74
        __asm _emit 0x73
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ecx + 4]
        push eax
        ; Exact mapped bytes E8 74 F0 F7 FF: call 0x584e3f00
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf0
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 10h
        imul ecx, eax, 0ah
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8F EC FF FF: call 0x58563b30
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 B9 F1 F7 FF: call 0x584e4060
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf1
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 5A C4 F2 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xc4
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        cmp eax, 2
        ; Exact mapped bytes 0F 8E 8D 00 00 00: jle 0x58564f4f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0cch]
        add edx, 2
        cmp dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 7E 19: jle 0x58564eec
        __asm _emit 0x7e
        __asm _emit 0x19
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F3 75 FB FF: call 0x5851c4d0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x75
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 110h], 1
        ; Exact mapped bytes EB 36: jmp 0x58564f22
        __asm _emit 0xeb
        __asm _emit 0x36
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 7D 19: jge 0x58564f0b
        __asm _emit 0x7d
        __asm _emit 0x19
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D4 75 FB FF: call 0x5851c4d0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x75
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 110h], 0
        ; Exact mapped bytes EB 17: jmp 0x58564f22
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BB 75 FB FF: call 0x5851c4d0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x75
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 110h], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7E 0D: jle 0x58564f35
        __asm _emit 0x7e
        __asm _emit 0x0d
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E B3 F3 FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xb3
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 11: jmp 0x58564f46
        __asm _emit 0xeb
        __asm _emit 0x11
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 0B: jge 0x58564f46
        __asm _emit 0x7d
        __asm _emit 0x0b
        push -1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7B B3 F3 FF: call 0x584a02c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xb3
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x58564f58
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 99 C3 F2 FF: call 0x584912f0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xc3
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 50 EC FF FF: call 0x58563bb0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, eax
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 9F C3 F2 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xc3
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        cmp eax, 2
        ; Exact mapped bytes 0F 8E 92 00 00 00: jle 0x5856500f
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0cch]
        cdq
        sub eax, edx
        sar eax, 1
        add eax, 3
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 7E 19: jle 0x58564fac
        __asm _emit 0x7e
        __asm _emit 0x19
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 21 00 00: call 0x585670f0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 114h], 1
        ; Exact mapped bytes EB 36: jmp 0x58564fe2
        __asm _emit 0xeb
        __asm _emit 0x36
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 7D 19: jge 0x58564fcb
        __asm _emit 0x7d
        __asm _emit 0x19
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 75 FB FF: call 0x5851c4d0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x75
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 110h], 0
        ; Exact mapped bytes EB 17: jmp 0x58564fe2
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B 21 00 00: call 0x585670f0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 114h], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7E 0D: jle 0x58564ff5
        __asm _emit 0x7e
        __asm _emit 0x0d
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9E B2 F3 FF: call 0x584a0290
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xb2
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 11: jmp 0x58565006
        __asm _emit 0xeb
        __asm _emit 0x11
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 0B: jge 0x58565006
        __asm _emit 0x7d
        __asm _emit 0x0b
        push -1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8B B2 F3 FF: call 0x584a0290
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb2
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x58565018
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 C2 F2 FF: call 0x584912d0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc2
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 30h]
        and eax, dword ptr [ebp - 28h]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
