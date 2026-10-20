// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054C456 .. +0x198 bytes.
extern "C" __declspec(naked) void FUN_0054c456_0054C456() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0E: je 0x54c473
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 C0 BC 68 00: call dword ptr [0x68bcc0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54c487
        __asm _emit 0x75
        __asm _emit 0x14
        push 24ch
        push 679318h
        ; Exact mapped bytes E8 BE C8 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54c487
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x54c45f
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0E: je 0x54c4a1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 C0 BC 68 00: call dword ptr [0x68bcc0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54c4b5
        __asm _emit 0x75
        __asm _emit 0x14
        push 24dh
        push 679318h
        ; Exact mapped bytes E8 90 C8 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54c4b5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x54c48d
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 22: je 0x54c4e3
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes FF 15 C0 BC 68 00: call dword ptr [0x68bcc0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54c4e3
        __asm _emit 0x75
        __asm _emit 0x14
        push 24eh
        push 679318h
        ; Exact mapped bytes E8 62 C8 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54c4e3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x54c4bb
        __asm _emit 0x75
        __asm _emit 0xd2
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 A4 BC 68 00: call dword ptr [0x68bca4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 A4 BC 68 00: call dword ptr [0x68bca4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 09: jmp 0x54c517
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 8C C4 00 00 00: jl 0x54c5e5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 90 BC 68 00: call dword ptr [0x68bc90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x54c5e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 5A: je 0x54c59c
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 A4 BC 68 00: call dword ptr [0x68bca4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x54c561
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7D 31: jge 0x54c59a
        __asm _emit 0x7d
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 90 BC 68 00: call dword ptr [0x68bc90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 1C: jne 0x54c598
        __asm _emit 0x75
        __asm _emit 0x1c
        push 400h
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 84 BC 68 00: call dword ptr [0x68bc84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp + 10h], 0
        ; Exact mapped bytes EB 02: jmp 0x54c59a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB BE: jmp 0x54c558
        __asm _emit 0xeb
        __asm _emit 0xbe
        ; Exact mapped bytes EB 44: jmp 0x54c5e0
        __asm _emit 0xeb
        __asm _emit 0x44
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x54c5ae
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 2A: jge 0x54c5e0
        __asm _emit 0x7d
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 90 BC 68 00: call dword ptr [0x68bc90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 15: jne 0x54c5de
        __asm _emit 0x75
        __asm _emit 0x15
        push 400h
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 84 BC 68 00: call dword ptr [0x68bc84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x54c5e0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C5: jmp 0x54c5a5
        __asm _emit 0xeb
        __asm _emit 0xc5
        ; Exact mapped bytes E9 29 FF FF FF: jmp 0x54c50e
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
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
