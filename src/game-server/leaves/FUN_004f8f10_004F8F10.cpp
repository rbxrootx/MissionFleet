// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F8F10 .. +0x14E bytes.
extern "C" __declspec(naked) void FUN_004f8f10_004F8F10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 9ch], 0
        ; Exact mapped bytes 75 05: jne 0x4f8f2d
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 28 01 00 00: jmp 0x4f9055
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 9ch]
        push edx
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4f8f5a
        __asm _emit 0x75
        __asm _emit 0x14
        push 1fah
        push 5c5db4h
        ; Exact mapped bytes E8 AB BA 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8f5a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f8f40
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 02: mov ax, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 4]
        add ecx, eax
        push ecx
        ; Exact mapped bytes FF 15 64 24 5E 00: call dword ptr [0x5e2464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 D4 00 00 00: jne 0x4f9055
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea edx, [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A6 FC FC FF: call 0x4c8c36
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfc
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x4f8f99
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x4f9055
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 98h], 0
        ; Exact mapped bytes 74 0F: je 0x4f8fb4
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 98h]
        push eax
        ; Exact mapped bytes E8 20 E0 00 00: call 0x506fd4
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 0
        ; Exact mapped bytes E8 67 FC FC FF: call 0x4c8c30
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xfc
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4f8fe6
        __asm _emit 0x7d
        __asm _emit 0x14
        push 209h
        push 5c5db4h
        ; Exact mapped bytes E8 1F BA 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8fe6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f8fcc
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 42h
        ; Exact mapped bytes FF 15 84 23 5E 00: call dword ptr [0x5e2384]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 98h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 98h]
        push ecx
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 2
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        push 0
        ; Exact mapped bytes E8 05 FC FC FF: call 0x4c8c30
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 1C: je 0x4f904c
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 98h]
        push eax
        ; Exact mapped bytes E8 95 DF 00 00: call 0x506fd4
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 98h], 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 D5 FB FC FF: call 0x4c8c2a
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xfb
        __asm _emit 0xfc
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
