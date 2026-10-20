// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B8A20 .. +0x1DB bytes.
extern "C" __declspec(naked) void FUN_584b8a20_584B8A20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e737h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 80h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], ecx
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 7ch], ecx
        ; Exact mapped bytes EB 0B: jmp 0x584b8a64
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 CF CC FD FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 1D: je 0x584b8a87
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 6A 0A 00 00: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 64 81 39 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x81
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x584b8a85
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x584b8a87
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D2: jmp 0x584b8a59
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov eax, dword ptr [ebp + 8]
        push eax
        push 589604e0h
        ; Exact mapped bytes E8 4B 81 39 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x81
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 84 40 01 00 00: je 0x584b8be0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 0F 85 36 01 00 00: jne 0x584b8be0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0b4h
        ; Exact mapped bytes E8 50 85 37 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 26: je 0x584b8aed
        __asm _emit 0x74
        __asm _emit 0x26
        push 40h
        push 0
        push 0
        push 0ffffff38h
        push 0ffffff38h
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        push -1
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 8B B0 00 00: call 0x584c3b70
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584b8af7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 88h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 78h], eax
        mov byte ptr [ebp - 70h], 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 6fh]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
        ; Exact mapped bytes 66 89 45 AA: mov word ptr [ebp - 0x56], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xaa
        mov ecx, 1
        imul edx, ecx, 0
        mov byte ptr [ebp + edx - 54h], 0
        mov dword ptr [ebp - 3ch], 0
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 28h], 0
        xor eax, eax
        ; Exact mapped bytes 66 89 45 D4: mov word ptr [ebp - 0x2c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd4
        lea ecx, [ebp - 70h]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 1A C0 00 00: call 0x584c4b80
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 D0 D2 FC FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 66 D3 FC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 74h]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 75 14: jne 0x584b8b98
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [eax + 78h], ecx
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [edx + 7ch], eax
        ; Exact mapped bytes EB 33: jmp 0x584b8bcb
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 CD 11 00 00: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx + 7ch]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 7E 6C FE FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [eax + 7ch], ecx
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [edx + 88h]
        add eax, 1
        mov ecx, dword ptr [ebp - 74h]
        mov dword ptr [ecx + 88h], eax
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 5B 84 37 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
