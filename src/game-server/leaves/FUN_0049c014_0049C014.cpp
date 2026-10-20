// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049C014 .. +0x156 bytes.
extern "C" __declspec(naked) void FUN_0049c014_0049C014() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B8 0F 0A 00: call 0x53cfe5
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x0f
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x49c036
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 2E 01 00 00: jmp 0x49c164
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 24: je 0x49c060
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 6B F9 FF FF: call 0x49b9b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x49c051
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 13 01 00 00: jmp 0x49c164
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 B2 FE FF FF: call 0x49bf0c
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 6C: jne 0x49c0d4
        __asm _emit 0x75
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 8]
        and ecx, 20h
        test ecx, ecx
        ; Exact mapped bytes 74 5D: je 0x49c0cf
        __asm _emit 0x74
        __asm _emit 0x5d
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 49: je 0x49c0c1
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 44 FF FF FF: call 0x49bfc5
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A6 FD FF FF: call 0x49be31
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 2D: je 0x49c0c1
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 74 25: je 0x49c0c1
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 67 FE FF FF: call 0x49bf0c
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x49c0c1
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 83 FE FF FF: call 0x49bf3f
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x49c162
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 E1 FD FF FF: call 0x49bead
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x49c164
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 10: je 0x49c0ea
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 29 FE FF FF: call 0x49bf0c
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x49c0f6
        __asm _emit 0x75
        __asm _emit 0x0c
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 13: je 0x49c103
        __asm _emit 0x74
        __asm _emit 0x13
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0D: je 0x49c103
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 3C FE FF FF: call 0x49bf3f
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        and eax, 30h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x49c11d
        __asm _emit 0x74
        __asm _emit 0x10
        push 1
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 95 FD FF FF: call 0x49bead
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 43: jmp 0x49c160
        __asm _emit 0xeb
        __asm _emit 0x43
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 9F FE FF FF: call 0x49bfc5
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 01 FD FF FF: call 0x49be31
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 D0 FD FF FF: call 0x49bf0c
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        and eax, 20h
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x49c160
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 32 05 00: call 0x4ef3a1
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x49c160
        __asm _emit 0x74
        __asm _emit 0x0e
        push 1
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 50 FD FF FF: call 0x49bead
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 02: jmp 0x49c164
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 9F: jmp 0x49c103
        __asm _emit 0xeb
        __asm _emit 0x9f
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
