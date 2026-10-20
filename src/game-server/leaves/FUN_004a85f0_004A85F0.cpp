// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A85F0 .. +0x180 bytes.
extern "C" __declspec(naked) void FUN_004a85f0_004A85F0() {
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
        ; Exact mapped bytes 75 51: jne 0x4a8659
        __asm _emit 0x75
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 100h], 0
        ; Exact mapped bytes 74 14: je 0x4a8628
        __asm _emit 0x74
        __asm _emit 0x14
        push 0abh
        push 5d089ch
        ; Exact mapped bytes E8 DD C3 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xc3
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a8628
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4a8608
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 12ch], 0
        ; Exact mapped bytes 74 14: je 0x4a864e
        __asm _emit 0x74
        __asm _emit 0x14
        push 0ach
        push 5d089ch
        ; Exact mapped bytes E8 B7 C3 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xc3
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a864e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4a862e
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes E9 10 01 00 00: jmp 0x4a8769
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
        ; Exact mapped bytes 75 05: jne 0x4a8675
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 F4 00 00 00: jmp 0x4a8769
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
        ; Exact mapped bytes E8 54 53 0A 00: call 0x54d9e6
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x53
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0d4h], 0
        ; Exact mapped bytes 75 14: jne 0x4a86b2
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b9h
        push 5d089ch
        ; Exact mapped bytes E8 53 C3 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xc3
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a86b2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4a8692
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
        ; Exact mapped bytes 74 14: je 0x4a86f2
        __asm _emit 0x74
        __asm _emit 0x14
        push 0bah
        push 5d089ch
        ; Exact mapped bytes E8 13 C3 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xc3
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a86f2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C0: jne 0x4a86b8
        __asm _emit 0x75
        __asm _emit 0xc0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0e4h]
        push eax
        ; Exact mapped bytes FF 15 64 25 5E 00: call dword ptr [0x5e2564]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0e4h], 0
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 100h], 0
        ; Exact mapped bytes 74 3B: je 0x4a875c
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 100h]
        push ecx
        ; Exact mapped bytes FF 15 F4 29 5E 00: call dword ptr [0x5e29f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4a8749
        __asm _emit 0x74
        __asm _emit 0x14
        push 0c1h
        push 5d089ch
        ; Exact mapped bytes E8 BC C2 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a8749
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x4a8721
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
