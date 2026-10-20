// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00521CDF .. +0x198 bytes.
extern "C" __declspec(naked) void FUN_00521cdf_00521CDF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 2bh
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0eh
        ; Exact mapped bytes 0F 87 4B 01 00 00: ja 0x521e4f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [eax + 521e93h]
        ; Exact mapped bytes FF 24 95 77 1E 52 00: jmp dword ptr [edx*4 + 0x521e77]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x77
        __asm _emit 0x1e
        __asm _emit 0x52
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 11: je 0x521d2d
        __asm _emit 0x74
        __asm _emit 0x11
        push 7bh
        push 5c6838h
        ; Exact mapped bytes E8 D8 2C 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x521d2d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x521d16
        __asm _emit 0x75
        __asm _emit 0xe3
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 C0 00 00 00: call dword ptr [edx + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 1F 01 00 00: jmp 0x521e69
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 11: je 0x521d61
        __asm _emit 0x74
        __asm _emit 0x11
        push 7fh
        push 5c6838h
        ; Exact mapped bytes E8 A4 2C 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x521d61
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x521d4a
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 EB 00 00 00: jmp 0x521e69
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x521d98
        __asm _emit 0x75
        __asm _emit 0x14
        push 83h
        push 5c6838h
        ; Exact mapped bytes E8 6D 2C 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x521d98
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x521d7e
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x521e69
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 14: je 0x521dd4
        __asm _emit 0x74
        __asm _emit 0x14
        push 87h
        push 5c6838h
        ; Exact mapped bytes E8 31 2C 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x521dd4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x521dba
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 CC 00 00 00: call dword ptr [edx + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 7B: jmp 0x521e69
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov eax, dword ptr [ebp + 0ch]
        shr eax, 10h
        and eax, 0ffffh
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 4B: jmp 0x521e69
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov edx, dword ptr [ebp + 0ch]
        shr edx, 10h
        and edx, 0ffffh
        and edx, 0ffffh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 D4 00 00 00: call dword ptr [edx + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 1A: jmp 0x521e69
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 3E FD FF: call 0x4f5cba
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x3e
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x521e6e
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
