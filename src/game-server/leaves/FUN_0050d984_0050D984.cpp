// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050D984 .. +0xF2 bytes.
extern "C" __declspec(naked) void FUN_0050d984_0050D984() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 2A: jne 0x50d9c0
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes E8 0D 01 00 00: call 0x50daa8
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0D: je 0x50d9b1
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A0 E1 02 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0F: jmp 0x50d9c0
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes E8 4A 7C 02 00: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8F E1 02 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 24: je 0x50d9ea
        __asm _emit 0x74
        __asm _emit 0x24
        push -10h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x50d9ea
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D6: jmp 0x50d9c0
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 02: jne 0x50d9fe
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 15: jmp 0x50da13
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB E3: jmp 0x50d9f6
        __asm _emit 0xeb
        __asm _emit 0xe3
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 13: jne 0x50da2c
        __asm _emit 0x75
        __asm _emit 0x13
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0D: je 0x50da2c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 DC 26 5E 00: call dword ptr [0x5e26dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 3B: je 0x50da6d
        __asm _emit 0x74
        __asm _emit 0x3b
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 2C: je 0x50da64
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 54 26 5E 00: call dword ptr [0x5e2654]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x50da64
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 16: je 0x50da64
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], edx
        push 0
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 84 26 5E 00: call dword ptr [0x5e2684]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x50da6d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
