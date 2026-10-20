// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00464C00 .. +0x180 bytes.
extern "C" __declspec(naked) void FUN_00464c00_00464C00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0e4h], 0
        ; Exact mapped bytes 75 51: jne 0x464c69
        __asm _emit 0x75
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 100h], 0
        ; Exact mapped bytes 74 14: je 0x464c38
        __asm _emit 0x74
        __asm _emit 0x14
        push 0abh
        push 67d074h
        ; Exact mapped bytes E8 0D 41 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x41
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x464c38
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x464c18
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 12ch], 0
        ; Exact mapped bytes 74 14: je 0x464c5e
        __asm _emit 0x74
        __asm _emit 0x14
        push 0ach
        push 67d074h
        ; Exact mapped bytes E8 E7 40 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x40
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x464c5e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x464c3e
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes E9 10 01 00 00: jmp 0x464d79
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 14 01 00 00: call dword ptr [eax + 0x114]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x464c85
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 F4 00 00 00: jmp 0x464d79
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 12ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0e4h]
        push edx
        ; Exact mapped bytes E8 B4 77 0E 00: call 0x54c456
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x77
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0d4h], 0
        ; Exact mapped bytes 75 14: jne 0x464cc2
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b9h
        push 67d074h
        ; Exact mapped bytes E8 83 40 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x40
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x464cc2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x464ca2
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0e4h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0d4h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d4h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 2C: call dword ptr [eax + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x2c
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x464d02
        __asm _emit 0x74
        __asm _emit 0x14
        push 0bah
        push 67d074h
        ; Exact mapped bytes E8 43 40 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x40
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x464d02
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C0: jne 0x464cc8
        __asm _emit 0x75
        __asm _emit 0xc0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0e4h]
        push eax
        ; Exact mapped bytes FF 15 5C BC 68 00: call dword ptr [0x68bc5c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0e4h], 0
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 100h], 0
        ; Exact mapped bytes 74 3B: je 0x464d6c
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 100h]
        push ecx
        ; Exact mapped bytes FF 15 8C C2 68 00: call dword ptr [0x68c28c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x464d59
        __asm _emit 0x74
        __asm _emit 0x14
        push 0c1h
        push 67d074h
        ; Exact mapped bytes E8 EC 3F 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x3f
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x464d59
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x464d31
        __asm _emit 0x75
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 100h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 12ch], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
