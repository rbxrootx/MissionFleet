// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044C3D9 .. +0x2B2 bytes.
extern "C" __declspec(naked) void FUN_0044c3d9_0044C3D9() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58dc9dh
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
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 2cch
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0fh
        ; Exact mapped bytes 0F 87 60 02 00 00: ja 0x44c676
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 24 95 8B C6 44 00: jmp dword ptr [edx*4 + 0x44c68b]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x8b
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 00 0B 00: mov word ptr [eax], 0xb
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 41 08 FF FF: mov word ptr [ecx + 8], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes E9 3D 02 00 00: jmp 0x44c678
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 02 0B 00: mov word ptr [edx], 0xb
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 40 08 00 00: mov word ptr [eax + 8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 22 02 00 00: jmp 0x44c678
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 01 02 00: mov word ptr [ecx], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0B: jne 0x44c472
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes E8 EB 62 0F 00: call 0x542757
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x62
        __asm _emit 0x0f
        __asm _emit 0x00
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 74 0B: je 0x44c47d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 42 08 01 00: mov word ptr [edx + 8], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x44c486
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 40 08 00 00: mov word ptr [eax + 8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 E8 01 00 00: jmp 0x44c678
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 3ch], -1
        ; Exact mapped bytes 75 5F: jne 0x44c4f8
        __asm _emit 0x75
        __asm _emit 0x5f
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 B1 C2 09 00: call 0x4e8759
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xc2
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        push 138h
        mov edx, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 6C F1 0D 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf1
        __asm _emit 0x0d
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 73 7D 0E 00: call 0x534248
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x7d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 3ch], eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 AA 7E 0E 00: call 0x53438d
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x7e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 40h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 13 C3 09 00: call 0x4e880b
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xc3
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 00 03 00: mov word ptr [eax], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0fffffd43h
        ; Exact mapped bytes 75 0B: jne 0x44c514
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes EB 09: jmp 0x44c51d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [edx + 8], eax
        mov eax, 1
        ; Exact mapped bytes E9 48 01 00 00: jmp 0x44c678
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 44h], 0
        ; Exact mapped bytes 75 14: jne 0x44c54d
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 F4 F1 0D 00: call 0x52b738
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf1
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 7E 01 00 00: call 0x44c6cb
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 44h], 0
        ; Exact mapped bytes 75 14: jne 0x44c56a
        __asm _emit 0x75
        __asm _emit 0x14
        push 10bh
        push 676dcch
        ; Exact mapped bytes E8 DB C7 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xc7
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44c56a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x44c54d
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 44h], 0
        ; Exact mapped bytes 75 07: jne 0x44c580
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F8 00 00 00: jmp 0x44c678
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 00 09 00: mov word ptr [eax], 9
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 44h]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 44h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 44h]
        mov dword ptr [ecx + 8], eax
        mov eax, 1
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x44c678
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 01 0B 00: mov word ptr [ecx], 0xb
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 27 00 00: call 0x44ed32
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 89 42 08: mov word ptr [edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x08
        mov eax, 1
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x44c678
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 00 03 00: mov word ptr [eax], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 44 B9 68 00: call dword ptr [0x68b944]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 8], eax
        mov eax, 1
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x44c678
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 0C 87 0D 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x87
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 02 08 00: mov word ptr [edx], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 D9 3A 13 00: call 0x5800eb
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x3a
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 8], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 C5 02 08 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 4A: jmp 0x44c678
        __asm _emit 0xeb
        __asm _emit 0x4a
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 D1 86 0D 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x86
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 2
        push 0f1c0h
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 36 D6 08 00: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xd6
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 02 08 00: mov word ptr [edx], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 91 3A 13 00: call 0x5800eb
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x3a
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 8], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 7D 02 08 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x02
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x44c678
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
