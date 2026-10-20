// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00403420 .. +0x2DD bytes.
extern "C" __declspec(naked) void FUN_00403420_00403420() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 110h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 110h]
        mov ecx, 44h
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
        ; Exact mapped bytes E8 76 19 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x19
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0c8h], eax
        cmp dword ptr [ebp - 0c8h], -1
        ; Exact mapped bytes 0F 84 57 02 00 00: je 0x4036e4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 138h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 138h], edx
        mov esi, esp
        push 0
        lea ecx, [ebp - 0c4h]
        push ecx
        push 3ch
        mov edx, dword ptr [ebp - 4]
        add edx, 108h
        push edx
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 23 19 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x19
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0cch], 0ffffffffh
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 FB 18 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 0c4h]
        push eax
        push 5ch
        lea ecx, [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D6 18 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 0bch]
        push ecx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BC 18 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 7ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 74h], eax
        mov dword ptr [ebp - 70h], 0ffffffffh
        mov dword ptr [ebp - 6ch], 0ffffffffh
        mov dword ptr [ebp - 68h], 0ffffffffh
        mov dword ptr [ebp - 78h], 0
        mov dword ptr [ebp - 64h], 0
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0c0h], ecx
        mov esi, esp
        push 2
        push 0
        push 0
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 68 18 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0d0h], eax
        mov esi, esp
        push 0
        lea eax, [ebp - 0c4h]
        push eax
        push 60h
        lea ecx, [ebp - 0c0h]
        push ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3A 18 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 27: je 0x4035e3
        __asm _emit 0x74
        __asm _emit 0x27
        mov esi, esp
        push 0
        lea eax, [ebp - 0c4h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0D 18 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [ebp - 74h], -1
        ; Exact mapped bytes 74 4B: je 0x403634
        __asm _emit 0x74
        __asm _emit 0x4b
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp - 74h]
        add ecx, 50h
        push ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E6 17 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 0c4h]
        push eax
        push 4
        lea ecx, [ebp - 0d0h]
        push ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BE 17 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 49: jmp 0x40367d
        __asm _emit 0xeb
        __asm _emit 0x49
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 4ch
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        push ecx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9B 17 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 0c4h]
        push edx
        push 4
        lea eax, [ebp - 0d0h]
        push eax
        mov ecx, dword ptr [ebp - 0c8h]
        push ecx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 73 17 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        add edx, 50h
        push edx
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 52 17 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 0c4h]
        push ecx
        push 4
        lea edx, [ebp - 0d0h]
        push edx
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2A 17 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp - 0c8h]
        push ecx
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 14 17 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes EB 03: jmp 0x4036e7
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        add esp, 110h
        cmp ebp, esp
        ; Exact mapped bytes E8 F9 16 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x16
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
