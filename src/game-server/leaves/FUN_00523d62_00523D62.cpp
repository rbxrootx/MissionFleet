// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00523D62 .. +0x215 bytes.
extern "C" __declspec(naked) void FUN_00523d62_00523D62() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x523d88
        __asm _emit 0x75
        __asm _emit 0x14
        push 19ah
        push 5c8174h
        ; Exact mapped bytes E8 7D 0C 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x523d88
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x523d6e
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8C 0C FD FF: call 0x4f4a34
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x523db6
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 B8 01 00 00: jmp 0x523f6e
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx]
        cmp ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 74 1B: je 0x523dde
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], eax
        ; Exact mapped bytes 74 07: je 0x523dde
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 90 01 00 00: jmp 0x523f6e
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0d1h
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 9
        ; Exact mapped bytes 0F 87 68 01 00 00: ja 0x523f65
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 24 95 77 3F 52 00: jmp dword ptr [edx*4 + 0x523f77]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x77
        __asm _emit 0x3f
        __asm _emit 0x52
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2A 92 01 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push 584cf8h
        ; Exact mapped bytes E8 E9 72 FD FF: call 0x4fb103
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 24: je 0x523e4a
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 24h]
        and ecx, 10h
        test ecx, ecx
        ; Exact mapped bytes 75 17: jne 0x523e4a
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 84h], 0
        ; Exact mapped bytes 75 0B: jne 0x523e4a
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0ffffffffh
        ; Exact mapped bytes EB 1A: jmp 0x523e64
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 E0 00 00 00: call dword ptr [edx + 0xe0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        neg eax
        dec eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes E9 00 01 00 00: jmp 0x523f69
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 E4 00 00 00: call dword ptr [eax + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        inc eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes E9 E3 00 00 00: jmp 0x523f69
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 D8 00 00 00: call dword ptr [eax + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        and al, 0feh
        add eax, 2
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes E9 C2 00 00 00: jmp 0x523f69
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 DC 00 00 00: call dword ptr [eax + 0xdc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x523f69
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        inc eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x523f69
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 3024h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 40 FE FF FF: call 0x523d24
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x523f04
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 F0 00 00 00: call dword ptr [eax + 0xf0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 54 FD FF FF: call 0x523c53
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 63: jmp 0x523f69
        __asm _emit 0xeb
        __asm _emit 0x63
        push 3023h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 11 FE FF FF: call 0x523d24
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x523f33
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 EC 00 00 00: call dword ptr [eax + 0xec]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 25 FD FF FF: call 0x523c53
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 34: jmp 0x523f69
        __asm _emit 0xeb
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 F4 00 00 00: call dword ptr [eax + 0xf4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        inc eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 1A: jmp 0x523f69
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0
        push 0e146h
        push 111h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 76 7C 01 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 04: jmp 0x523f69
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x523f6e
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
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
