// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050F595 .. +0x18D bytes.
extern "C" __declspec(naked) void FUN_0050f595_0050F595() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x50f5bb
        __asm _emit 0x75
        __asm _emit 0x14
        push 110h
        push 5c7374h
        ; Exact mapped bytes E8 4A 54 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50f5bb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x50f5a1
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x50f6a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 38: jne 0x50f60f
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FD 4E 03 00: call 0x5444dc
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x4e
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 07: jne 0x50f5ef
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 2A 01 00 00: jmp 0x50f719
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 14 1E 5E 00: call dword ptr [0x5e1e14]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x50f69b
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 39: jne 0x50f64e
        __asm _emit 0x75
        __asm _emit 0x39
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C1 4F 03 00: call 0x5445e2
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x4f
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x50f631
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E8 00 00 00: jmp 0x50f719
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 10 1E 5E 00: call dword ptr [0x5e1e10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 4D: jmp 0x50f69b
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 88 4F 03 00: call 0x5445e2
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x4f
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 07: jne 0x50f66a
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x50f719
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        push eax
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 1
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 0C 1E 5E 00: call dword ptr [0x5e1e0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        xor eax, eax
        cmp dword ptr [ebp - 4], 0
        sete al
        ; Exact mapped bytes EB 73: jmp 0x50f719
        __asm _emit 0xeb
        __asm _emit 0x73
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 94h], 0
        ; Exact mapped bytes 75 14: jne 0x50f6c6
        __asm _emit 0x75
        __asm _emit 0x14
        push 132h
        push 5c7374h
        ; Exact mapped bytes E8 3F 53 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50f6c6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x50f6a6
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 94h]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, 0fffh
        ; Exact mapped bytes 7C 14: jl 0x50f6f7
        __asm _emit 0x7c
        __asm _emit 0x14
        push 133h
        push 5c7374h
        ; Exact mapped bytes E8 0E 53 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50f6f7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x50f6cc
        __asm _emit 0x75
        __asm _emit 0xcf
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 94h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 6C 23 5E 00: call dword ptr [0x5e236c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
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
