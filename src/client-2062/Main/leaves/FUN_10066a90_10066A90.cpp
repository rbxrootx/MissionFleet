// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10066A90 .. +0x2258 bytes.
extern "C" __declspec(naked) void FUN_10066a90_10066A90() {
    __asm {
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 1016f5a8h
        push eax
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 234h
        test eax, eax
        push ebx
        mov ebx, dword ptr [esp + 26ch]
        push ebp
        mov ebp, dword ptr [esp + 25ch]
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x10066bc2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 27ch]
        mov dword ptr [esp + 20h], 101ab150h
        cmp eax, 1
        ; Exact mapped bytes 74 08: je 0x10066ae8
        __asm _emit 0x74
        __asm _emit 0x08
        mov dword ptr [esp + 20h], 101ab148h
        mov eax, dword ptr [esp + 270h]
        mov dword ptr [esp + 24h], 101aa750h
        cmp eax, 0ch
        ; Exact mapped bytes 74 08: je 0x10066b04
        __asm _emit 0x74
        __asm _emit 0x08
        mov dword ptr [esp + 24h], 101aa6dch
        mov eax, dword ptr [esp + 254h]
        xor edx, edx
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [esp + 288h]
        ; Exact mapped bytes A1 64 45 1C 10: mov eax, dword ptr [0x101c4564]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        mov edi, dword ptr [esp + 288h]
        push edi
        mov edi, dword ptr [esp + 288h]
        push edi
        mov edi, dword ptr [esp + 280h]
        push ebx
        push edi
        mov edx, dword ptr [eax + edx*4]
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        mov edx, dword ptr [esp + 26ch]
        push edx
        mov edx, dword ptr [esp + 278h]
        push edx
        mov edx, dword ptr [esp + 278h]
        push edx
        mov edx, dword ptr [esp + 284h]
        add edx, 37ch
        mov ecx, dword ptr [eax + 10474h]
        push edx
        mov eax, dword ptr [eax + 1047ch]
        lea edx, [ebp + 37ch]
        push edx
        mov edx, dword ptr [esp + 4ch]
        push edx
        mov edx, dword ptr [esp + 54h]
        push edx
        push ecx
        push eax
        lea eax, [esp + 80h]
        push 101ab0cch
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 44h
        lea ecx, [esp + 10h]
        lea edx, [esp + 44h]
        push 0
        push ecx
        push edx
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F0 51 1C 10: mov ecx, dword ptr [0x101c51f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        lea eax, [esp + 50h]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 A4 50 17 10: call dword ptr [0x101750a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        cmp dword ptr [esp + 27ch], 1
        ; Exact mapped bytes 75 14: jne 0x10066be0
        __asm _emit 0x75
        __asm _emit 0x14
        mov edi, dword ptr [ebp + 0c0ch]
        mov eax, dword ptr [ebp + 0c14h]
        xor edi, 0aaaaaaaah
        ; Exact mapped bytes EB 12: jmp 0x10066bf2
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edi, dword ptr [ebp + 0c10h]
        mov eax, dword ptr [ebp + 0c18h]
        xor edi, 0aaaaaaaah
        xor eax, 0aaaaaaaah
        mov dword ptr [esp + 20h], eax
        mov eax, dword ptr [esp + 270h]
        cmp eax, 0ch
        ; Exact mapped bytes 74 38: je 0x10066c3f
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [esp + 254h]
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
        mov ebx, 3e8h
        lea ecx, [edi*4 + 28h]
        mov edx, dword ptr [eax + edx*4]
        mov eax, edx
        xor edx, edx
        div ebx
        cmp edx, ecx
        ; Exact mapped bytes 73 04: jae 0x10066c38
        __asm _emit 0x73
        __asm _emit 0x04
        xor ebx, ebx
        ; Exact mapped bytes EB 07: jmp 0x10066c3f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ebx, dword ptr [esp + 278h]
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x10066c86
        __asm _emit 0x74
        __asm _emit 0x3e
        mov edx, dword ptr [esp + 20h]
        lea eax, [esp + 44h]
        push edx
        push edi
        push 101ab0a0h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 10h
        lea ecx, [esp + 10h]
        lea edx, [esp + 44h]
        push 0
        push ecx
        push edx
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F0 51 1C 10: mov ecx, dword ptr [0x101c51f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        lea eax, [esp + 50h]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 A4 50 17 10: call dword ptr [0x101750a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esp + 270h]
        mov dword ptr [esp + 34h], 0
        cmp eax, 0ch
        ; Exact mapped bytes 75 0E: jne 0x10066ca8
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 0c1ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 CF 07 00 00: jne 0x10067477
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 280h]
        test eax, eax
        ; Exact mapped bytes 0F 8C B6 07 00 00: jl 0x1006746d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb6
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 74 3B: je 0x10066cf6
        __asm _emit 0x74
        __asm _emit 0x3b
        cmp edi, eax
        ; Exact mapped bytes 0F 8D AA 07 00 00: jge 0x1006746d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaa
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 254h]
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
        lea ecx, [edi + edi*2 + 1]
        mov edx, dword ptr [eax + edx*4]
        mov eax, edx
        xor edx, edx
        div ecx
        mov eax, edi
        imul eax, dword ptr [esp + 280h]
        cmp edx, eax
        ; Exact mapped bytes 0F 87 77 07 00 00: ja 0x1006746d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x77
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 25ch]
        mov edx, dword ptr [esp + 258h]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr [esp + 2ch], 0
        ; Exact mapped bytes E8 9B 9B 08 00: call 0x100f08b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x9b
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 280h]
        test edi, edi
        ; Exact mapped bytes 74 10: je 0x10066d30
        __asm _emit 0x74
        __asm _emit 0x10
        sub eax, edi
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        cdq
        idiv edi
        ; Exact mapped bytes EB 07: jmp 0x10066d37
        __asm _emit 0xeb
        __asm _emit 0x07
        neg eax
        sbb eax, eax
        and eax, 46h
        add eax, 14h
        cmp eax, 5ah
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 7E 08: jle 0x10066d4b
        __asm _emit 0x7e
        __asm _emit 0x08
        mov dword ptr [esp + 2ch], 5ah
        mov eax, dword ptr [ebp + 0e74h]
        mov eax, dword ptr [eax + 64h]
        lea eax, [eax + eax*2]
        lea ecx, [eax + eax*4]
        mov eax, 10624dd3h
        shl ecx, 4
        mul ecx
        mov eax, dword ptr [esp + 274h]
        shr edx, 8
        cmp eax, edx
        ; Exact mapped bytes 76 07: jbe 0x10066d79
        __asm _emit 0x76
        __asm _emit 0x07
        mov dword ptr [esp + 274h], edx
        mov ecx, dword ptr [ebp + 0c28h]
        mov eax, 97247453h
        xor ecx, 0aaaaaaaah
        mov edx, ecx
        imul edx, ebx
        imul edx
        sar edx, 0ch
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 66666667h
        add ebx, edx
        mov edx, dword ptr [esp + 274h]
        add edx, ebx
        mov dword ptr [esp + 278h], ebx
        mov dword ptr [esp + 18h], edx
        imul ecx
        sar edx, 2
        mov eax, edx
        mov ecx, 3e8h
        shr eax, 1fh
        add edx, eax
        mov eax, 68db8badh
        sub ecx, edx
        imul ecx, dword ptr [esp + 28ch]
        imul ecx
        sar edx, 0bh
        mov eax, dword ptr [esp + 254h]
        mov ecx, edx
        shr ecx, 1fh
        lea edi, [edx + ecx + 64h]
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
        mov ecx, 2710h
        mov ebx, dword ptr [eax + edx*4]
        xor edx, edx
        mov eax, ebx
        div ecx
        mov ecx, edx
        cmp ecx, edi
        ; Exact mapped bytes 0F 8D 15 06 00 00: jge 0x10067425
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 51eb851fh
        imul edi
        sar edx, 8
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7D 15: jge 0x10066e3a
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [esp + 18h]
        mov eax, 1400h
        shl edx, 6
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes E9 F5 00 00 00: jmp 0x10066f2f
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 51eb851fh
        imul edi
        sar edx, 7
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7D 15: jge 0x10066e64
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [esp + 18h]
        mov eax, 1000h
        shl edx, 5
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes E9 CB 00 00 00: jmp 0x10066f2f
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 51eb851fh
        imul edi
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7D 15: jge 0x10066e8e
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [esp + 18h]
        mov eax, 800h
        shl edx, 4
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x10066f2f
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 51eb851fh
        imul edi
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7D 16: jge 0x10066eb9
        __asm _emit 0x7d
        __asm _emit 0x16
        mov edx, dword ptr [esp + 18h]
        lea eax, [edx*8]
        mov dword ptr [esp + 18h], eax
        mov eax, 400h
        ; Exact mapped bytes EB 76: jmp 0x10066f2f
        __asm _emit 0xeb
        __asm _emit 0x76
        mov eax, 66666667h
        imul edi
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7D 16: jge 0x10066ee4
        __asm _emit 0x7d
        __asm _emit 0x16
        mov edx, dword ptr [esp + 18h]
        lea eax, [edx*4]
        mov dword ptr [esp + 18h], eax
        mov eax, 200h
        ; Exact mapped bytes EB 4B: jmp 0x10066f2f
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov eax, 66666667h
        imul edi
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7D 12: jge 0x10066f0b
        __asm _emit 0x7d
        __asm _emit 0x12
        mov edx, dword ptr [esp + 18h]
        lea eax, [edx + edx]
        mov dword ptr [esp + 18h], eax
        mov eax, 100h
        ; Exact mapped bytes EB 24: jmp 0x10066f2f
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [esp + 18h]
        lea eax, [eax + eax*2]
        lea edx, [eax + eax*4]
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 80h
        mov dword ptr [esp + 18h], edx
        mov edi, dword ptr [esp + 264h]
        lea eax, [eax + eax*4]
        mov dword ptr [esp + 34h], 1
        mov ebp, dword ptr [edi + 0c64h]
        lea eax, [eax + eax*4]
        shl eax, 2
        cdq
        add ebp, 64h
        idiv ebp
        xor edx, edx
        mov dword ptr [esp + 38h], eax
        mov eax, dword ptr [edi + 0e7ch]
        ; Exact mapped bytes 66 8B 50 0A: mov dx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0a
        mov eax, 2710h
        mov ebp, edx
        cdq
        add ebp, 64h
        idiv ebp
        lea edx, [eax + eax*4]
        mov eax, 51eb851fh
        lea edx, [edx + edx*4]
        shl edx, 1
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7D 1F: jge 0x10066fac
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov ecx, dword ptr [edi + 218h]
        mov eax, ebx
        xor edx, edx
        mov edi, 0fah
        div edi
        mov dword ptr [esp + 34h], 3
        push edx
        ; Exact mapped bytes E8 D4 BA FD FF: call 0x10042a80
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        test byte ptr [esi + 368h], 40h
        ; Exact mapped bytes 0F 84 6C 04 00 00: je 0x10067425
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 264h]
        mov ecx, dword ptr [esp + 254h]
        xor ebx, ebx
        xor edi, edi
        xor ebp, ebp
        add edx, 3f0h
        mov dword ptr [esp + 1ch], ebx
        mov dword ptr [esp + 28h], ecx
        mov dword ptr [esp + 20h], edx
        mov eax, dword ptr [esp + 20h]
        mov eax, dword ptr [eax]
        mov ecx, eax
        mov edx, eax
        xor ecx, 2a800h
        xor edx, 0aa00000h
        shr ecx, 0ah
        shr edx, 14h
        and ecx, 3ffh
        and edx, 3ffh
        xor eax, 0aah
        add ecx, edx
        and eax, 3ffh
        add ecx, eax
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x100670e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 254h]
        xor edx, edx
        add eax, ebx
        ; Exact mapped bytes 8B 0D 64 45 1C 10: mov ecx, dword ptr [0x101c4564]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [ecx + edx*4]
        mov dword ptr [esp + 10h], eax
        test byte ptr [eax], 3
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x100670e2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
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
        mov ebp, dword ptr [esp + 38h]
        lea ecx, [ebp + 64h]
        mov edx, dword ptr [eax + edx*4]
        mov eax, edx
        xor edx, edx
        div ecx
        mov eax, ebp
        mov ecx, edx
        sub eax, ecx
        add eax, 0c8h
        cdq
        sub eax, edx
        mov ebp, eax
        sar ebp, 1
        ; Exact mapped bytes 74 0E: je 0x10067089
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [edx]
        xor edx, edx
        div ebp
        mov ebp, edx
        ; Exact mapped bytes EB 02: jmp 0x1006708b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        mov dword ptr [esp + 30h], edx
        imul ebp
        sar edx, 5
        mov ecx, edx
        lea eax, [esp + 40h]
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [esp + 264h]
        mov dword ptr [esp + 40h], edx
        lea edx, [esp + 30h]
        push edx
        push eax
        push ebx
        ; Exact mapped bytes E8 54 99 08 00: call 0x100f0a20
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x99
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 1ch]
        mov ebp, eax
        mov eax, dword ptr [esp + 40h]
        add edx, ecx
        add edi, eax
        mov dword ptr [esp + 1ch], edx
        mov edx, dword ptr [esp + 20h]
        mov ecx, dword ptr [esp + 28h]
        inc ebx
        add edx, 1ch
        add ecx, 2
        cmp ebx, 20h
        mov dword ptr [esp + 20h], edx
        mov dword ptr [esp + 28h], ecx
        ; Exact mapped bytes 0F 8C DD FE FF FF: jl 0x10066fdf
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 1ch]
        lea edx, [edi + ebp]
        add edx, eax
        test edx, edx
        ; Exact mapped bytes 0F 8E 13 01 00 00: jle 0x10067226
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esp + 264h]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 0F 85 FD 00 00 00: jne 0x10067226
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ebp, ebp
        ; Exact mapped bytes 75 46: jne 0x10067173
        __asm _emit 0x75
        __asm _emit 0x46
        test edi, edi
        ; Exact mapped bytes 75 0B: jne 0x1006713c
        __asm _emit 0x75
        __asm _emit 0x0b
        push eax
        push 101ab080h
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x100671db
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x10067150
        __asm _emit 0x75
        __asm _emit 0x10
        push edi
        lea edx, [esp + 48h]
        push 101ab05ch
        push edx
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x100671e0
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 7E 7B: jle 0x100671cf
        __asm _emit 0x7e
        __asm _emit 0x7b
        test eax, eax
        ; Exact mapped bytes 7E 75: jle 0x100671cd
        __asm _emit 0x7e
        __asm _emit 0x75
        mov eax, dword ptr [esp + 1ch]
        push eax
        push edi
        push 101ab02ch
        lea ecx, [esp + 50h]
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 10h
        ; Exact mapped bytes EB 76: jmp 0x100671e9
        __asm _emit 0xeb
        __asm _emit 0x76
        ; Exact mapped bytes 7E 58: jle 0x100671cd
        __asm _emit 0x7e
        __asm _emit 0x58
        test edi, edi
        ; Exact mapped bytes 7E 33: jle 0x100671ac
        __asm _emit 0x7e
        __asm _emit 0x33
        test eax, eax
        ; Exact mapped bytes 7E 1C: jle 0x10067199
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov edx, dword ptr [esp + 1ch]
        lea eax, [esp + 44h]
        push edx
        push edi
        push ebp
        push 101aaff0h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 14h
        ; Exact mapped bytes EB 50: jmp 0x100671e9
        __asm _emit 0xeb
        __asm _emit 0x50
        test edi, edi
        ; Exact mapped bytes 7E 0F: jle 0x100671ac
        __asm _emit 0x7e
        __asm _emit 0x0f
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x100671aa
        __asm _emit 0x75
        __asm _emit 0x09
        push edi
        push ebp
        push 101aafc0h
        ; Exact mapped bytes EB B9: jmp 0x10067163
        __asm _emit 0xeb
        __asm _emit 0xb9
        test edi, edi
        ; Exact mapped bytes 75 3B: jne 0x100671e9
        __asm _emit 0x75
        __asm _emit 0x3b
        test eax, eax
        ; Exact mapped bytes 7E 21: jle 0x100671d3
        __asm _emit 0x7e
        __asm _emit 0x21
        mov edx, dword ptr [esp + 1ch]
        lea eax, [esp + 44h]
        push edx
        push ebp
        push 101aaf90h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 10h
        ; Exact mapped bytes EB 1C: jmp 0x100671e9
        __asm _emit 0xeb
        __asm _emit 0x1c
        test edi, edi
        ; Exact mapped bytes 75 18: jne 0x100671e9
        __asm _emit 0x75
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x100671e9
        __asm _emit 0x75
        __asm _emit 0x14
        push ebp
        push 101aaf70h
        lea ecx, [esp + 4ch]
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        ; Exact mapped bytes 8B 15 1C 57 1C 10: mov edx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edx + 2cch]
        test ecx, ecx
        ; Exact mapped bytes 74 2D: je 0x10067226
        __asm _emit 0x74
        __asm _emit 0x2d
        push 9fh
        push 0
        push 1017f088h
        ; Exact mapped bytes E8 26 1F FC FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x1f
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes A1 1C 57 1C 10: mov eax, dword ptr [0x101c571c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10101h
        lea edx, [esp + 48h]
        push 1
        mov ecx, dword ptr [eax + 2cch]
        push edx
        ; Exact mapped bytes E8 0A 1F FC FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x1f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [esp + 260h]
        mov edx, dword ptr [esp + 264h]
        mov cl, byte ptr [eax + 330h]
        mov al, byte ptr [edx + 330h]
        cmp cl, al
        ; Exact mapped bytes 0F 84 DD 01 00 00: je 0x10067425
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 278h]
        mov ebx, dword ptr [esp + 260h]
        push eax
        mov eax, dword ptr [esp + 3ch]
        cdq
        sub eax, edx
        mov ecx, ebx
        sar eax, 1
        push eax
        ; Exact mapped bytes E8 98 9B 08 00: call 0x100f0e00
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x9b
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x10067340
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 75 08: jne 0x1006727c
        __asm _emit 0x75
        __asm _emit 0x08
        test ebp, ebp
        ; Exact mapped bytes 0F 84 A9 01 00 00: je 0x10067425
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 21710h]
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x100672bd
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [esi + 21a4ch]
        mov eax, dword ptr [ecx + 78h]
        imul eax, ebp
        lea eax, [eax + eax*4]
        lea edx, [eax + eax*4]
        mov eax, 0d1b71759h
        shl edx, 4
        mul edx
        mov eax, dword ptr [ebx + 0ebch]
        shr edx, 0dh
        xor eax, 0aaaaaaaah
        add edx, eax
        lea eax, [edi + edi*4]
        lea ecx, [eax + eax*4]
        lea edx, [edx + ecx*4]
        ; Exact mapped bytes EB 18: jmp 0x100672d5
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebx + 0ebch]
        lea eax, [edi + ebp*4]
        xor ecx, 0aaaaaaaah
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea edx, [ecx + eax*4]
        xor edx, 0aaaaaaaah
        mov dword ptr [ebx + 0ebch], edx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ebx, dword ptr [eax + 4]
        ; Exact mapped bytes 0F 85 36 01 00 00: jne 0x10067425
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 2cch]
        test eax, eax
        ; Exact mapped bytes 0F 84 22 01 00 00: je 0x10067425
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [edi + ebp*4]
        lea eax, [edi + edi*4]
        lea edx, [eax + eax*4]
        lea eax, [esp + 44h]
        shl edx, 2
        push edx
        push 101aaf54h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 0ch
        lea edx, [esp + 44h]
        mov ecx, dword ptr [ecx + 2cch]
        push 10101h
        push 2
        push edx
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x10067420
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 75 08: jne 0x1006734c
        __asm _emit 0x75
        __asm _emit 0x08
        test ebp, ebp
        ; Exact mapped bytes 0F 84 D9 00 00 00: je 0x10067425
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 21710h]
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x1006738d
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [esi + 21a4ch]
        mov eax, dword ptr [eax + 78h]
        imul eax, ebp
        lea eax, [eax + eax*4]
        lea ecx, [eax + eax*4]
        mov eax, 0d1b71759h
        shl ecx, 4
        mul ecx
        mov eax, dword ptr [ebx + 0ebch]
        shr edx, 0dh
        xor eax, 0aaaaaaaah
        add edx, eax
        lea eax, [edi + edi*4]
        lea ecx, [eax + eax*4]
        lea edx, [edx + ecx*4]
        ; Exact mapped bytes EB 18: jmp 0x100673a5
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebx + 0ebch]
        lea eax, [edi + ebp*4]
        xor ecx, 0aaaaaaaah
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea edx, [ecx + eax*4]
        xor edx, 0aaaaaaaah
        mov dword ptr [ebx + 0ebch], edx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ebx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 6A: jne 0x10067425
        __asm _emit 0x75
        __asm _emit 0x6a
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 2cch]
        test eax, eax
        ; Exact mapped bytes 74 5A: je 0x10067425
        __asm _emit 0x74
        __asm _emit 0x5a
        lea edi, [edi + ebp*4]
        lea eax, [edi + edi*4]
        lea edx, [eax + eax*4]
        lea eax, [esp + 44h]
        shl edx, 2
        push edx
        push 101aaf54h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 0ch
        mov ecx, dword ptr [ecx + 2cch]
        push 9fh
        push 0
        push 1017f088h
        ; Exact mapped bytes E8 28 1D FC FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x1d
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 1C 57 1C 10: mov edx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10101h
        lea eax, [esp + 48h]
        push 1
        mov ecx, dword ptr [edx + 2cch]
        push eax
        ; Exact mapped bytes E8 0B 1D FC FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x1d
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 36 01 00 00: je 0x10067568
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        lea edx, [esp + 44h]
        push ecx
        push 101aaf38h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea eax, [esp + 10h]
        lea ecx, [esp + 44h]
        push 0
        push eax
        push ecx
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes A1 F0 51 1C 10: mov eax, dword ptr [0x101c51f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [esp + 50h]
        push edx
        push eax
        ; Exact mapped bytes E9 F5 00 00 00: jmp 0x10067562
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 270h], 0ch
        ; Exact mapped bytes 75 2A: jne 0x100674a1
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 0c1ch]
        cmp eax, ebx
        ; Exact mapped bytes 7C 02: jl 0x10067483
        __asm _emit 0x7c
        __asm _emit 0x02
        mov eax, ebx
        mov ecx, dword ptr [ebp + 0c20h]
        mov dword ptr [esp + 24h], eax
        cmp eax, ecx
        ; Exact mapped bytes 7C 06: jl 0x10067497
        __asm _emit 0x7c
        __asm _emit 0x06
        mov eax, ecx
        mov dword ptr [esp + 24h], eax
        sub ebx, eax
        mov ecx, ebx
        ; Exact mapped bytes 79 0E: jns 0x100674ab
        __asm _emit 0x79
        __asm _emit 0x0e
        xor ecx, ecx
        ; Exact mapped bytes EB 0A: jmp 0x100674ab
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [esp + 24h], 0
        mov ecx, ebx
        mov eax, 66666667h
        mov edi, dword ptr [ebp + 0c28h]
        imul dword ptr [esp + 20h]
        sar edx, 1
        mov eax, edx
        xor edi, 0aaaaaaaah
        shr eax, 1fh
        lea edx, [edx + eax + 32h]
        mov eax, 0ae147ae1h
        imul edx, ecx
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 68db8badh
        add ecx, edx
        mov edx, edi
        imul edx, ecx
        imul edx
        sar edx, 0ch
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        sub ecx, edx
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes 79 06: jns 0x10067505
        __asm _emit 0x79
        __asm _emit 0x06
        xor ecx, ecx
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 2ch], 14h
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x10067568
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, 66666667h
        mov ebp, dword ptr [ebp + 0c1ch]
        imul edi
        sar edx, 2
        mov eax, edx
        push ebp
        shr eax, 1fh
        add edx, eax
        push edx
        push ecx
        lea ecx, [esp + 50h]
        push 101aaf08h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 14h
        lea edx, [esp + 10h]
        lea eax, [esp + 44h]
        push 0
        push edx
        push eax
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 F0 51 1C 10: mov edx, dword ptr [0x101c51f0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [esp + 4ch]
        push eax
        push ecx
        push edx
        ; Exact mapped bytes FF 15 A4 50 17 10: call dword ptr [0x101750a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ebx, dword ptr [esp + 264h]
        mov edi, dword ptr [esp + 260h]
        mov eax, dword ptr [ebx + 5c54h]
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x100675a2
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [esi + 21a4ch]
        push edi
        push ebx
        ; Exact mapped bytes E8 B3 CA FB FF: call 0x10024040
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xca
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 10: je 0x100675a2
        __asm _emit 0x74
        __asm _emit 0x10
        mov ebp, dword ptr [esp + 18h]
        mov ecx, dword ptr [ebx + 7ch]
        push ebp
        push edi
        ; Exact mapped bytes E8 10 CA F9 FF: call 0x10003fb0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xca
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 04: jmp 0x100675a6
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 18h]
        ; Exact mapped bytes 66 8B 86 94 05 01 00: mov ax, word ptr [esi + 0x10594]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x100675b9
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 75 5E: jne 0x10067617
        __asm _emit 0x75
        __asm _emit 0x5e
        mov al, byte ptr [edi + 330h]
        mov cl, byte ptr [ebx + 330h]
        cmp al, cl
        ; Exact mapped bytes 74 4E: je 0x10067617
        __asm _emit 0x74
        __asm _emit 0x4e
        test byte ptr [esi + 10560h], 1
        ; Exact mapped bytes 74 2E: je 0x10067600
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [edi + 5c54h]
        test ecx, ecx
        ; Exact mapped bytes 74 24: je 0x10067600
        __asm _emit 0x74
        __asm _emit 0x24
        and eax, 0ffh
        lea ecx, [esi + eax*4 + 1090ch]
        mov eax, 66666667h
        imul ebp
        sar edx, 1
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [ecx]
        add eax, edx
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 17: jmp 0x10067617
        __asm _emit 0xeb
        __asm _emit 0x17
        and eax, 0ffh
        mov ecx, dword ptr [esi + eax*4 + 1090ch]
        lea eax, [esi + eax*4 + 1090ch]
        add ecx, ebp
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebx + 0c24h]
        mov eax, 10624dd3h
        xor ecx, 0aaaaaaaah
        imul ecx, ebp
        imul ecx
        sar edx, 6
        mov ecx, edx
        mov eax, 51eb851fh
        shr ecx, 1fh
        add edx, ecx
        mov ecx, ebp
        sub ecx, edx
        mov dword ptr [esp + 30h], ecx
        imul ecx, dword ptr [esp + 2ch]
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esp + 27ch]
        cmp eax, 2
        ; Exact mapped bytes 0F 85 65 01 00 00: jne 0x100677ca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esp + 34h]
        mov dword ptr [esp + 38h], edx
        test al, 1
        mov eax, dword ptr [esp + 294h]
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x10067746
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 E7 02 00 00: je 0x1006796b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 11ch
        ; Exact mapped bytes E8 12 51 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x51
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        test eax, eax
        mov dword ptr [esp + 24ch], 0
        ; Exact mapped bytes 74 5E: je 0x10067702
        __asm _emit 0x74
        __asm _emit 0x5e
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ebx + 8]
        mov edi, dword ptr [ebx + 4]
        cmp dword ptr [ecx + 160h], 31h
        ; Exact mapped bytes 7E 12: jle 0x100676cb
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebx, dword ptr [ecx + 190h]
        test ebx, ebx
        ; Exact mapped bytes 74 08: je 0x100676cb
        __asm _emit 0x74
        __asm _emit 0x08
        add ebx, 0c40h
        ; Exact mapped bytes EB 02: jmp 0x100676cd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 40h
        push eax
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cdq
        mov ecx, 32h
        idiv ecx
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 18h]
        sub edi, edx
        mov edx, dword ptr [esi + 104e0h]
        push edi
        push edx
        push ebx
        push 0ah
        push eax
        ; Exact mapped bytes E8 77 E6 FA FF: call 0x10015d70
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe6
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 264h]
        ; Exact mapped bytes EB 02: jmp 0x10067704
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 24ch], 0ffffffffh
        cmp dword ptr [ecx + 160h], 33h
        ; Exact mapped bytes 7E 1B: jle 0x10067739
        __asm _emit 0x7e
        __asm _emit 0x1b
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x10067739
        __asm _emit 0x74
        __asm _emit 0x11
        add ecx, 0cc0h
        mov dword ptr [eax + 0f8h], ecx
        ; Exact mapped bytes E9 32 02 00 00: jmp 0x1006796b
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov dword ptr [eax + 0f8h], ecx
        ; Exact mapped bytes E9 25 02 00 00: jmp 0x1006796b
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 1D 02 00 00: je 0x1006796b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 11ch
        ; Exact mapped bytes E8 48 50 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x50
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        test eax, eax
        mov dword ptr [esp + 24ch], 1
        ; Exact mapped bytes 0F 84 EE 01 00 00: je 0x10067960
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ebx + 8]
        mov edi, dword ptr [ebx + 4]
        cmp dword ptr [ecx + 160h], 0ceh
        ; Exact mapped bytes 7E 12: jle 0x1006779c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebx, dword ptr [ecx + 190h]
        test ebx, ebx
        ; Exact mapped bytes 74 08: je 0x1006779c
        __asm _emit 0x74
        __asm _emit 0x08
        add ebx, 3380h
        ; Exact mapped bytes EB 02: jmp 0x1006779e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 40h
        push eax
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cdq
        mov ecx, 32h
        idiv ecx
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 18h]
        sub edi, edx
        mov edx, dword ptr [esi + 104e0h]
        push edi
        push edx
        push ebx
        push 0ah
        push eax
        ; Exact mapped bytes E9 8A 01 00 00: jmp 0x10067954
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edx*8]
        sub eax, edx
        lea ecx, [eax + eax*4]
        mov eax, 51eb851fh
        shl ecx, 1
        mul ecx
        mov al, byte ptr [esp + 34h]
        shr edx, 5
        test al, 1
        mov eax, dword ptr [esp + 294h]
        mov dword ptr [esp + 38h], edx
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x100678d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 6A 01 00 00: je 0x1006796b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 11ch
        ; Exact mapped bytes E8 95 4F 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x4f
        __asm _emit 0x10
        __asm _emit 0x00
        mov ebp, eax
        add esp, 4
        mov dword ptr [esp + 10h], ebp
        test ebp, ebp
        mov dword ptr [esp + 24ch], 2
        ; Exact mapped bytes 74 5C: je 0x1006787f
        __asm _emit 0x74
        __asm _emit 0x5c
        mov ecx, dword ptr [esp + 264h]
        mov eax, dword ptr [ecx + 8]
        mov edi, dword ptr [ecx + 4]
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 32h
        ; Exact mapped bytes 7E 12: jle 0x10067851
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10067851
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebx, [ecx + 0c80h]
        ; Exact mapped bytes EB 02: jmp 0x10067853
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 40h
        push eax
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cdq
        mov ecx, 32h
        idiv ecx
        mov eax, dword ptr [esp + 38h]
        mov ecx, ebp
        sub edi, edx
        mov edx, dword ptr [esi + 104e0h]
        push edi
        push edx
        push ebx
        push 0ah
        push eax
        ; Exact mapped bytes E8 F3 E4 FA FF: call 0x10015d70
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xe4
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10067881
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 24ch], 0ffffffffh
        cmp dword ptr [ecx + 160h], 33h
        ; Exact mapped bytes 7E 26: jle 0x100678c1
        __asm _emit 0x7e
        __asm _emit 0x26
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 1C: je 0x100678c1
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ebp, dword ptr [esp + 18h]
        mov ebx, dword ptr [esp + 264h]
        add ecx, 0cc0h
        mov dword ptr [eax + 0f8h], ecx
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x1006796b
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 18h]
        mov ebx, dword ptr [esp + 264h]
        xor ecx, ecx
        mov dword ptr [eax + 0f8h], ecx
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x1006796b
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x1006796b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 11ch
        ; Exact mapped bytes E8 B5 4E 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x4e
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        test eax, eax
        mov dword ptr [esp + 24ch], 3
        ; Exact mapped bytes 74 5F: je 0x10067960
        __asm _emit 0x74
        __asm _emit 0x5f
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ebx + 8]
        mov edi, dword ptr [ebx + 4]
        cmp dword ptr [ecx + 160h], 0cch
        ; Exact mapped bytes 7E 12: jle 0x1006792b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ebx, dword ptr [ecx + 190h]
        test ebx, ebx
        ; Exact mapped bytes 74 08: je 0x1006792b
        __asm _emit 0x74
        __asm _emit 0x08
        add ebx, 3300h
        ; Exact mapped bytes EB 02: jmp 0x1006792d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 40h
        push eax
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cdq
        mov ecx, 32h
        idiv ecx
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 18h]
        sub edi, edx
        mov edx, dword ptr [esi + 104e0h]
        push edi
        push edx
        push ebx
        push 0ah
        push eax
        ; Exact mapped bytes E8 17 E4 FA FF: call 0x10015d70
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xe4
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 264h]
        mov dword ptr [esp + 24ch], 0ffffffffh
        mov edi, dword ptr [ebx + 374h]
        mov edx, dword ptr [esp + 30h]
        xor edi, 0aaaaaaaah
        xor ecx, ecx
        cmp edi, edx
        mov dword ptr [esp + 18h], 0
        setle cl
        mov dword ptr [esp + 28h], ecx
        mov ecx, ebx
        ; Exact mapped bytes E8 3B 6C 08 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x6c
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [esp + 27ch]
        mov ecx, dword ptr [esp + 38h]
        mov dword ptr [esp + 20h], eax
        mov eax, dword ptr [esp + 24h]
        push edx
        mov edx, dword ptr [esp + 34h]
        push eax
        push ecx
        push ebp
        push edx
        mov ecx, ebx
        ; Exact mapped bytes E8 18 58 08 00: call 0x100ed1d0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        cmp edi, eax
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 7F 04: jg 0x100679c4
        __asm _emit 0x7f
        __asm _emit 0x04
        mov dword ptr [esp + 1ch], edi
        mov edi, dword ptr [esp + 260h]
        xor ebp, ebp
        cmp edi, ebp
        ; Exact mapped bytes 0F 84 DA 11 00 00: je 0x10068baf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 5c50h], ebp
        ; Exact mapped bytes 0F 84 CE 11 00 00: je 0x10068baf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 20bc4h]
        test al, al
        ; Exact mapped bytes 75 2D: jne 0x10067a18
        __asm _emit 0x75
        __asm _emit 0x2d
        cmp dword ptr [esi + 21a34h], ebp
        ; Exact mapped bytes 75 25: jne 0x10067a18
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dl, byte ptr [ebx + 330h]
        mov ecx, dword ptr [eax + 4]
        mov al, byte ptr [ecx + 330h]
        cmp dl, al
        ; Exact mapped bytes 74 0D: je 0x10067a18
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp byte ptr [edi + 330h], al
        ; Exact mapped bytes 74 05: je 0x10067a18
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 B8 6B 08 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x6b
        __asm _emit 0x08
        __asm _emit 0x00
        mov cl, byte ptr [ebx + 330h]
        mov al, byte ptr [edi + 330h]
        cmp cl, al
        ; Exact mapped bytes 0F 84 43 0F 00 00: je 0x1006896f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 0e74h]
        mov dword ptr [esp + 14h], ebp
        mov edx, dword ptr [eax + 64h]
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes DF 6C 24 10: fild qword ptr [esp + 0x10]
        __asm _emit 0xdf
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DD 5C 24 10: fstp qword ptr [esp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 10h]
        push eax
        push ecx
        ; Exact mapped bytes E8 58 4D 10 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x4d
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes E8 4D 4D 10 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x4d
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 0e74h]
        mov dword ptr [esp + 34h], eax
        mov eax, dword ptr [edx + 64h]
        push eax
        ; Exact mapped bytes E8 64 A2 FB FF: call 0x10021cd0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov al, byte ptr [esi + 368h]
        add esp, 0ch
        test al, 80h
        ; Exact mapped bytes 0F 84 C5 02 00 00: je 0x10067d42
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 270h], 0bh
        ; Exact mapped bytes 75 44: jne 0x10067acb
        __asm _emit 0x75
        __asm _emit 0x44
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 288h]
        imul ecx, dword ptr [esp + 1ch]
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes DF 6C 24 10: fild qword ptr [esp + 0x10]
        __asm _emit 0xdf
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        add edx, 3e8h
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 8E C0 08 01 00: fmul dword ptr [esi + 0x108c0]
        __asm _emit 0xd8
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 74 24 10: fdiv dword ptr [esp + 0x10]
        __asm _emit 0xd8
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DC C0: fadd st(0), st(0)
        __asm _emit 0xdc
        __asm _emit 0xc0
        ; Exact mapped bytes EB 32: jmp 0x10067afd
        __asm _emit 0xeb
        __asm _emit 0x32
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [esp + 14h], ebp
        imul eax, dword ptr [esp + 1ch]
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes DF 6C 24 10: fild qword ptr [esp + 0x10]
        __asm _emit 0xdf
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 8E C0 08 01 00: fmul dword ptr [esi + 0x108c0]
        __asm _emit 0xd8
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes DB 84 24 88 02 00 00: fild dword ptr [esp + 0x288]
        __asm _emit 0xdb
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 74 24 10: fdiv dword ptr [esp + 0x10]
        __asm _emit 0xd8
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes E8 A4 4C 10 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0e74h]
        mov dl, byte ptr [ecx + 2]
        and dl, 1fh
        cmp dl, 1
        ; Exact mapped bytes 75 19: jne 0x10067b2c
        __asm _emit 0x75
        __asm _emit 0x19
        lea ecx, [eax + eax*2]
        mov eax, 66666667h
        shl ecx, 2
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, edx
        lea ecx, [eax*8]
        sub ecx, eax
        mov eax, 66666667h
        shl ecx, 1
        imul ecx
        mov al, byte ptr [esi + 10560h]
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, edx
        test al, 1
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x10067bed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 5c54h], ebp
        ; Exact mapped bytes 74 05: je 0x10067b69
        __asm _emit 0x74
        __asm _emit 0x05
        lea ecx, [ecx + ecx*4]
        ; Exact mapped bytes EB 50: jmp 0x10067bb9
        __asm _emit 0xeb
        __asm _emit 0x50
        cmp dword ptr [ebx + 5c54h], ebp
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x10067c15
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ea0h]
        cmp eax, 0fh
        ; Exact mapped bytes 7F 11: jg 0x10067b91
        __asm _emit 0x7f
        __asm _emit 0x11
        lea eax, [ecx*8]
        sub eax, ecx
        lea ecx, [eax + eax*4]
        shl ecx, 2
        ; Exact mapped bytes EB 49: jmp 0x10067bda
        __asm _emit 0xeb
        __asm _emit 0x49
        cmp eax, 19h
        ; Exact mapped bytes 7F 0B: jg 0x10067ba1
        __asm _emit 0x7f
        __asm _emit 0x0b
        lea eax, [ecx + ecx*2]
        lea ecx, [eax + eax*4]
        shl ecx, 3
        ; Exact mapped bytes EB 1B: jmp 0x10067bbc
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp eax, 23h
        ; Exact mapped bytes 7F 08: jg 0x10067bae
        __asm _emit 0x7f
        __asm _emit 0x08
        lea ecx, [ecx + ecx*4]
        shl ecx, 4
        ; Exact mapped bytes EB 2C: jmp 0x10067bda
        __asm _emit 0xeb
        __asm _emit 0x2c
        cmp eax, 2dh
        ; Exact mapped bytes 7F 1C: jg 0x10067bcf
        __asm _emit 0x7f
        __asm _emit 0x1c
        lea eax, [ecx + ecx*2]
        lea ecx, [eax + eax*4]
        shl ecx, 2
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        ; Exact mapped bytes EB 42: jmp 0x10067c11
        __asm _emit 0xeb
        __asm _emit 0x42
        cmp eax, 37h
        lea ecx, [ecx + ecx*4]
        ; Exact mapped bytes 7F E2: jg 0x10067bb9
        __asm _emit 0x7f
        __asm _emit 0xe2
        shl ecx, 3
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        ; Exact mapped bytes EB 24: jmp 0x10067c11
        __asm _emit 0xeb
        __asm _emit 0x24
        cmp dword ptr [ebx + 5c54h], ebp
        ; Exact mapped bytes 74 20: je 0x10067c15
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 21a4ch]
        mov edx, dword ptr [eax + 78h]
        mov eax, 0d1b71759h
        imul edx, ecx
        mul edx
        shr edx, 0dh
        mov dword ptr [esp + 18h], edx
        mov ebp, dword ptr [esp + 260h]
        xor eax, eax
        mov al, byte ptr [ebp + 330h]
        mov ebx, dword ptr [esi + eax*4 + 108cch]
        lea ecx, [esi + eax*4 + 108cch]
        ; Exact mapped bytes 66 8B 86 94 05 01 00: mov ax, word ptr [esi + 0x10594]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        xor ebx, 0aaaaaaaah
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x10067c5c
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x10067c5c
        __asm _emit 0x74
        __asm _emit 0x11
        mov edi, dword ptr [esp + 18h]
        lea eax, [edi + edi*4]
        lea edx, [eax + eax*4]
        mov eax, 38e38e39h
        ; Exact mapped bytes EB 0F: jmp 0x10067c6b
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edi, dword ptr [esp + 18h]
        mov eax, 66666667h
        lea edx, [edi + edi*4]
        lea edx, [edi + edx*2]
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        add ebx, edx
        ; Exact mapped bytes 66 83 BE 5E 05 01 00 02: cmp word ptr [esi + 0x1055e], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 75 02: jne 0x10067c85
        __asm _emit 0x75
        __asm _emit 0x02
        xor ebx, ebx
        mov edx, ebx
        xor edx, 0aaaaaaaah
        mov dword ptr [ecx], edx
        mov ecx, ebp
        ; Exact mapped bytes E8 3A 69 08 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 2D: jne 0x10067cca
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 66 8B 86 5E 05 01 00: mov ax, word ptr [esi + 0x1055e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x10067cb0
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 75 02: jne 0x10067cb2
        __asm _emit 0x75
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [ebp + 0eb0h]
        xor eax, 0aaaaaaaah
        add eax, edi
        xor eax, 0aaaaaaaah
        mov dword ptr [ebp + 0eb0h], eax
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [ecx + 0ch]
        test edi, edi
        ; Exact mapped bytes 74 72: je 0x10067d49
        __asm _emit 0x74
        __asm _emit 0x72
        mov dl, byte ptr [edi + 330h]
        mov al, byte ptr [ebp + 330h]
        cmp dl, al
        ; Exact mapped bytes 75 52: jne 0x10067d39
        __asm _emit 0x75
        __asm _emit 0x52
        mov ecx, edi
        ; Exact mapped bytes E8 D2 68 08 00: call 0x100ee5c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x10067d39
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, 51eb851fh
        mov ecx, dword ptr [edi + 0e74h]
        imul ebx
        mov ecx, dword ptr [ecx + 54h]
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        imul ecx, edx
        xor edx, edx
        mov dl, byte ptr [edi + 330h]
        mul dword ptr [esi + edx*4 + 108ech]
        mov eax, ecx
        mov ecx, edx
        shr ecx, 5
        xor edx, edx
        div ecx
        xor eax, 0aaaaaaaah
        mov dword ptr [edi + 0eb4h], eax
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        ; Exact mapped bytes 75 97: jne 0x10067cd7
        __asm _emit 0x75
        __asm _emit 0x97
        ; Exact mapped bytes EB 07: jmp 0x10067d49
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ebp, dword ptr [esp + 260h]
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ebp, dword ptr [eax + 4]
        ; Exact mapped bytes 0F 85 53 02 00 00: jne 0x10067faa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10a38h]
        mov ebx, dword ptr [esp + 1ch]
        mov edx, dword ptr [ecx + 64h]
        add edx, ebx
        push edx
        ; Exact mapped bytes E8 B4 79 09 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x79
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10a38h]
        mov ecx, dword ptr [eax + 64h]
        push ecx
        mov ecx, dword ptr [esi + 10a4ch]
        ; Exact mapped bytes E8 9F 79 09 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x79
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0eb0h]
        mov eax, 51eb851fh
        xor edx, 0aaaaaaaah
        mov ecx, dword ptr [esi + 10a3ch]
        mul edx
        shr edx, 5
        push edx
        ; Exact mapped bytes E8 7D 79 09 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x79
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10a3ch]
        mov ecx, dword ptr [eax + 64h]
        push ecx
        mov ecx, dword ptr [esi + 10a50h]
        ; Exact mapped bytes E8 68 79 09 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x79
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 1C 57 1C 10: mov edx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 2cch]
        test eax, eax
        ; Exact mapped bytes 0F 84 DE 01 00 00: je 0x10067faa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        test eax, eax
        ; Exact mapped bytes 0F 84 6E 01 00 00: je 0x10067f46
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C0 58 1C 10: mov eax, dword ptr [0x101c58c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, dword ptr [esp + 264h]
        mov edi, dword ptr [eax + 30h]
        mov eax, dword ptr [esp + 270h]
        cmp eax, 0ch
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x10067e8e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebx + 37ch]
        lea edx, [esp + 44h]
        push ecx
        push 101aaedch
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes A1 1C 57 1C 10: mov eax, dword ptr [0x101c571c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 0ch
        mov ecx, dword ptr [eax + 2cch]
        push 9fh
        push 0
        push 1017f088h
        ; Exact mapped bytes E8 03 13 FC FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x13
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 1C 57 1C 10: mov edx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10101h
        lea ecx, [esp + 48h]
        push 1
        push ecx
        mov ecx, dword ptr [edx + 2cch]
        ; Exact mapped bytes E8 E6 12 FC FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x12
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 5c54h]
        test eax, eax
        ; Exact mapped bytes 0F 85 52 01 00 00: jne 0x10067faa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 83ch]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [esi + 164h], ecx
        mov ecx, dword ptr [ebx + 0e74h]
        mov al, byte ptr [ecx + 2]
        mov ecx, dword ptr [ecx + 60h]
        and eax, 1fh
        and eax, 0ffffh
        lea edx, [eax - 1]
        cmp edx, 8
        ; Exact mapped bytes 0F 87 23 01 00 00: ja 0x10067faa
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 95 E8 8C 06 10: jmp dword ptr [edx*4 + 0x10068ce8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0x10
        lea edx, [ebx + 37ch]
        lea eax, [esp + 44h]
        push edx
        push 101aaeb8h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 0ch
        mov ecx, dword ptr [ecx + 2cch]
        push 9fh
        push 0
        push 1017f088h
        ; Exact mapped bytes E8 6B 12 FC FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x12
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes A1 1C 57 1C 10: mov eax, dword ptr [0x101c571c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10101h
        lea edx, [esp + 48h]
        push 1
        mov ecx, dword ptr [eax + 2cch]
        push edx
        ; Exact mapped bytes E8 4F 12 FC FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x12
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebx + 5c54h]
        test eax, eax
        ; Exact mapped bytes 0F 85 BB 00 00 00: jne 0x10067faa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 83ch]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [esi + 164h], edx
        mov ecx, dword ptr [ebx + 0e74h]
        mov al, byte ptr [ecx + 2]
        mov ecx, dword ptr [ecx + 60h]
        and eax, 1fh
        and eax, 0ffffh
        lea edx, [eax - 1]
        cmp edx, 8
        ; Exact mapped bytes 0F 87 8C 00 00 00: ja 0x10067faa
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 95 0C 8D 06 10: jmp dword ptr [edx*4 + 0x10068d0c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0x8d
        __asm _emit 0x06
        __asm _emit 0x10
        mov edi, dword ptr [esi + eax*8 + 114h]
        inc edi
        mov dword ptr [esi + eax*8 + 114h], edi
        mov edx, dword ptr [esi + eax*8 + 118h]
        add edx, ecx
        mov dword ptr [esi + eax*8 + 118h], edx
        ; Exact mapped bytes EB 64: jmp 0x10067faa
        __asm _emit 0xeb
        __asm _emit 0x64
        cmp dword ptr [esp + 270h], 0ch
        ; Exact mapped bytes 75 5A: jne 0x10067faa
        __asm _emit 0x75
        __asm _emit 0x5a
        mov eax, dword ptr [esp + 264h]
        lea ecx, [esp + 44h]
        add eax, 37ch
        push eax
        push 101aae94h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 1C 57 1C 10: mov edx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 0ch
        mov ecx, dword ptr [edx + 2cch]
        push 9fh
        push 0
        push 1017f088h
        ; Exact mapped bytes E8 A3 11 FC FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10101h
        lea eax, [esp + 48h]
        push 1
        mov ecx, dword ptr [ecx + 2cch]
        push eax
        ; Exact mapped bytes E8 86 11 FC FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 4]
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x10067fe6
        __asm _emit 0x74
        __asm _emit 0x2f
        mov cl, byte ptr [ebp + 330h]
        mov dl, byte ptr [eax + 330h]
        cmp cl, dl
        ; Exact mapped bytes 75 1F: jne 0x10067fe6
        __asm _emit 0x75
        __asm _emit 0x1f
        mov edx, dword ptr [eax + 0eb4h]
        mov eax, 51eb851fh
        xor edx, 0aaaaaaaah
        mul edx
        mov eax, dword ptr [esi + 10a48h]
        shr edx, 5
        mov dword ptr [eax + 64h], edx
        test byte ptr [esi + 368h], 40h
        ; Exact mapped bytes 0F 84 7C 09 00 00: je 0x1006896f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 270h]
        cmp eax, 0bh
        ; Exact mapped bytes 0F 85 9A 03 00 00: jne 0x1006839d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x10068043
        __asm _emit 0x74
        __asm _emit 0x38
        cmp dword ptr [esp + 20h], 40000000h
        ; Exact mapped bytes 75 2E: jne 0x10068043
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ebx, dword ptr [esp + 264h]
        mov edi, dword ptr [esp + 260h]
        mov ecx, dword ptr [ebx + 0c08h]
        mov eax, dword ptr [edi + 0ed4h]
        xor ecx, 0aaaaaaaah
        neg ecx
        shl ecx, 1
        add eax, ecx
        mov dword ptr [edi + 0ed4h], eax
        ; Exact mapped bytes EB 0E: jmp 0x10068051
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edi, dword ptr [esp + 260h]
        mov ebx, dword ptr [esp + 264h]
        mov eax, dword ptr [esp + 290h]
        cmp eax, 1c2h
        ; Exact mapped bytes 7D 16: jge 0x10068075
        __asm _emit 0x7d
        __asm _emit 0x16
        ; Exact mapped bytes DB 84 24 90 02 00 00: fild dword ptr [esp + 0x290]
        __asm _emit 0xdb
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 5C 24 10: fstp qword ptr [esp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 10h]
        push edx
        ; Exact mapped bytes EB 1C: jmp 0x10068091
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov ecx, 384h
        sub ecx, eax
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DD 5C 24 10: fstp qword ptr [esp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 10h]
        push edx
        push eax
        ; Exact mapped bytes E8 15 47 10 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x47
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D A8 5C 17 10: fmul qword ptr [0x10175ca8]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x5c
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 8
        ; Exact mapped bytes DC 05 20 58 17 10: fadd qword ptr [0x10175820]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E8 FB 46 10 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [esp + 24h], eax
        mov eax, dword ptr [ebx + 218h]
        mov eax, dword ptr [eax + 50h]
        xor eax, 0aaaaaaaah
        cdq
        xor eax, edx
        sub eax, edx
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DD 5C 24 10: fstp qword ptr [esp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 10h]
        push ecx
        push edx
        ; Exact mapped bytes E8 CF 46 10 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D 70 52 17 10: fmul qword ptr [0x10175270]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 8
        ; Exact mapped bytes DC 05 A0 5C 17 10: fadd qword ptr [0x10175ca0]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x5c
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DB 44 24 24: fild dword ptr [esp + 0x24]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes DD 5C 24 10: fstp qword ptr [esp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DC 4C 24 10: fmul qword ptr [esp + 0x10]
        __asm _emit 0xdc
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DC 35 30 58 17 10: fdiv qword ptr [0x10175830]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E8 A3 46 10 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 1ch]
        mov dword ptr [esp + 24h], eax
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [esp + 14h], 0
        imul eax, ebp
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes DF 6C 24 10: fild qword ptr [esp + 0x10]
        __asm _emit 0xdf
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 8E C4 08 01 00: fmul dword ptr [esi + 0x108c4]
        __asm _emit 0xd8
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes DB 44 24 24: fild dword ptr [esp + 0x24]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 4C 24 10: fmul dword ptr [esp + 0x10]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 35 1C 52 17 10: fdiv dword ptr [0x1017521c]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E8 5F 46 10 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0x00
        mov cl, byte ptr [esi + 10560h]
        cdq
        xor eax, edx
        sub eax, edx
        test cl, 1
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x100681eb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 5c54h]
        test ecx, ecx
        ; Exact mapped bytes 75 4F: jne 0x100681b4
        __asm _emit 0x75
        __asm _emit 0x4f
        mov ecx, dword ptr [ebx + 5c54h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x1006820d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ea0h]
        cmp ecx, 0fh
        ; Exact mapped bytes 7F 11: jg 0x1006818f
        __asm _emit 0x7f
        __asm _emit 0x11
        lea ecx, [eax*8]
        sub ecx, eax
        lea ecx, [ecx + ecx*4]
        shl ecx, 2
        ; Exact mapped bytes EB 49: jmp 0x100681d8
        __asm _emit 0xeb
        __asm _emit 0x49
        cmp ecx, 19h
        ; Exact mapped bytes 7F 0B: jg 0x1006819f
        __asm _emit 0x7f
        __asm _emit 0x0b
        lea eax, [eax + eax*2]
        lea ecx, [eax + eax*4]
        shl ecx, 3
        ; Exact mapped bytes EB 1B: jmp 0x100681ba
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp ecx, 23h
        ; Exact mapped bytes 7F 08: jg 0x100681ac
        __asm _emit 0x7f
        __asm _emit 0x08
        lea ecx, [eax + eax*4]
        shl ecx, 4
        ; Exact mapped bytes EB 2C: jmp 0x100681d8
        __asm _emit 0xeb
        __asm _emit 0x2c
        cmp ecx, 2dh
        ; Exact mapped bytes 7F 1C: jg 0x100681cd
        __asm _emit 0x7f
        __asm _emit 0x1c
        lea eax, [eax + eax*2]
        lea ecx, [eax + eax*4]
        shl ecx, 2
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        ; Exact mapped bytes EB 3E: jmp 0x1006820b
        __asm _emit 0xeb
        __asm _emit 0x3e
        cmp ecx, 37h
        lea ecx, [eax + eax*4]
        ; Exact mapped bytes 7F E2: jg 0x100681b7
        __asm _emit 0x7f
        __asm _emit 0xe2
        shl ecx, 3
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        ; Exact mapped bytes EB 20: jmp 0x1006820b
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebx + 5c54h]
        test ecx, ecx
        ; Exact mapped bytes 74 18: je 0x1006820d
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 21a4ch]
        mov edx, dword ptr [ecx + 78h]
        imul edx, eax
        mov eax, 0d1b71759h
        mul edx
        shr edx, 0dh
        mov eax, edx
        ; Exact mapped bytes 66 8B 8E 94 05 01 00: mov cx, word ptr [esi + 0x10594]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 04: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 FC 00 00 00: je 0x1006831a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 05: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 0F 84 F2 00 00 00: je 0x1006831a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0e74h]
        mov cl, byte ptr [ecx + 2]
        and ecx, 1fh
        cmp ecx, 8
        ; Exact mapped bytes 0F 87 38 01 00 00: ja 0x10068375
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 8D 30 8D 06 10: jmp dword ptr [ecx*4 + 0x10068d30]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x30
        __asm _emit 0x8d
        __asm _emit 0x06
        __asm _emit 0x10
        mov edx, eax
        shl edx, 4
        sub edx, eax
        mov eax, dword ptr [edi + 0ed0h]
        neg edx
        add eax, edx
        mov dword ptr [edi + 0ed0h], eax
        ; Exact mapped bytes E9 15 01 00 00: jmp 0x10068375
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax*4]
        sub ecx, eax
        mov eax, dword ptr [edi + 0ed0h]
        neg ecx
        shl ecx, 2
        add eax, ecx
        mov dword ptr [edi + 0ed0h], eax
        ; Exact mapped bytes E9 F4 00 00 00: jmp 0x10068375
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [eax + eax*2]
        shl edx, 2
        ; Exact mapped bytes EB C0: jmp 0x10068249
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov ecx, dword ptr [edi + 0ed0h]
        neg eax
        shl eax, 3
        add ecx, eax
        mov dword ptr [edi + 0ed0h], ecx
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x10068375
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax*8]
        sub ecx, eax
        mov eax, dword ptr [edi + 0ed0h]
        neg ecx
        add eax, ecx
        mov dword ptr [edi + 0ed0h], eax
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x10068375
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [eax*8]
        ; Exact mapped bytes EB 81: jmp 0x10068249
        __asm _emit 0xeb
        __asm _emit 0x81
        lea ecx, [eax*4]
        sub ecx, eax
        mov eax, dword ptr [edi + 0ed0h]
        neg ecx
        shl ecx, 1
        add eax, ecx
        mov dword ptr [edi + 0ed0h], eax
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x10068375
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [eax*4]
        sub edx, eax
        mov eax, dword ptr [edi + 0ed0h]
        neg edx
        shl edx, 1
        add eax, edx
        mov dword ptr [edi + 0ed0h], eax
        ; Exact mapped bytes EB 70: jmp 0x10068375
        __asm _emit 0xeb
        __asm _emit 0x70
        mov ecx, dword ptr [edi + 0ed0h]
        neg eax
        shl eax, 2
        add ecx, eax
        mov dword ptr [edi + 0ed0h], ecx
        ; Exact mapped bytes EB 5B: jmp 0x10068375
        __asm _emit 0xeb
        __asm _emit 0x5b
        xor ecx, ecx
        lea eax, [eax + eax*4]
        mov cl, byte ptr [edi + 330h]
        shl eax, 1
        mov edx, dword ptr [esi + ecx*4 + 1092ch]
        lea ecx, [esi + ecx*4 + 1092ch]
        xor edx, 0aaaaaaaah
        mov dword ptr [ecx], edx
        xor edx, edx
        mov dl, byte ptr [edi + 330h]
        lea ecx, [esi + edx*4 + 1092ch]
        mov edx, dword ptr [esi + edx*4 + 1092ch]
        add edx, eax
        mov dword ptr [ecx], edx
        xor ecx, ecx
        mov cl, byte ptr [edi + 330h]
        lea eax, [esi + ecx*4 + 1092ch]
        mov ecx, dword ptr [esi + ecx*4 + 1092ch]
        xor ecx, 0aaaaaaaah
        mov dword ptr [eax], ecx
        lea eax, [ebp + ebp*4]
        mov ecx, dword ptr [edi + 0ed8h]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv dword ptr [esp + 288h]
        add ecx, eax
        mov dword ptr [edi + 0ed8h], ecx
        ; Exact mapped bytes E9 A8 04 00 00: jmp 0x10068845
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0ch
        ; Exact mapped bytes 0F 85 C1 03 00 00: jne 0x10068767
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        test eax, eax
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x10068442
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 20h], 40000000h
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x10068442
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 21710h]
        mov edi, dword ptr [esp + 260h]
        test eax, eax
        mov edx, dword ptr [edi + 0c08h]
        ; Exact mapped bytes 74 40: je 0x10068417
        __asm _emit 0x74
        __asm _emit 0x40
        xor edx, 0aaaaaaaah
        mov eax, 0cccccccdh
        mul edx
        mov eax, dword ptr [esi + 21a4ch]
        mov ecx, dword ptr [edi + 0ebch]
        shr edx, 5
        imul edx, dword ptr [eax + 78h]
        mov eax, 0d1b71759h
        xor ecx, 0aaaaaaaah
        mul edx
        shr edx, 0dh
        add edx, ecx
        xor edx, 0aaaaaaaah
        mov dword ptr [edi + 0ebch], edx
        ; Exact mapped bytes EB 32: jmp 0x10068449
        __asm _emit 0xeb
        __asm _emit 0x32
        xor edx, 0aaaaaaaah
        mov eax, 0cccccccdh
        mul edx
        mov eax, dword ptr [edi + 0ebch]
        shr edx, 5
        xor eax, 0aaaaaaaah
        add edx, eax
        xor edx, 0aaaaaaaah
        mov dword ptr [edi + 0ebch], edx
        ; Exact mapped bytes EB 07: jmp 0x10068449
        __asm _emit 0xeb
        __asm _emit 0x07
        mov edi, dword ptr [esp + 260h]
        mov ebx, dword ptr [esp + 264h]
        mov ecx, dword ptr [ebx + 218h]
        mov edx, dword ptr [ecx + 50h]
        xor edx, 0aaaaaaaah
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DD 5C 24 10: fstp qword ptr [esp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 10h]
        push eax
        push ecx
        ; Exact mapped bytes E8 32 43 10 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x43
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes E8 27 43 10 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x43
        __asm _emit 0x10
        __asm _emit 0x00
        cdq
        xor eax, edx
        sub eax, edx
        lea edx, [eax*8 + 190h]
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DD 5C 24 40: fstp qword ptr [esp + 0x40]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x40
        ; Exact mapped bytes DB 84 24 98 02 00 00: fild dword ptr [esp + 0x298]
        __asm _emit 0xdb
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 5C 24 18: fstp qword ptr [esp + 0x18]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 18h]
        push eax
        push ecx
        ; Exact mapped bytes E8 FB 42 10 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x42
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D 98 5C 17 10: fmul qword ptr [0x10175c98]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x5c
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 10h
        ; Exact mapped bytes DC 05 A0 5C 17 10: fadd qword ptr [0x10175ca0]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x5c
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DC 4C 24 38: fmul qword ptr [esp + 0x38]
        __asm _emit 0xdc
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes DC 35 30 58 17 10: fdiv qword ptr [0x10175830]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E8 D7 42 10 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x42
        __asm _emit 0x10
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 1ch]
        mov dword ptr [esp + 38h], eax
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [esp + 14h], 0
        imul eax, ebp
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes DF 6C 24 10: fild qword ptr [esp + 0x10]
        __asm _emit 0xdf
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 8E C4 08 01 00: fmul dword ptr [esi + 0x108c4]
        __asm _emit 0xd8
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes DB 44 24 38: fild dword ptr [esp + 0x38]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 4C 24 10: fmul dword ptr [esp + 0x10]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 35 1C 52 17 10: fdiv dword ptr [0x1017521c]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DB 84 24 98 02 00 00: fild dword ptr [esp + 0x298]
        __asm _emit 0xdb
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 4C 24 10: fmul dword ptr [esp + 0x10]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 35 1C 52 17 10: fdiv dword ptr [0x1017521c]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E8 7E 42 10 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x42
        __asm _emit 0x10
        __asm _emit 0x00
        mov cl, byte ptr [esi + 10560h]
        cdq
        xor eax, edx
        sub eax, edx
        test cl, 1
        mov ecx, dword ptr [ebx + 5c54h]
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x100685c2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x100685de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ea0h]
        cmp ecx, 0fh
        ; Exact mapped bytes 7F 11: jg 0x10068566
        __asm _emit 0x7f
        __asm _emit 0x11
        lea ecx, [eax*8]
        sub ecx, eax
        lea ecx, [ecx + ecx*4]
        shl ecx, 2
        ; Exact mapped bytes EB 49: jmp 0x100685af
        __asm _emit 0xeb
        __asm _emit 0x49
        cmp ecx, 19h
        ; Exact mapped bytes 7F 0B: jg 0x10068576
        __asm _emit 0x7f
        __asm _emit 0x0b
        lea eax, [eax + eax*2]
        lea ecx, [eax + eax*4]
        shl ecx, 3
        ; Exact mapped bytes EB 1B: jmp 0x10068591
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp ecx, 23h
        ; Exact mapped bytes 7F 08: jg 0x10068583
        __asm _emit 0x7f
        __asm _emit 0x08
        lea ecx, [eax + eax*4]
        shl ecx, 4
        ; Exact mapped bytes EB 2C: jmp 0x100685af
        __asm _emit 0xeb
        __asm _emit 0x2c
        cmp ecx, 2dh
        ; Exact mapped bytes 7F 1C: jg 0x100685a4
        __asm _emit 0x7f
        __asm _emit 0x1c
        lea eax, [eax + eax*2]
        lea ecx, [eax + eax*4]
        shl ecx, 2
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        ; Exact mapped bytes EB 38: jmp 0x100685dc
        __asm _emit 0xeb
        __asm _emit 0x38
        cmp ecx, 37h
        lea ecx, [eax + eax*4]
        ; Exact mapped bytes 7F E2: jg 0x1006858e
        __asm _emit 0x7f
        __asm _emit 0xe2
        shl ecx, 3
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        ; Exact mapped bytes EB 1A: jmp 0x100685dc
        __asm _emit 0xeb
        __asm _emit 0x1a
        test ecx, ecx
        ; Exact mapped bytes 74 18: je 0x100685de
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [esi + 21a4ch]
        mov ecx, dword ptr [edx + 78h]
        imul ecx, eax
        mov eax, 0d1b71759h
        mul ecx
        shr edx, 0dh
        mov eax, edx
        ; Exact mapped bytes 66 8B 8E 94 05 01 00: mov cx, word ptr [esi + 0x10594]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 04: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 0F 84 F5 00 00 00: je 0x100686e4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 05: cmp cx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x05
        ; Exact mapped bytes 0F 84 EB 00 00 00: je 0x100686e4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 0e74h]
        mov cl, byte ptr [edx + 2]
        and ecx, 1fh
        cmp ecx, 8
        ; Exact mapped bytes 0F 87 31 01 00 00: ja 0x1006873f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 8D 54 8D 06 10: jmp dword ptr [ecx*4 + 0x10068d54]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x8d
        __asm _emit 0x06
        __asm _emit 0x10
        mov ecx, eax
        neg ecx
        shl ecx, 2
        sub ecx, eax
        mov eax, dword ptr [edi + 0ed0h]
        shl ecx, 1
        add eax, ecx
        mov dword ptr [edi + 0ed0h], eax
        ; Exact mapped bytes E9 0C 01 00 00: jmp 0x1006873f
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, eax
        neg edx
        shl edx, 2
        sub edx, eax
        mov eax, dword ptr [edi + 0ed0h]
        shl edx, 1
        add eax, edx
        mov dword ptr [edi + 0ed0h], eax
        ; Exact mapped bytes E9 EE 00 00 00: jmp 0x1006873f
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax*4]
        sub ecx, eax
        mov eax, dword ptr [edi + 0ed0h]
        neg ecx
        shl ecx, 2
        add eax, ecx
        mov dword ptr [edi + 0ed0h], eax
        ; Exact mapped bytes E9 CD 00 00 00: jmp 0x1006873f
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [eax*8]
        sub edx, eax
        mov eax, dword ptr [edi + 0ed0h]
        neg edx
        add eax, edx
        mov dword ptr [edi + 0ed0h], eax
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x1006873f
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [eax*4]
        sub ecx, eax
        mov eax, dword ptr [edi + 0ed0h]
        neg ecx
        add eax, ecx
        mov dword ptr [edi + 0ed0h], eax
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x1006873f
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [eax*4]
        ; Exact mapped bytes EB C2: jmp 0x10068679
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov ecx, dword ptr [edi + 0ed0h]
        neg eax
        shl eax, 1
        add ecx, eax
        mov dword ptr [edi + 0ed0h], ecx
        ; Exact mapped bytes EB 74: jmp 0x1006873f
        __asm _emit 0xeb
        __asm _emit 0x74
        mov ecx, eax
        neg ecx
        shl ecx, 2
        sub ecx, eax
        mov eax, dword ptr [edi + 0ed0h]
        add eax, ecx
        mov dword ptr [edi + 0ed0h], eax
        ; Exact mapped bytes EB 5B: jmp 0x1006873f
        __asm _emit 0xeb
        __asm _emit 0x5b
        xor edx, edx
        mov dl, byte ptr [edi + 330h]
        lea ecx, [esi + edx*4 + 1092ch]
        mov edx, dword ptr [esi + edx*4 + 1092ch]
        xor edx, 0aaaaaaaah
        mov dword ptr [ecx], edx
        xor ecx, ecx
        mov cl, byte ptr [edi + 330h]
        lea edx, [eax + eax*4]
        shl edx, 1
        mov ebx, dword ptr [esi + ecx*4 + 1092ch]
        lea ecx, [esi + ecx*4 + 1092ch]
        add ebx, edx
        xor eax, eax
        mov dword ptr [ecx], ebx
        mov al, byte ptr [edi + 330h]
        mov ecx, dword ptr [esi + eax*4 + 1092ch]
        lea eax, [esi + eax*4 + 1092ch]
        xor ecx, 0aaaaaaaah
        mov dword ptr [eax], ecx
        lea eax, [ebp + ebp*4]
        mov ecx, dword ptr [edi + 0edch]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv dword ptr [esp + 288h]
        add ecx, eax
        mov dword ptr [edi + 0edch], ecx
        ; Exact mapped bytes E9 DE 00 00 00: jmp 0x10068845
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 0dh
        ; Exact mapped bytes 0F 85 D5 00 00 00: jne 0x10068845
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 264h]
        mov ecx, dword ptr [ecx + 218h]
        ; Exact mapped bytes E8 FE A4 FD FF: call 0x10042c80
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DD 5C 24 10: fstp qword ptr [esp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 10h]
        push edx
        push eax
        ; Exact mapped bytes E8 0F 40 10 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 01 40 10 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0x00
        cdq
        xor eax, edx
        mov edi, dword ptr [esp + 1ch]
        sub eax, edx
        mov dword ptr [esp + 14h], 0
        lea ecx, [eax + eax*2]
        mov eax, 10624dd3h
        lea ecx, [ecx*4 + 1f4h]
        imul ecx, dword ptr [esp + 290h]
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esp + 2ch]
        imul eax, edi
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 38h], edx
        ; Exact mapped bytes DF 6C 24 10: fild qword ptr [esp + 0x10]
        __asm _emit 0xdf
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 8E C4 08 01 00: fmul dword ptr [esi + 0x108c4]
        __asm _emit 0xd8
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes DB 44 24 38: fild dword ptr [esp + 0x38]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 4C 24 10: fmul dword ptr [esp + 0x10]
        __asm _emit 0xd8
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 35 90 5C 17 10: fdiv dword ptr [0x10175c90]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x5c
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E8 95 3F 10 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x3f
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 260h]
        cdq
        mov ebx, dword ptr [ecx + 0ed0h]
        xor eax, edx
        sub eax, edx
        sub ebx, eax
        lea eax, [edi + edi*4]
        mov dword ptr [ecx + 0ed0h], ebx
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv dword ptr [esp + 288h]
        add dword ptr [ecx + 0ee0h], eax
        mov eax, dword ptr [esp + 28h]
        test eax, eax
        ; Exact mapped bytes 0F 84 1E 01 00 00: je 0x1006896f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 20h], 40000000h
        ; Exact mapped bytes 0F 85 10 01 00 00: jne 0x1006896f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 270h]
        cmp ebp, 0bh
        ; Exact mapped bytes 75 4B: jne 0x100688b6
        __asm _emit 0x75
        __asm _emit 0x4b
        mov edi, dword ptr [esp + 264h]
        mov ebx, dword ptr [esp + 260h]
        mov eax, 0cccccccdh
        xor ecx, ecx
        mov edx, dword ptr [edi + 0c08h]
        mov cl, byte ptr [ebx + 330h]
        xor edx, 0aaaaaaaah
        mul edx
        mov eax, dword ptr [esi + ecx*4 + 1092ch]
        lea ecx, [esi + ecx*4 + 1092ch]
        shr edx, 2
        xor eax, 0aaaaaaaah
        add edx, eax
        xor edx, 0aaaaaaaah
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 3D: jmp 0x100688f3
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov ebx, dword ptr [esp + 260h]
        mov edi, dword ptr [esp + 264h]
        xor ecx, ecx
        mov cl, byte ptr [ebx + 330h]
        mov edx, dword ptr [edi + 0c08h]
        xor edx, 0aaaaaaabh
        lea eax, [esi + ecx*4 + 1092ch]
        shr edx, 1
        mov ecx, dword ptr [eax]
        xor ecx, 0aaaaaaaah
        add edx, ecx
        xor edx, 0aaaaaaaah
        mov dword ptr [eax], edx
        xor edx, edx
        mov eax, 0cccccccdh
        mov dl, byte ptr [edi + 330h]
        lea ecx, [esi + edx*4 + 1092ch]
        mov edx, dword ptr [edi + 0c08h]
        xor edx, 0aaaaaaaah
        mul edx
        mov eax, dword ptr [ecx]
        shr edx, 3
        xor eax, 0aaaaaaaah
        sub eax, edx
        xor eax, 0aaaaaaaah
        cmp ebp, 0ch
        mov dword ptr [ecx], eax
        ; Exact mapped bytes 75 42: jne 0x1006896f
        __asm _emit 0x75
        __asm _emit 0x42
        mov edx, dword ptr [edi + 0c08h]
        mov eax, 51eb851fh
        xor edx, 0aaaaaaaah
        xor ecx, ecx
        mov cl, byte ptr [edi + 330h]
        mul edx
        mov ecx, dword ptr [esi + ecx*4 + 1094ch]
        xor ecx, 0aaaaaaaah
        shr edx, 5
        add ecx, edx
        xor ecx, 0aaaaaaaah
        xor eax, eax
        mov al, byte ptr [ebx + 330h]
        mov dword ptr [esi + eax*4 + 1094ch], ecx
        test byte ptr [esi + 368h], 10h
        ; Exact mapped bytes 0F 84 17 01 00 00: je 0x10068a93
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        test eax, eax
        ; Exact mapped bytes 0F 84 0B 01 00 00: je 0x10068a93
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 20h], 40000000h
        ; Exact mapped bytes 0F 85 FD 00 00 00: jne 0x10068a93
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 260h]
        mov ebx, dword ptr [esp + 264h]
        mov al, byte ptr [ebp + 330h]
        mov ecx, eax
        and ecx, 0ffh
        mov edi, dword ptr [esi + ecx*4 + 10894h]
        mov cl, byte ptr [ebx + 330h]
        xor edi, 0aaaaaaaah
        cmp cl, al
        ; Exact mapped bytes 74 0B: je 0x100689d4
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebx + 0e74h]
        add edi, dword ptr [edx + 4ch]
        ; Exact mapped bytes EB 19: jmp 0x100689ed
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebx + 0e74h]
        mov ecx, dword ptr [esi + 108b8h]
        mov eax, dword ptr [eax + 4ch]
        sub edi, eax
        sub ecx, eax
        mov dword ptr [esi + 108b8h], ecx
        test edi, edi
        ; Exact mapped bytes 7D 02: jge 0x100689f3
        __asm _emit 0x7d
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov al, byte ptr [ebp + 330h]
        mov edx, dword ptr [ecx + 4]
        cmp al, byte ptr [edx + 330h]
        ; Exact mapped bytes 75 72: jne 0x10068a7c
        __asm _emit 0x75
        __asm _emit 0x72
        mov ecx, dword ptr [esi + 10a44h]
        mov eax, edi
        cdq
        xor eax, edx
        sub eax, edx
        mov dword ptr [ecx + 64h], eax
        mov edx, dword ptr [esi + 10a58h]
        mov dword ptr [edx + 64h], eax
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes A1 F4 58 1C 10: mov eax, dword ptr [0x101c58f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ebp, ecx
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes 75 25: jne 0x10068a5f
        __asm _emit 0x75
        __asm _emit 0x25
        cmp ecx, 0ah
        ; Exact mapped bytes 7E 16: jle 0x10068a55
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x10068a55
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [eax + 28h]
        push 0
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes EB 27: jmp 0x10068a7c
        __asm _emit 0xeb
        __asm _emit 0x27
        xor ecx, ecx
        push ecx
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes EB 1D: jmp 0x10068a7c
        __asm _emit 0xeb
        __asm _emit 0x1d
        cmp ecx, 9
        ; Exact mapped bytes 7E 0F: jle 0x10068a73
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x10068a73
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [eax + 24h]
        ; Exact mapped bytes EB 02: jmp 0x10068a75
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        xor edi, 0aaaaaaaah
        xor ecx, ecx
        mov cl, byte ptr [ebp + 330h]
        mov dword ptr [esi + ecx*4 + 10894h], edi
        ; Exact mapped bytes EB 0E: jmp 0x10068aa1
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ebp, dword ptr [esp + 260h]
        mov ebx, dword ptr [esp + 264h]
        ; Exact mapped bytes 8B 15 1C 57 1C 10: mov edx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 2cch]
        test eax, eax
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x10068b8f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        test eax, eax
        ; Exact mapped bytes 0F 84 CE 00 00 00: je 0x10068b8f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 5c9ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x10068b8f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dl, byte ptr [ebx + 330h]
        mov ecx, dword ptr [eax + 4]
        cmp dl, byte ptr [ecx + 330h]
        ; Exact mapped bytes 75 51: jne 0x10068b36
        __asm _emit 0x75
        __asm _emit 0x51
        lea eax, [ebx + 37ch]
        lea ecx, [esp + 44h]
        push eax
        push 101aae74h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 1C 57 1C 10: mov edx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 0ch
        mov ecx, dword ptr [edx + 2cch]
        push 9fh
        push 0
        push 1017f088h
        ; Exact mapped bytes E8 14 06 FC FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10101h
        lea eax, [esp + 48h]
        push 1
        mov ecx, dword ptr [ecx + 2cch]
        push eax
        ; Exact mapped bytes EB 54: jmp 0x10068b8a
        __asm _emit 0xeb
        __asm _emit 0x54
        lea edx, [ebx + 37ch]
        lea eax, [esp + 144h]
        push edx
        push 101aae54h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 0ch
        mov ecx, dword ptr [ecx + 2cch]
        push 9fh
        push 0
        push 1017f088h
        ; Exact mapped bytes E8 C0 05 FC FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes A1 1C 57 1C 10: mov eax, dword ptr [0x101c571c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10101h
        lea edx, [esp + 148h]
        push 1
        mov ecx, dword ptr [eax + 2cch]
        push edx
        ; Exact mapped bytes E8 A1 05 FC FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ea8h]
        mov edx, dword ptr [esp + 1ch]
        xor ecx, 0aaaaaaaah
        add ecx, edx
        xor ecx, 0aaaaaaaah
        mov dword ptr [ebp + 0ea8h], ecx
        xor ebp, ebp
        mov edx, dword ptr [ebx + 0each]
        mov eax, dword ptr [esp + 1ch]
        xor edx, 0aaaaaaaah
        add edx, eax
        mov eax, dword ptr [esp + 18h]
        xor edx, 0aaaaaaaah
        lea eax, [eax + eax*4]
        mov dword ptr [ebx + 0each], edx
        lea ecx, [eax + eax*4]
        mov eax, 51eb851fh
        shl ecx, 1
        imul ecx
        mov ecx, dword ptr [ebx + 0eb8h]
        sar edx, 5
        mov eax, edx
        xor ecx, 0aaaaaaaah
        shr eax, 1fh
        add edx, eax
        add edx, ecx
        xor edx, 0aaaaaaaah
        mov dword ptr [ebx + 0eb8h], edx
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ebx, dword ptr [edx + 4]
        ; Exact mapped bytes 0F 85 BA 00 00 00: jne 0x10068ccd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 30h]
        cmp ecx, 64h
        ; Exact mapped bytes 7E 2B: jle 0x10068c47
        __asm _emit 0x7e
        __asm _emit 0x2b
        mov eax, 51eb851fh
        mov dword ptr [esi + 394h], 0ch
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        lea ecx, [edx + eax + 5]
        push ecx
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 6B 5A 03 00: call 0x1009e6b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x5a
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 13: jmp 0x10068c5a
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 8B 15 1C 57 1C 10: mov edx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 8
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 C6 5F 05 00: call 0x100bec20
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x5f
        __asm _emit 0x05
        __asm _emit 0x00
        test byte ptr [esp + 34h], 2
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 74 18: je 0x10068c7e
        __asm _emit 0x74
        __asm _emit 0x18
        cmp dword ptr [eax + 170h], 5
        ; Exact mapped bytes 7E 56: jle 0x10068cc5
        __asm _emit 0x7e
        __asm _emit 0x56
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebp
        ; Exact mapped bytes 74 4C: je 0x10068cc5
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes EB 49: jmp 0x10068cc7
        __asm _emit 0xeb
        __asm _emit 0x49
        mov ecx, dword ptr [eax + 170h]
        mov esi, 4
        cmp ecx, esi
        ; Exact mapped bytes 7E 0F: jle 0x10068c9c
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebp
        ; Exact mapped bytes 74 05: je 0x10068c9c
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 10h]
        ; Exact mapped bytes EB 02: jmp 0x10068c9e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [eax]
        mov ecx, eax
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 75 24: jne 0x10068ccd
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], esi
        ; Exact mapped bytes 7E 0F: jle 0x10068cc5
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebp
        ; Exact mapped bytes 74 05: je 0x10068cc5
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes EB 02: jmp 0x10068cc7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [ecx]
        push ebp
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [esp + 244h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 240h
        ; Exact mapped bytes C2 48 00: ret 0x48
        __asm _emit 0xc2
        __asm _emit 0x48
        __asm _emit 0x00
    }
}
