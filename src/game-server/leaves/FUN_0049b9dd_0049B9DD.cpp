// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049B9DD .. +0x11A bytes.
extern "C" __declspec(naked) void FUN_0049b9dd_0049B9DD() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 11: jne 0x49b9fc
        __asm _emit 0x75
        __asm _emit 0x11
        push 55h
        push 5cb140h
        ; Exact mapped bytes E8 09 90 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x90
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49b9fc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x49b9e3
        __asm _emit 0x75
        __asm _emit 0xe1
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1E: jne 0x49ba26
        __asm _emit 0x75
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E2 14 0A 00: call 0x53cef2
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 08: jne 0x49ba21
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 CF 00 00 00: jmp 0x49baf0
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x49baee
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 6B 14 0A 00: call 0x53ce9b
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 27: jne 0x49ba5b
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 FD 15 0A 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x15
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 DA FE FF FF: call 0x49b920
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 08: je 0x49ba57
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 02: jne 0x49ba59
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB AF: jmp 0x49ba08
        __asm _emit 0xeb
        __asm _emit 0xaf
        ; Exact mapped bytes EB CB: jmp 0x49ba26
        __asm _emit 0xeb
        __asm _emit 0xcb
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x49ba72
        __asm _emit 0x75
        __asm _emit 0x11
        push 6eh
        push 5cb140h
        ; Exact mapped bytes E8 93 8F 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x8f
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49ba72
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x49ba5b
        __asm _emit 0x75
        __asm _emit 0xe3
        push 2
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 19 14 0A 00: call 0x53ce9b
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp + 0ch], eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 22 FF FF FF: call 0x49b9b0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x49bae9
        __asm _emit 0x74
        __asm _emit 0x54
        mov eax, dword ptr [ebp + 10h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x49baab
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 44 0C 0A 00: call 0x53c6eb
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x0c
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x49bac1
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 22: je 0x49bad7
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E4 38 05 00: call 0x4ef3a1
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x49bad7
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 0B FF FF FF: call 0x49b9dd
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes EB 12: jmp 0x49bae9
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 F7 FE FF FF: call 0x49b9dd
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 0ch], eax
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x49baf0
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 95: jmp 0x49ba85
        __asm _emit 0xeb
        __asm _emit 0x95
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
