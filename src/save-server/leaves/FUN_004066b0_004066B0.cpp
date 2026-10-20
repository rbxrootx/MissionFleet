// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004066B0 .. +0x30F bytes.
extern "C" __declspec(naked) void FUN_004066b0_004066B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b4h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0b4h]
        mov ecx, 2dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        mov eax, ecx
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 13ch]
        mov dword ptr [ebp - 8], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 144h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 0F 84 91 02 00 00: je 0x4069a6
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
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        push eax
        ; Exact mapped bytes FF 15 D0 B7 68 00: call dword ptr [0x68b7d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B3 E6 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xe6
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], -1
        ; Exact mapped bytes 0F 84 57 02 00 00: je 0x4069a1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], 0ffffffffh
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 0F 84 33 02 00 00: je 0x40698e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7A E6 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe6
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 70h]
        push eax
        push 5ch
        lea ecx, [ebp - 6ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5B E6 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xe6
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        push -1
        lea ecx, [ebp - 6ch]
        push ecx
        push 1
        push 800h
        ; Exact mapped bytes FF 15 DC B7 68 00: call dword ptr [0x68b7dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 39 E6 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe6
        __asm _emit 0x05
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 C3 01 00 00: jne 0x406983
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 0F 84 FE 00 00 00: je 0x4068c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], -1
        ; Exact mapped bytes 74 7C: je 0x40684c
        __asm _emit 0x74
        __asm _emit 0x7c
        mov esi, esp
        push 0
        push 0
        mov edx, dword ptr [ebp - 18h]
        add edx, 58h
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 02 E6 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe6
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 70h]
        push ecx
        push 4
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E3 E5 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xe5
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 54h
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C5 E5 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xe5
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 70h]
        push eax
        push 4
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A6 E5 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xe5
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 77: jmp 0x4068c3
        __asm _emit 0xeb
        __asm _emit 0x77
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp - 18h]
        add eax, 58h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 86 E5 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xe5
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 70h]
        push edx
        push 4
        lea eax, [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 67 E5 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xe5
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4C E5 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe5
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 70h]
        push ecx
        push 4
        lea edx, [ebp - 74h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2D E5 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xe5
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x406981
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], -1
        ; Exact mapped bytes 74 79: je 0x406947
        __asm _emit 0x74
        __asm _emit 0x79
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 07 E5 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xe5
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 70h]
        push eax
        push 4
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E8 E4 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp - 14h]
        add eax, 54h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CA E4 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 70h]
        push edx
        push 4
        lea eax, [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AB E4 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 3A: jmp 0x406981
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov esi, esp
        push 0
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8E E4 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 70h]
        push ecx
        push 4
        lea edx, [ebp - 74h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6F E4 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x40698e
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes E9 C3 FD FF FF: jmp 0x406751
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, esp
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4F E4 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 03: jmp 0x4069a9
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        add esp, 0b4h
        cmp ebp, esp
        ; Exact mapped bytes E8 37 E4 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
