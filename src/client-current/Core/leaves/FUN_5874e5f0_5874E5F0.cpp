// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874E5F0 .. +0x6CF bytes.
extern "C" __declspec(naked) void FUN_5874e5f0_5874E5F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888f864h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 48h
        push esi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C DD D3 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xdd
        __asm _emit 0xd3
        __asm _emit 0xff
        add eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 7ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0C: je 0x5874e63f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 65 74 D4 FF: call 0x58495aa0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x74
        __asm _emit 0xd4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x5874e64e
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 224h], 1
        ; Exact mapped bytes EB 0D: jmp 0x5874e65b
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 224h], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 19: je 0x5874e67a
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 B7 EA D3 FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xea
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x5874e67a
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 224h], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [edx + 268h], eax
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 8B 91 9A 00 00 00: mov dx, word ptr [ecx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 90 D8 01 00 00: mov word ptr [eax + 0x1d8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ecx + 1dch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 23ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 240h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 23ch], 0
        ; Exact mapped bytes 74 7D: je 0x5874e767
        __asm _emit 0x74
        __asm _emit 0x7d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 23ch]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 240h]
        push eax
        lea ecx, [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 84 3E 01 00: call 0x58762590
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x5874e73b
        __asm _emit 0x75
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 1b8h]
        cmp eax, 0dh
        ; Exact mapped bytes 75 32: jne 0x5874e751
        __asm _emit 0x75
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 23ch]
        mov dword ptr [ebp - 2ch], edx
        lea eax, [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 99 3F 01 00: call 0x587626d0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5874e751
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9B 77 D3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x77
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 28h], 100h
        ; Exact mapped bytes EB 14: jmp 0x5874e765
        __asm _emit 0xeb
        __asm _emit 0x14
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 85 77 D3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 28h], 0
        ; Exact mapped bytes EB 69: jmp 0x5874e7d0
        __asm _emit 0xeb
        __asm _emit 0x69
        ; Exact mapped bytes 6B 05 64 77 94 58 75: imul eax, dword ptr [0x58947764], 0x75
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x75
        cdq
        mov ecx, 64h
        idiv ecx
        mov ecx, eax
        mov eax, dword ptr [ebp - 50h]
        cdq
        idiv ecx
        push eax
        ; Exact mapped bytes 6B 05 64 77 94 58 64: imul eax, dword ptr [0x58947764], 0x64
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x64
        cdq
        mov ecx, 64h
        idiv ecx
        mov ecx, eax
        mov eax, dword ptr [ebp - 54h]
        cdq
        idiv ecx
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E 65 E8 FF: call 0x585d4d30
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x65
        __asm _emit 0xe8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5874e7bc
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 30 77 D3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x77
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 28h], 100h
        ; Exact mapped bytes EB 14: jmp 0x5874e7d0
        __asm _emit 0xeb
        __asm _emit 0x14
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1A 77 D3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x77
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 28h], 0
        mov ecx, dword ptr [ebp + 18h]
        movzx esi, word ptr [ecx + 9ch]
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 C8 D4 D3 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xd4
        __asm _emit 0xd3
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 14h
        div ecx
        add edx, 5ah
        imul esi, edx
        mov eax, esi
        xor edx, edx
        mov ecx, 64h
        div ecx
        xor eax, 55h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1c0h], eax
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 1d8h]
        cmp ecx, 5
        ; Exact mapped bytes 75 13: jne 0x5874e830
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 18h]
        movzx eax, word ptr [edx + 9ch]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1c0h], eax
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 1d8h]
        cmp eax, 1
        ; Exact mapped bytes 75 3F: jne 0x5874e87e
        __asm _emit 0x75
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp + 18h]
        movzx edx, word ptr [ecx + 9ch]
        test edx, edx
        ; Exact mapped bytes 7C 31: jl 0x5874e87e
        __asm _emit 0x7c
        __asm _emit 0x31
        mov eax, dword ptr [ebp + 18h]
        movzx ecx, word ptr [eax + 9ch]
        cmp ecx, 2
        ; Exact mapped bytes 7F 22: jg 0x5874e87e
        __asm _emit 0x7f
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 244h], 1
        mov eax, dword ptr [ebp + 18h]
        movzx ecx, word ptr [eax + 9ch]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 248h], ecx
        ; Exact mapped bytes EB 1A: jmp 0x5874e898
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 244h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 248h], 0ffffffffh
        mov edx, dword ptr [ebp + 18h]
        movzx eax, word ptr [edx + 9eh]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1c4h], eax
        mov edx, 0ffh
        mov eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 23 90 9A 00 00 00: and dx, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x90
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE CA: movsx ecx, dl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xca
        ; Exact mapped bytes 0F AF 0D 6C 77 94 58: imul ecx, dword ptr [0x5894776c]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        add ecx, 64h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1cch], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0b0h], 0
        mov ecx, dword ptr [ebp + 18h]
        movzx edx, word ptr [ecx + 0a0h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1c8h], edx
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 1c8h], 0
        ; Exact mapped bytes 74 0E: je 0x5874e90a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1c8h]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x5874e911
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 64h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 1c8h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + 1c8h]
        imul eax, dword ptr [ecx + 1c8h]
        cdq
        ; Exact mapped bytes F7 3D 70 77 94 58: idiv dword ptr [0x58947770]
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 1c4h]
        add ecx, 5
        cdq
        idiv ecx
        mov edx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 66 8B 8A 98 00 00 00: mov cx, word ptr [edx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        mov edx, 0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 0F BE C9: movsx ecx, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc9
        mov edx, 64h
        sub edx, ecx
        imul eax, edx
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, 2710h
        sub edx, eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1d4h], edx
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 1c8h], 5dch
        ; Exact mapped bytes 7E 0F: jle 0x5874e99f
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 204h], 3
        ; Exact mapped bytes EB 67: jmp 0x5874ea06
        __asm _emit 0xeb
        __asm _emit 0x67
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 1c8h], 3e8h
        ; Exact mapped bytes 7C 1E: jl 0x5874e9cc
        __asm _emit 0x7c
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 1c8h], 5dch
        ; Exact mapped bytes 7F 0F: jg 0x5874e9cc
        __asm _emit 0x7f
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 204h], 2
        ; Exact mapped bytes EB 3A: jmp 0x5874ea06
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 1c8h], 1f4h
        ; Exact mapped bytes 7E 1E: jle 0x5874e9f9
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 1c8h], 3e8h
        ; Exact mapped bytes 7D 0F: jge 0x5874e9f9
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 204h], 1
        ; Exact mapped bytes EB 0D: jmp 0x5874ea06
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 204h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 208h], 2
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 20ch], 3
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 210h], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 204h]
        add edx, 0c4h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 214h], edx
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1c0h]
        xor edx, 55h
        ; Exact mapped bytes 74 11: je 0x5874ea64
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 204h]
        add ecx, 4
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x5874ea73
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 204h]
        add eax, 8
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 21ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1c0h]
        xor ecx, 55h
        ; Exact mapped bytes 74 11: je 0x5874ea9e
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 204h]
        add eax, 0ch
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 0F: jmp 0x5874eaad
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 204h]
        add edx, 14h
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 218h], ecx
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 74h], 2
        ; Exact mapped bytes 75 27: jne 0x5874eae9
        __asm _emit 0x75
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 214h], 3
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 21ch], 2
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 218h], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 20h]
        mov dword ptr [eax + 1b4h], ecx
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 1d8h]
        cmp eax, 3
        ; Exact mapped bytes 0F 85 A5 01 00 00: jne 0x5874ecad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 23ch]
        ; Exact mapped bytes E8 9A E4 D3 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe4
        __asm _emit 0xd3
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D 7E D3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x7e
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 86 E4 D3 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0xd3
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x5874ebba
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 254h], 14h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 254h]
        imul edx, dword ptr [ecx + 254h]
        push edx
        ; Exact mapped bytes E8 EA 24 0E 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x24
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [eax + 250h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 254h]
        imul ecx, dword ptr [eax + 254h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 250h]
        push eax
        ; Exact mapped bytes E8 81 E2 0F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        push 2
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 254h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 254h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 250h]
        push eax
        ; Exact mapped bytes E8 A9 59 D9 FF: call 0x584e4560
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x59
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 10h
        push 58h
        ; Exact mapped bytes E8 43 24 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x24
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 44: je 0x5874ec18
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 38h], ecx
        push 2
        ; Exact mapped bytes 8B 0D 58 07 96 58: mov ecx, dword ptr [0x58960758]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 5E D3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x5e
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 3e8h
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 FD 7B D3 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x7b
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5874ec1f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ecx + 258h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 258h]
        mov dword ptr [ebp - 44h], ecx
        push 101h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 5F 69 06 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x69
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 258h]
        mov dword ptr [ebp - 48h], eax
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 D9 71 D3 FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x71
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 258h]
        mov dword ptr [ebp - 4ch], edx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 63 72 D3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x72
        __asm _emit 0xd3
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 58 07 96 58: mov ecx, dword ptr [0x58960758]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 5E D3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x5e
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1f8h], eax
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 220h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 264h], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
