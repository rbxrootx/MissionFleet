// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00403C00 .. +0x3BC bytes.
extern "C" __declspec(naked) void FUN_00403c00_00403C00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 114h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 114h]
        mov ecx, 45h
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
        mov dword ptr [ebp - 0c4h], 0ffffffffh
        mov dword ptr [ebp - 0c8h], 0
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 0
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
        ; Exact mapped bytes E8 82 11 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x11
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0cch], eax
        cmp dword ptr [ebp - 0cch], -1
        ; Exact mapped bytes 0F 84 22 03 00 00: je 0x403fa3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0d0h], 0ffffffffh
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0cch]
        push edx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 47 11 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x11
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 0c0h]
        push eax
        push 60h
        lea ecx, [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 0cch]
        push edx
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 22 11 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x11
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 54h
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 01 11 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x11
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 0c0h]
        push edx
        push 4
        lea eax, [ebp - 0d4h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D9 10 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 10h], -1
        ; Exact mapped bytes 75 07: jne 0x403d2d
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0ffffffffh
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A5 10 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 0c0h]
        push edx
        push 60h
        lea eax, [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 80 10 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        add edx, 58h
        push edx
        mov eax, dword ptr [ebp - 0cch]
        push eax
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5F 10 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 0c0h]
        push ecx
        push 4
        lea edx, [ebp - 0d0h]
        push edx
        mov eax, dword ptr [ebp - 0cch]
        push eax
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 37 10 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 0b4h]
        push edx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 1D 10 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 6ch], ecx
        mov dword ptr [ebp - 68h], 0ffffffffh
        mov dword ptr [ebp - 70h], 0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0bch], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0b8h], eax
        cmp dword ptr [ebp - 0c4h], -1
        ; Exact mapped bytes 75 24: jne 0x403e2c
        __asm _emit 0x75
        __asm _emit 0x24
        mov esi, esp
        push 2
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CC 0F 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 21: jmp 0x403e4d
        __asm _emit 0xeb
        __asm _emit 0x21
        mov esi, esp
        push 0
        push 0
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        mov eax, dword ptr [ebp - 0cch]
        push eax
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A3 0F 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 0c0h]
        push ecx
        push 58h
        lea edx, [ebp - 0bch]
        push edx
        mov eax, dword ptr [ebp - 0cch]
        push eax
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7B 0F 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 27: je 0x403ea2
        __asm _emit 0x74
        __asm _emit 0x27
        mov esi, esp
        push 0
        lea ecx, [ebp - 0c0h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4E 0F 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [ebp - 6ch], -1
        ; Exact mapped bytes 74 4B: je 0x403ef3
        __asm _emit 0x74
        __asm _emit 0x4b
        mov esi, esp
        push 0
        push 0
        mov edx, dword ptr [ebp - 6ch]
        add edx, 54h
        push edx
        mov eax, dword ptr [ebp - 0cch]
        push eax
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 27 0F 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 0c0h]
        push ecx
        push 4
        lea edx, [ebp - 0c4h]
        push edx
        mov eax, dword ptr [ebp - 0cch]
        push eax
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FF 0E 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x0e
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 49: jmp 0x403f3c
        __asm _emit 0xeb
        __asm _emit 0x49
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 54h
        push ecx
        mov edx, dword ptr [ebp - 0cch]
        push edx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DC 0E 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x0e
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 0c0h]
        push eax
        push 4
        lea ecx, [ebp - 0c4h]
        push ecx
        mov edx, dword ptr [ebp - 0cch]
        push edx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B4 0E 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x0e
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 58h
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 93 0E 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x0e
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 0c0h]
        push edx
        push 4
        lea eax, [ebp - 0c4h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6B 0E 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x0e
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp - 0cch]
        push edx
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 55 0E 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x0e
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes EB 03: jmp 0x403fa6
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        add esp, 114h
        cmp ebp, esp
        ; Exact mapped bytes E8 3A 0E 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x0e
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
