// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054D9E6 .. +0x198 bytes.
extern "C" __declspec(naked) void FUN_0054d9e6_0054D9E6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0E: je 0x54da03
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 1C 28 5E 00: call dword ptr [0x5e281c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54da17
        __asm _emit 0x75
        __asm _emit 0x14
        push 24ch
        push 5ccb40h
        ; Exact mapped bytes E8 EE 6F FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54da17
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x54d9ef
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0E: je 0x54da31
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 1C 28 5E 00: call dword ptr [0x5e281c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54da45
        __asm _emit 0x75
        __asm _emit 0x14
        push 24dh
        push 5ccb40h
        ; Exact mapped bytes E8 C0 6F FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54da45
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x54da1d
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 22: je 0x54da73
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes FF 15 1C 28 5E 00: call dword ptr [0x5e281c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54da73
        __asm _emit 0x75
        __asm _emit 0x14
        push 24eh
        push 5ccb40h
        ; Exact mapped bytes E8 92 6F FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54da73
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x54da4b
        __asm _emit 0x75
        __asm _emit 0xd2
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 00 28 5E 00: call dword ptr [0x5e2800]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 00 28 5E 00: call dword ptr [0x5e2800]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 09: jmp 0x54daa7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 8C C4 00 00 00: jl 0x54db75
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
        ; Exact mapped bytes FF 15 EC 27 5E 00: call dword ptr [0x5e27ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x54db70
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 5A: je 0x54db2c
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 00 28 5E 00: call dword ptr [0x5e2800]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x54daf1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7D 31: jge 0x54db2a
        __asm _emit 0x7d
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 EC 27 5E 00: call dword ptr [0x5e27ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 1C: jne 0x54db28
        __asm _emit 0x75
        __asm _emit 0x1c
        push 400h
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 E0 27 5E 00: call dword ptr [0x5e27e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp + 10h], 0
        ; Exact mapped bytes EB 02: jmp 0x54db2a
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB BE: jmp 0x54dae8
        __asm _emit 0xeb
        __asm _emit 0xbe
        ; Exact mapped bytes EB 44: jmp 0x54db70
        __asm _emit 0xeb
        __asm _emit 0x44
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x54db3e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 2A: jge 0x54db70
        __asm _emit 0x7d
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 EC 27 5E 00: call dword ptr [0x5e27ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 15: jne 0x54db6e
        __asm _emit 0x75
        __asm _emit 0x15
        push 400h
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 E0 27 5E 00: call dword ptr [0x5e27e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x54db70
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C5: jmp 0x54db35
        __asm _emit 0xeb
        __asm _emit 0xc5
        ; Exact mapped bytes E9 29 FF FF FF: jmp 0x54da9e
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
