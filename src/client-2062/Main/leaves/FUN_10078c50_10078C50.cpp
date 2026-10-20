// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10078C50 .. +0x283 bytes.
extern "C" __declspec(naked) void FUN_10078c50_10078C50() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 6D 02 00 00: je 0x10078ecb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 0ch]
        push ebp
        push edi
        mov eax, dword ptr [ebx + 4]
        cmp eax, 201h
        ; Exact mapped bytes 0F 87 99 01 00 00: ja 0x10078e0b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 EC 00 00 00: je 0x10078d64
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 100h
        ; Exact mapped bytes 0F 84 1F 02 00 00: je 0x10078ea2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 200h
        ; Exact mapped bytes 0F 85 14 02 00 00: jne 0x10078ea2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [edx + 4]
        cmp eax, ecx
        ; Exact mapped bytes 0F 8C A4 00 00 00: jl 0x10078d46
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edx + 8]
        mov edi, dword ptr [esi + 8]
        cmp edx, edi
        ; Exact mapped bytes 0F 8C 96 00 00 00: jl 0x10078d46
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebp, [ecx + 100h]
        cmp eax, ebp
        ; Exact mapped bytes 0F 8D 88 00 00 00: jge 0x10078d46
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add edi, 80h
        cmp edx, edi
        ; Exact mapped bytes 7D 7E: jge 0x10078d46
        __asm _emit 0x7d
        __asm _emit 0x7e
        sub eax, ecx
        sub eax, 4
        lea eax, [eax + eax*4]
        lea ecx, [eax + eax*4]
        mov eax, 51eb851fh
        shl ecx, 1
        imul ecx
        sar edx, 5
        mov ecx, dword ptr [esi + 90h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        ; Exact mapped bytes E8 2E 6A 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x6a
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [ecx + 8]
        sub eax, edx
        sub eax, 4
        lea eax, [eax + eax*4]
        lea ecx, [eax + eax*4]
        mov eax, 2fa0be83h
        shl ecx, 1
        imul ecx
        sar edx, 4
        mov ecx, dword ptr [esi + 94h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        ; Exact mapped bytes E8 F8 69 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        mov ecx, 1
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 94h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E9 5C 01 00 00: jmp 0x10078ea2
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 94h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E9 3E 01 00 00: jmp 0x10078ea2
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [esi + 4]
        mov ecx, dword ptr [eax + 4]
        cmp ecx, edi
        ; Exact mapped bytes 0F 8C 2B 01 00 00: jl 0x10078ea2
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8]
        mov edx, dword ptr [esi + 8]
        cmp eax, edx
        ; Exact mapped bytes 0F 8C 1D 01 00 00: jl 0x10078ea2
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebp, [edi + 100h]
        cmp ecx, ebp
        ; Exact mapped bytes 0F 8D 0F 01 00 00: jge 0x10078ea2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebp, [edx + 80h]
        cmp eax, ebp
        ; Exact mapped bytes 0F 8D 01 01 00 00: jge 0x10078ea2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, edi
        sub eax, edx
        lea ecx, [ecx + ecx*4]
        lea eax, [eax + eax*4]
        lea ecx, [ecx + ecx*4]
        lea edx, [eax + eax*4]
        lea ecx, [ecx + ecx - 2c8h]
        lea eax, [edx + edx - 248h]
        test ecx, ecx
        ; Exact mapped bytes 7D 04: jge 0x10078dc7
        __asm _emit 0x7d
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 0D: jmp 0x10078dd4
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp ecx, 3000h
        ; Exact mapped bytes 7E 05: jle 0x10078dd4
        __asm _emit 0x7e
        __asm _emit 0x05
        mov ecx, 3000h
        test eax, eax
        ; Exact mapped bytes 7D 04: jge 0x10078ddc
        __asm _emit 0x7d
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0C: jmp 0x10078de8
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp eax, 1780h
        ; Exact mapped bytes 7E 05: jle 0x10078de8
        __asm _emit 0x7e
        __asm _emit 0x05
        mov eax, 1780h
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [edx + 104e8h], ecx
        mov dword ptr [edx + 104ech], eax
        mov edx, dword ptr [edx + 104e0h]
        mov dword ptr [edx + 50h], ecx
        mov dword ptr [edx + 54h], eax
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x10078ea2
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 204h
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x10078ea2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 92 1C 10: mov eax, dword ptr [0x101c92d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [esi + 4]
        mov ecx, dword ptr [eax + 4]
        cmp ecx, edi
        ; Exact mapped bytes 7C 7D: jl 0x10078ea2
        __asm _emit 0x7c
        __asm _emit 0x7d
        mov eax, dword ptr [eax + 8]
        mov edx, dword ptr [esi + 8]
        cmp eax, edx
        ; Exact mapped bytes 7C 73: jl 0x10078ea2
        __asm _emit 0x7c
        __asm _emit 0x73
        lea ebp, [edi + 100h]
        cmp ecx, ebp
        ; Exact mapped bytes 7D 69: jge 0x10078ea2
        __asm _emit 0x7d
        __asm _emit 0x69
        lea ebp, [edx + 80h]
        cmp eax, ebp
        ; Exact mapped bytes 7D 5F: jge 0x10078ea2
        __asm _emit 0x7d
        __asm _emit 0x5f
        sub ecx, edi
        sub eax, edx
        lea ecx, [ecx + ecx*4]
        lea eax, [eax + eax*4]
        lea ecx, [ecx + ecx*4]
        lea edx, [eax + eax*4]
        lea ecx, [ecx + ecx - 2c8h]
        lea eax, [edx + edx - 248h]
        test ecx, ecx
        ; Exact mapped bytes 7D 04: jge 0x10078e69
        __asm _emit 0x7d
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 0D: jmp 0x10078e76
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp ecx, 3000h
        ; Exact mapped bytes 7E 05: jle 0x10078e76
        __asm _emit 0x7e
        __asm _emit 0x05
        mov ecx, 3000h
        test eax, eax
        ; Exact mapped bytes 7D 04: jge 0x10078e7e
        __asm _emit 0x7d
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0C: jmp 0x10078e8a
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp eax, 1780h
        ; Exact mapped bytes 7E 05: jle 0x10078e8a
        __asm _emit 0x7e
        __asm _emit 0x05
        mov eax, 1780h
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [edx + 104e8h], ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [ecx + 104ech], eax
        mov eax, dword ptr [esi + 3ch]
        pop edi
        test eax, eax
        pop ebp
        ; Exact mapped bytes 74 20: je 0x10078ecb
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x10078ec4
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push ebx
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 09: je 0x10078ecb
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes EB EA: jmp 0x10078eae
        __asm _emit 0xeb
        __asm _emit 0xea
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
