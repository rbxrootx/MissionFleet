// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E4700 .. +0x41E bytes.
extern "C" __declspec(naked) void FUN_100e4700_100E4700() {
    __asm {
        push -1
        push 10173c9eh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov eax, dword ptr [esp + 48h]
        mov edx, dword ptr [esp + 3ch]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 40h]
        push esi
        push edi
        mov edi, dword ptr [esp + 54h]
        mov esi, ecx
        push eax
        mov ecx, dword ptr [esp + 54h]
        mov eax, dword ptr [esp + 48h]
        push edi
        push ecx
        mov ecx, dword ptr [esp + 4ch]
        push edx
        push ebp
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 2ch], esi
        ; Exact mapped bytes E8 16 9F F6 FF: call 0x1004e660
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x9f
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 30h]
        xor ebx, ebx
        mov dword ptr [esi], 1017658ch
        mov dword ptr [esi + 230h], ebx
        mov dword ptr [esi + 234h], 0ffffffffh
        mov dword ptr [esi + 238h], ebx
        mov dword ptr [esi + 74h], edx
        mov edx, dword ptr [esp + 38h]
        mov dword ptr [esi + 78h], eax
        mov eax, dword ptr [esp + 44h]
        mov dword ptr [esi + 7ch], ebx
        mov dword ptr [esi + 80h], ecx
        mov dword ptr [esi + 84h], edx
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 60h], ebx
        mov dword ptr [esi + 64h], ebx
        mov dword ptr [esi + 68h], ebx
        mov dword ptr [esi + 6ch], ebx
        mov dword ptr [esi + 1e8h], eax
        mov edi, 0c8h
        mov dword ptr [esi + 1ech], ebp
        mov dword ptr [esi + 1f0h], edi
        ; Exact mapped bytes A1 EC 55 1C 10: mov eax, dword ptr [0x101c55ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 1ch], ebx
        lea eax, [eax + eax*4]
        lea ecx, [eax + eax*4]
        mov eax, 51eb851fh
        shl ecx, 2
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        imul edx, dword ptr [esi + 4]
        mov dword ptr [esi + 88h], edx
        ; Exact mapped bytes A1 EC 55 1C 10: mov eax, dword ptr [0x101c55ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [eax + eax*2]
        lea eax, [eax + edx*4]
        lea ecx, [eax + eax*8]
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        imul edx, dword ptr [esi + 8]
        mov dword ptr [esi + 8ch], edx
        mov dword ptr [esi + 90h], edi
        ; Exact mapped bytes A1 EC 55 1C 10: mov eax, dword ptr [0x101c55ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        lea eax, [eax + eax*4]
        lea ecx, [eax + eax*4]
        mov eax, 51eb851fh
        shl ecx, 2
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ebp, 1
        imul edx, dword ptr [esi + 4]
        mov dword ptr [esi + 0a4h], edx
        ; Exact mapped bytes A1 EC 55 1C 10: mov eax, dword ptr [0x101c55ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [esi + 0ach], edi
        lea edx, [eax + eax*2]
        mov dword ptr [esi + 204h], ebx
        mov dword ptr [esi + 0b0h], ebx
        mov dword ptr [esi + 1e0h], 40000000h
        lea eax, [eax + edx*4]
        mov dword ptr [esi + 1e4h], 0ffffffffh
        mov dword ptr [esi + 23ch], ebx
        mov dword ptr [esi + 240h], ebx
        lea edx, [eax + eax*8]
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        mov dword ptr [esi + 200h], ebx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esp + 3ch]
        imul edx, ecx
        mov dword ptr [esi + 0a8h], edx
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [esi + 0a0h], edx
        mov dword ptr [esi + 1f8h], ebx
        mov edx, dword ptr [eax]
        mov dword ptr [esi + 94h], edx
        mov edx, dword ptr [eax + 4]
        neg edx
        mov dword ptr [esi + 98h], edx
        mov eax, dword ptr [eax + 8]
        shl eax, 1
        mov dword ptr [esi + 9ch], eax
        or byte ptr [esi + 24h], 4
        mov edx, dword ptr [esi + 4]
        mov eax, 64h
        mov dword ptr [esi + 1c8h], eax
        mov dword ptr [esi + 1cch], eax
        mov eax, dword ptr [esp + 24h]
        ; Exact mapped bytes 66 C7 86 B8 01 00 00 0B 00: mov word ptr [esi + 0x1b8], 0xb
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [esi + 24ch], eax
        mov eax, dword ptr [esp + 28h]
        cmp eax, ebp
        mov dword ptr [esi + 1d4h], ebx
        mov dword ptr [esi + 1b4h], ebx
        mov dword ptr [esi + 1dch], ebx
        mov dword ptr [esi + 1bch], ebp
        mov dword ptr [esi + 1c0h], 0aah
        mov dword ptr [esi + 1c4h], ebp
        mov dword ptr [esi + 1d0h], ebx
        mov dword ptr [esi + 228h], edx
        mov dword ptr [esi + 22ch], ecx
        ; Exact mapped bytes 0F 85 BC 00 00 00: jne 0x100e4a03
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 E8 57 1C 10: mov eax, dword ptr [0x101c57e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 22h
        ; Exact mapped bytes 7E 11: jle 0x100e4966
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 07: je 0x100e4966
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 880h
        ; Exact mapped bytes EB 02: jmp 0x100e4968
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov dword ptr [esi + 1f8h], eax
        ; Exact mapped bytes E8 2B 7E 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x7e
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 0F 84 26 01 00 00: je 0x100e4ab1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 80 57 1C 10: mov eax, dword ptr [0x101c5780]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 0E: jle 0x100e49a6
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 04: je 0x100e49a6
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebp, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x100e49a8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 0fa0h
        add eax, 0ah
        push ebx
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 EE 9F 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100e49f9
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov ebp, 1
        ; Exact mapped bytes E9 B0 00 00 00: jmp 0x100e4ab3
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 7C 57 1C 10: mov eax, dword ptr [0x101c577c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 0A: jle 0x100e4a1a
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 75 02: jne 0x100e4a1c
        __asm _emit 0x75
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov dword ptr [esi + 1f8h], eax
        ; Exact mapped bytes E8 77 7D 08 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 44h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 76: je 0x100e4ab1
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes A1 7C 57 1C 10: mov eax, dword ptr [0x101c577c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 0F: jle 0x100e4a57
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x100e4a57
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x100e4a59
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 0fa0h
        add eax, 0ah
        push ebx
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 3D 9F 01 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100e4aaa
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], ecx
        mov eax, dword ptr [ebp]
        lea edx, [edi + 14h]
        mov dword ptr [edi + 14h], eax
        mov ecx, dword ptr [ebp + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov ebp, 1
        ; Exact mapped bytes EB 02: jmp 0x100e4ab3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 1f4h], edi
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov byte ptr [esp + 1ch], bl
        mov eax, dword ptr [edx + 4]
        cmp eax, ebx
        ; Exact mapped bytes 74 15: je 0x100e4adf
        __asm _emit 0x74
        __asm _emit 0x15
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 2C 03 00 00: mov cx, word ptr [eax + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a0h]
        cmp eax, ecx
        ; Exact mapped bytes 75 02: jne 0x100e4adf
        __asm _emit 0x75
        __asm _emit 0x02
        mov ebx, ebp
        mov edx, dword ptr [esi + 1f8h]
        mov dword ptr [esi + 220h], ebx
        push 0fffffeffh
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [esi + 0ch], eax
        mov ecx, dword ptr [edx + 1ch]
        mov dword ptr [esi + 10h], ecx
        mov ecx, dword ptr [esi + 1f4h]
        ; Exact mapped bytes E8 59 A6 01 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        mov eax, esi
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
        add esp, 10h
        ; Exact mapped bytes C2 38 00: ret 0x38
        __asm _emit 0xc2
        __asm _emit 0x38
        __asm _emit 0x00
    }
}
