// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419E90 .. +0x27E bytes.
extern "C" __declspec(naked) void FUN_00419e90_00419E90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 964h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 964h]
        mov ecx, 259h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 8fch], 0
        ; Exact mapped bytes EB 0F: jmp 0x419ed5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8fch]
        add eax, 1
        mov dword ptr [ebp - 8fch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 114h]
        mov eax, dword ptr [ebp - 8fch]
        cmp eax, dword ptr [edx + 13ch]
        ; Exact mapped bytes 0F 8D 05 02 00 00: jge 0x41a0f5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 114h]
        mov eax, dword ptr [edx + 144h]
        mov ecx, dword ptr [ebp - 8fch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 DB 01 00 00: je 0x41a0f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 888h
        push 0
        lea eax, [ebp - 8ech]
        push eax
        ; Exact mapped bytes E8 98 B9 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        lea ecx, [ebp - 8f4h]
        push ecx
        ; Exact mapped bytes E8 85 B9 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 888h
        lea edx, [ebp - 8ech]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 42 73 FE FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 DC 00 00 00: je 0x41a040
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8ech], 0
        ; Exact mapped bytes 0F 85 CD 00 00 00: jne 0x41a03e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8e8h], 0
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x41a02d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8f0h], edx
        lea ecx, [ebp - 908h]
        ; Exact mapped bytes E8 31 7B FE FF: call 0x401ac3
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        lea eax, [ebp - 8f4h]
        push eax
        lea ecx, [ebp - 8e8h]
        push ecx
        lea ecx, [ebp - 918h]
        ; Exact mapped bytes E8 84 78 FE FF: call 0x40182f
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 924h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 13ch
        ; Exact mapped bytes E8 7F 71 FE FF: call 0x401140
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 908h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 904h], edx
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ebp - 900h], eax
        mov ecx, dword ptr [ebp - 900h]
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 75 40: jne 0x41a02b
        __asm _emit 0x75
        __asm _emit 0x40
        mov dword ptr [ebp - 8ech], 1
        push 888h
        lea edx, [ebp - 8ech]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 F6 75 FE FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x75
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 8e8h]
        push eax
        push 634234h
        ; Exact mapped bytes E8 ED 65 08 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 11: jmp 0x41a03e
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 6341e0h
        ; Exact mapped bytes E8 DA 65 08 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 07: jmp 0x41a047
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B3 00 00 00: jmp 0x41a0fa
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 80000000h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 120h
        ; Exact mapped bytes E8 41 AD 10 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xad
        __asm _emit 0x10
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 D0 B7 68 00: call dword ptr [0x68b7d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 79 AD 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 90ch], eax
        cmp dword ptr [ebp - 90ch], -1
        ; Exact mapped bytes 74 61: je 0x41a0e7
        __asm _emit 0x74
        __asm _emit 0x61
        mov esi, esp
        push 0
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 90ch]
        push eax
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4C AD 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 8f8h]
        push ecx
        push 5ch
        lea edx, [ebp - 64h]
        push edx
        mov eax, dword ptr [ebp - 90ch]
        push eax
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 27 AD 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], ecx
        mov esi, esp
        mov edx, dword ptr [ebp - 90ch]
        push edx
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0B AD 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 04: jmp 0x41a0eb
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0F: jmp 0x41a0fa
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes E9 1B FE FF FF: jmp 0x419f0b
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D1 FD FF FF: jmp 0x419ec6
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 964h
        cmp ebp, esp
        ; Exact mapped bytes E8 E6 AC 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xac
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
