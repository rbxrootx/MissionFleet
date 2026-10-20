// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057967A .. +0x3AD bytes.
extern "C" __declspec(naked) void FUN_0057967a_0057967A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fc6fh
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
        sub esp, 4ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 58h], ecx
        push 13ch
        push 67d108h
        mov eax, dword ptr [ebp - 58h]
        push eax
        ; Exact mapped bytes E8 B2 0B F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x0b
        __asm _emit 0xf6
        __asm _emit 0xff
        push 0
        push 14h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 AB 9D F2 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x9d
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5796d3
        __asm _emit 0x75
        __asm _emit 0x14
        push 13dh
        push 67d108h
        ; Exact mapped bytes E8 72 F6 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf6
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5796d3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5796ae
        __asm _emit 0x75
        __asm _emit 0xd5
        push 1
        push 0ch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 80 9D F2 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x9d
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5796fe
        __asm _emit 0x75
        __asm _emit 0x14
        push 13eh
        push 67d108h
        ; Exact mapped bytes E8 47 F6 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf6
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5796fe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x5796d9
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 14: je 0x579720
        __asm _emit 0x74
        __asm _emit 0x14
        push 13fh
        push 67d108h
        ; Exact mapped bytes E8 25 F6 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xf6
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x579720
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x579704
        __asm _emit 0x75
        __asm _emit 0xde
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 14: je 0x579743
        __asm _emit 0x74
        __asm _emit 0x14
        push 140h
        push 67d108h
        ; Exact mapped bytes E8 02 F6 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf6
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x579743
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x579726
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        and ecx, 20h
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x57975f
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 07: je 0x579766
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 AE 02 00 00: jmp 0x579a14
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 F2 D3 00 00: call 0x586b60
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 0
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 6C E6 FA FF: call 0x527deb
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe6
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1E: jne 0x5797a1
        __asm _emit 0x75
        __asm _emit 0x1e
        mov dword ptr [ebp - 3ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 AB D4 00 00: call 0x586c44
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E9 73 02 00 00: jmp 0x579a14
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 86 45 FD FF: call 0x54dd33
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x45
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 1E: jne 0x5797d4
        __asm _emit 0x75
        __asm _emit 0x1e
        mov dword ptr [ebp - 40h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 78 D4 00 00: call 0x586c44
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes E9 40 02 00 00: jmp 0x579a14
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        push edx
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 27 D4 00 00: call 0x586c07
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 C4 83 FB FF: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0xff
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        mov dword ptr [ebp - 20h], eax
        push 0
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 F4 D3 00 00: call 0x586c07
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        push eax
        ; Exact mapped bytes FF 15 AC B5 68 00: call dword ptr [0x68b5ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 3D: jne 0x579860
        __asm _emit 0x75
        __asm _emit 0x3d
        ; Exact mapped bytes 8B 0D D0 6C 68 00: mov ecx, dword ptr [0x686cd0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        and ecx, 10h
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x579842
        __asm _emit 0x74
        __asm _emit 0x12
        push 67d114h
        push 67d140h
        ; Exact mapped bytes E8 D6 6D F2 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x6d
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 44h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 EC D3 00 00: call 0x586c44
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        ; Exact mapped bytes E9 B4 01 00 00: jmp 0x579a14
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 A3 E5 FA FF: call 0x527e0b
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xe5
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 1E: jne 0x57988f
        __asm _emit 0x75
        __asm _emit 0x1e
        mov dword ptr [ebp - 48h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 BD D3 00 00: call 0x586c44
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        ; Exact mapped bytes E9 85 01 00 00: jmp 0x579a14
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        push 2002h
        ; Exact mapped bytes FF 15 C8 B9 68 00: call dword ptr [0x68b9c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 75 28: jne 0x5798cd
        __asm _emit 0x75
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 58 B6 68 00: call dword ptr [0x68b658]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 7F D3 00 00: call 0x586c44
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E9 47 01 00 00: jmp 0x579a14
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        push eax
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 32: jne 0x579912
        __asm _emit 0x75
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 58 B6 68 00: call dword ptr [0x68b658]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes FF 15 00 BA 68 00: call dword ptr [0x68ba00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 3A D3 00 00: call 0x586c44
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        ; Exact mapped bytes E9 02 01 00 00: jmp 0x579a14
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax], 8
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ch], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 44: jne 0x57996e
        __asm _emit 0x75
        __asm _emit 0x44
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 3E: jne 0x57996e
        __asm _emit 0x75
        __asm _emit 0x3e
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 58h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 75 24: jne 0x57996e
        __asm _emit 0x75
        __asm _emit 0x24
        push 67d144h
        push 67d174h
        ; Exact mapped bytes E8 BC 6C F2 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x6c
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        push 67d178h
        push 67d1a8h
        ; Exact mapped bytes E8 AA 6C F2 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x6c
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 7D 20: jge 0x5799a9
        __asm _emit 0x7d
        __asm _emit 0x20
        push 67d1ach
        push 67d1dch
        ; Exact mapped bytes E8 7D 6C F2 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x6c
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 8]
        neg eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 09: je 0x5799bb
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 24: jne 0x5799df
        __asm _emit 0x75
        __asm _emit 0x24
        push 67d1e0h
        push 67d210h
        ; Exact mapped bytes E8 4B 6C F2 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x6c
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        push 67d214h
        push 67d244h
        ; Exact mapped bytes E8 39 6C F2 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x6c
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        ; Exact mapped bytes FF 15 FC B9 68 00: call dword ptr [0x68b9fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 20h
        mov dword ptr [ebp - 54h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 33 D2 00 00: call 0x586c44
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
