// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052483F .. +0x158 bytes.
extern "C" __declspec(naked) void FUN_0052483f_0052483F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BC 3A FD FF: call 0x4f831f
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x3a
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x524871
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 1D 01 00 00: jmp 0x52498e
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 06: je 0x52487d
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 75 16: jne 0x524893
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 8]
        and ecx, 8000h
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x524893
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 8], 0f000h
        ; Exact mapped bytes 72 07: jb 0x52489a
        __asm _emit 0x72
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F4 00 00 00: jmp 0x52498e
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 97 87 01 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 66: je 0x524911
        __asm _emit 0x74
        __asm _emit 0x66
        ; Exact mapped bytes 8B 15 78 E8 5D 00: mov edx, dword ptr [0x5de878]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        and edx, 8
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x5248c9
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        push 5c8240h
        ; Exact mapped bytes E8 4F B3 FA FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xb3
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 14: jne 0x5248e5
        __asm _emit 0x75
        __asm _emit 0x14
        push 2cah
        push 5c8174h
        ; Exact mapped bytes E8 20 01 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5248e5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x5248c9
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x524911
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 7D: jmp 0x52498e
        __asm _emit 0xeb
        __asm _emit 0x7d
        ; Exact mapped bytes E8 A3 4E FD FF: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x4e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 43: je 0x524962
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes A1 78 E8 5D 00: mov eax, dword ptr [0x5de878]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x52493c
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 5c826ch
        ; Exact mapped bytes E8 DC B2 FA FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xb2
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x524962
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 2C: jmp 0x52498e
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes A1 78 E8 5D 00: mov eax, dword ptr [0x5de878]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x52498c
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov eax, dword ptr [eax]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 5c8290h
        ; Exact mapped bytes E8 8C B2 FA FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xb2
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        xor eax, eax
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
