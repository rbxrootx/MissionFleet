// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046C060 .. +0x56D bytes.
extern "C" __declspec(naked) void FUN_0046c060_0046C060() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        ; Exact mapped bytes 0F BE 45 08: movsx eax, byte ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x08
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 25h
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 55h
        ; Exact mapped bytes 0F 87 47 05 00 00: ja 0x46c5c8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x47
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        xor edx, edx
        mov dl, byte ptr [eax + 46c629h]
        ; Exact mapped bytes FF 24 95 CD C5 46 00: jmp dword ptr [edx*4 + 0x46c5cd]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xcd
        __asm _emit 0xc5
        __asm _emit 0x46
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx + ecx*4]
        push eax
        ; Exact mapped bytes E8 D3 05 00 00: call 0x46c680
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 13 05 00 00: jmp 0x46c5c8
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx + ecx*4 + 1ch]
        push eax
        ; Exact mapped bytes E8 B0 05 00 00: call 0x46c680
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 F0 04 00 00: jmp 0x46c5c8
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx + ecx*4 + 38h]
        push eax
        ; Exact mapped bytes E8 8D 05 00 00: call 0x46c680
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 CD 04 00 00: jmp 0x46c5c8
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx + ecx*4 + 68h]
        push eax
        ; Exact mapped bytes E8 6A 05 00 00: call 0x46c680
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 AA 04 00 00: jmp 0x46c5c8
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D EC 8A 68 00 00: cmp dword ptr [0x688aec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 7F: je 0x46c1a6
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes C7 05 EC 8A 68 00 00 00 00 00: mov dword ptr [0x688aec], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx + 0a4h]
        push eax
        ; Exact mapped bytes E8 E0 06 00 00: call 0x46c830
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov ecx, dword ptr [ebp + 14h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 05: jne 0x46c160
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 68 04 00 00: jmp 0x46c5c8
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        mov byte ptr [eax], 20h
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        sub edx, 1
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx + 0a8h]
        push eax
        ; Exact mapped bytes E8 8F 06 00 00: call 0x46c830
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes EB 73: jmp 0x46c219
        __asm _emit 0xeb
        __asm _emit 0x73
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx + 0a0h]
        push eax
        ; Exact mapped bytes E8 6B 06 00 00: call 0x46c830
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov ecx, dword ptr [ebp + 14h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 05: jne 0x46c1d5
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 F3 03 00 00: jmp 0x46c5c8
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        mov byte ptr [eax], 20h
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        sub edx, 1
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx + 0a8h]
        push eax
        ; Exact mapped bytes E8 1A 06 00 00: call 0x46c830
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes E9 AA 03 00 00: jmp 0x46c5c8
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 8A 68 00: mov ecx, dword ptr [0x688aec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D FC 8A 68 00: mov dword ptr [0x688afc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 2
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes E8 90 04 00 00: call 0x46c6d0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E9 80 03 00 00: jmp 0x46c5c8
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 EC 8A 68 00: mov eax, dword ptr [0x688aec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 FC 8A 68 00: mov dword ptr [0x688afc], eax
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 2
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes E8 68 04 00 00: call 0x46c6d0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E9 58 03 00 00: jmp 0x46c5c8
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 EC 8A 68 00: mov edx, dword ptr [0x688aec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 FC 8A 68 00: mov dword ptr [0x688afc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 8]
        cdq
        mov ecx, 0ch
        idiv ecx
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x46c29a
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0ch
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 2
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 23 04 00 00: call 0x46c6d0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E9 13 03 00 00: jmp 0x46c5c8
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 EC 8A 68 00: mov edx, dword ptr [0x688aec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 FC 8A 68 00: mov dword ptr [0x688afc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 3
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 1ch]
        add eax, 1
        push eax
        ; Exact mapped bytes E8 F6 03 00 00: call 0x46c6d0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E9 E6 02 00 00: jmp 0x46c5c8
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 8A 68 00: mov ecx, dword ptr [0x688aec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D FC 8A 68 00: mov dword ptr [0x688afc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 2
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 10h]
        add edx, 1
        push edx
        ; Exact mapped bytes E8 C9 03 00 00: call 0x46c6d0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E9 B9 02 00 00: jmp 0x46c5c8
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 EC 8A 68 00: mov eax, dword ptr [0x688aec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 FC 8A 68 00: mov dword ptr [0x688afc], eax
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 2
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 A1 03 00 00: call 0x46c6d0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E9 91 02 00 00: jmp 0x46c5c8
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 8], 0bh
        ; Exact mapped bytes 7F 1C: jg 0x46c35c
        __asm _emit 0x7f
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx + 98h]
        push eax
        ; Exact mapped bytes E8 29 03 00 00: call 0x46c680
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 1A: jmp 0x46c376
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax + 9ch]
        push ecx
        ; Exact mapped bytes E8 0D 03 00 00: call 0x46c680
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 4D 02 00 00: jmp 0x46c5c8
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 EC 8A 68 00: mov edx, dword ptr [0x688aec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 FC 8A 68 00: mov dword ptr [0x688afc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 2
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 34 03 00 00: call 0x46c6d0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E9 24 02 00 00: jmp 0x46c5c8
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 8A 68 00: mov ecx, dword ptr [0x688aec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D FC 8A 68 00: mov dword ptr [0x688afc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 52: jmp 0x46c40d
        __asm _emit 0xeb
        __asm _emit 0x52
        ; Exact mapped bytes 8B 0D EC 8A 68 00: mov ecx, dword ptr [0x688aec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D FC 8A 68 00: mov dword ptr [0x688afc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 1
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 18h]
        push edx
        ; Exact mapped bytes E8 F3 02 00 00: call 0x46c6d0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E9 E3 01 00 00: jmp 0x46c5c8
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 EC 8A 68 00: mov eax, dword ptr [0x688aec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 FC 8A 68 00: mov dword ptr [0x688afc], eax
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 75 09: jne 0x46c401
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 6
        ; Exact mapped bytes EB 0C: jmp 0x46c40d
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 18h]
        sub eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 1ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 09: jge 0x46c421
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 2D: jmp 0x46c44e
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 1ch]
        cdq
        mov ecx, 7
        idiv ecx
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 1ch]
        cdq
        mov ecx, 7
        idiv ecx
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7C 09: jl 0x46c44e
        __asm _emit 0x7c
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 6F 02 00 00: call 0x46c6d0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E9 5F 01 00 00: jmp 0x46c5c8
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D EC 8A 68 00 00: cmp dword ptr [0x688aec], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2E: je 0x46c4a0
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes C7 05 EC 8A 68 00 00 00 00 00: mov dword ptr [0x688aec], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx + 0a4h]
        push edx
        ; Exact mapped bytes E8 95 03 00 00: call 0x46c830
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes EB 22: jmp 0x46c4c2
        __asm _emit 0xeb
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx + 0a0h]
        push edx
        ; Exact mapped bytes E8 71 03 00 00: call 0x46c830
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x46c5c8
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 EC 8A 68 00 00 00 00 00: mov dword ptr [0x688aec], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx + 0a8h]
        push edx
        ; Exact mapped bytes E8 40 03 00 00: call 0x46c830
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes E9 D0 00 00 00: jmp 0x46c5c8
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 EC 8A 68 00: mov eax, dword ptr [0x688aec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 FC 8A 68 00: mov dword ptr [0x688afc], eax
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ecx + 14h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 4], edx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 2
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 AA 01 00 00: call 0x46c6d0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x46c5c8
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 EC 8A 68 00: mov edx, dword ptr [0x688aec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 FC 8A 68 00: mov dword ptr [0x688afc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 14h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov ecx, eax
        add ecx, 13h
        imul ecx, ecx, 64h
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 14h]
        cdq
        mov esi, 64h
        idiv esi
        add ecx, edx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 4
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 5A 01 00 00: call 0x46c6d0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 4D: jmp 0x46c5c8
        __asm _emit 0xeb
        __asm _emit 0x4d
        ; Exact mapped bytes E8 00 B0 00 00: call 0x477580
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        cmp dword ptr [edx + 20h], 0
        setne al
        mov ecx, dword ptr [eax*4 + 6802fch]
        push ecx
        ; Exact mapped bytes E8 DF 00 00 00: call 0x46c680
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 22: jmp 0x46c5c8
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        mov byte ptr [eax], 25h
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        sub edx, 1
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax], edx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
