// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004076E0 .. +0x2D5 bytes.
extern "C" __declspec(naked) void FUN_004076e0_004076E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 100h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 100h]
        mov ecx, 40h
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
        ; Exact mapped bytes E8 B6 D6 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 0b8h], eax
        cmp dword ptr [ebp - 0b8h], -1
        ; Exact mapped bytes 0F 84 4F 02 00 00: je 0x40799c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0bch], 0ffffffffh
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7B D6 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 0b4h]
        push eax
        push 5ch
        lea ecx, [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 56 D6 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], -1
        ; Exact mapped bytes 75 07: jne 0x4077a7
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0ffffffffh
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 50h
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        push ecx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 28 D6 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 0b4h]
        push edx
        push 4
        lea eax, [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        push ecx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 00 D6 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 0b0h]
        push eax
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E6 D5 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xd5
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 68h], edx
        mov dword ptr [ebp - 64h], 0ffffffffh
        mov dword ptr [ebp - 6ch], 0
        mov esi, esp
        push 2
        push 0
        push 0
        mov eax, dword ptr [ebp - 0b8h]
        push eax
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B0 D5 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xd5
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 0c0h], eax
        mov esi, esp
        push 0
        lea ecx, [ebp - 0b4h]
        push ecx
        push 50h
        lea edx, [ebp - 0b0h]
        push edx
        mov eax, dword ptr [ebp - 0b8h]
        push eax
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 82 D5 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd5
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 27: je 0x40789b
        __asm _emit 0x74
        __asm _emit 0x27
        mov esi, esp
        push 0
        lea ecx, [ebp - 0b4h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        push ecx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 55 D5 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xd5
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [ebp - 68h], -1
        ; Exact mapped bytes 74 4B: je 0x4078ec
        __asm _emit 0x74
        __asm _emit 0x4b
        mov esi, esp
        push 0
        push 0
        mov edx, dword ptr [ebp - 68h]
        add edx, 4ch
        push edx
        mov eax, dword ptr [ebp - 0b8h]
        push eax
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2E D5 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd5
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 0b4h]
        push ecx
        push 4
        lea edx, [ebp - 0c0h]
        push edx
        mov eax, dword ptr [ebp - 0b8h]
        push eax
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 06 D5 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xd5
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 49: jmp 0x407935
        __asm _emit 0xeb
        __asm _emit 0x49
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4ch
        push ecx
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E3 D4 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 0b4h]
        push eax
        push 4
        lea ecx, [ebp - 0c0h]
        push ecx
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BB D4 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 50h
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        push ecx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9A D4 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 0b4h]
        push edx
        push 4
        lea eax, [ebp - 0c0h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        push ecx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 72 D4 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5C D4 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes EB 03: jmp 0x40799f
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        add esp, 100h
        cmp ebp, esp
        ; Exact mapped bytes E8 41 D4 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
