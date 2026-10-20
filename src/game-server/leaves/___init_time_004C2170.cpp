// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C2170 .. +0xDB bytes.
extern "C" __declspec(naked) void ___init_time_004C2170() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 20 F0 5D 00 00: cmp dword ptr [0x5df020], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x4c2211
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 48h
        push 58ce44h
        push 2
        push 0ach
        push 1
        ; Exact mapped bytes E8 AA 84 FE FF: call 0x4aa640
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0A: jne 0x4c21ac
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x4c2247
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 9B 00 00 00: call 0x4c2250
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x4c21dd
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 1B 06 00 00: call 0x4c27e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 ED 8A FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, 1
        ; Exact mapped bytes EB 6A: jmp 0x4c2247
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes A3 F8 13 5D 00: mov dword ptr [0x5d13f8], eax
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0x13
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 60 F0 5D 00: mov ecx, dword ptr [0x5df060]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 EF 05 00 00: call 0x4c27e0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 2
        ; Exact mapped bytes 8B 15 60 F0 5D 00: mov edx, dword ptr [0x5df060]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 BE 8A FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes A3 60 F0 5D 00: mov dword ptr [0x5df060], eax
        __asm _emit 0xa3
        __asm _emit 0x60
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 36: jmp 0x4c2247
        __asm _emit 0xeb
        __asm _emit 0x36
        ; Exact mapped bytes C7 05 F8 13 5D 00 00 14 5D 00: mov dword ptr [0x5d13f8], 0x5d1400
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x13
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 60 F0 5D 00: mov ecx, dword ptr [0x5df060]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 B9 05 00 00: call 0x4c27e0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 2
        ; Exact mapped bytes 8B 15 60 F0 5D 00: mov edx, dword ptr [0x5df060]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 88 8A FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes C7 05 60 F0 5D 00 00 00 00 00: mov dword ptr [0x5df060], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
