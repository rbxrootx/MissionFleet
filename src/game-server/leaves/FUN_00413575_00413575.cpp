// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413575 .. +0x2F5 bytes.
extern "C" __declspec(naked) void FUN_00413575_00413575() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 74h]
        mov ecx, 1dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 74h], ecx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        mov eax, ecx
        mov ecx, dword ptr [ebp - 74h]
        cdq
        idiv dword ptr [ecx + 138h]
        mov dword ptr [ebp - 8], edx
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [edx + 140h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 0F 84 91 02 00 00: je 0x413855
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 3
        push 0c0000000h
        mov eax, dword ptr [ebp - 74h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F4 51 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 0F 84 57 02 00 00: je 0x413850
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0ffffffffh
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 0F 84 33 02 00 00: je 0x41383d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BB 51 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 14h]
        push eax
        push 5ch
        lea ecx, [ebp - 70h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9C 51 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        push -1
        lea ecx, [ebp - 70h]
        push ecx
        push 1
        push 800h
        ; Exact mapped bytes FF 15 00 22 5E 00: call dword ptr [0x5e2200]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7A 51 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 C3 01 00 00: jne 0x413832
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], -1
        ; Exact mapped bytes 0F 84 FE 00 00 00: je 0x413777
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 74 7C: je 0x4136fb
        __asm _emit 0x74
        __asm _emit 0x7c
        mov esi, esp
        push 0
        push 0
        mov edx, dword ptr [ebp - 1ch]
        add edx, 58h
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 43 51 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 14h]
        push ecx
        push 4
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 24 51 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 54h
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 06 51 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x51
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 14h]
        push eax
        push 4
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E7 50 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x50
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 77: jmp 0x413772
        __asm _emit 0xeb
        __asm _emit 0x77
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp - 1ch]
        add eax, 58h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C7 50 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x50
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 14h]
        push edx
        push 4
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A8 50 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8D 50 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x50
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 14h]
        push ecx
        push 4
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6E 50 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x50
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x413830
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 74 79: je 0x4137f6
        __asm _emit 0x74
        __asm _emit 0x79
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 48 50 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x50
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 14h]
        push eax
        push 4
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 29 50 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x50
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp - 18h]
        add eax, 54h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0B 50 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x50
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 14h]
        push edx
        push 4
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 EC 4F 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x4f
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 3A: jmp 0x413830
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov esi, esp
        push 0
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CF 4F 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x4f
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 14h]
        push ecx
        push 4
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B0 4F 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x4f
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x41383d
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E9 C3 FD FF FF: jmp 0x413600
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, esp
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 90 4F 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x4f
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 03: jmp 0x413858
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        add esp, 74h
        cmp ebp, esp
        ; Exact mapped bytes E8 7C 4F 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x4f
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
