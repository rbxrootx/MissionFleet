// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048D62D .. +0x12F bytes.
extern "C" __declspec(naked) void _xEnumDisplayMonitors_16_0048D62D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        ; Exact mapped bytes E8 18 FC FF FF: call 0x48d250
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x48d657
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 14 E5 5D 00: call dword ptr [0x5de514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E9 FF 00 00 00: jmp 0x48d756
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 07: jne 0x48d664
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F2 00 00 00: jmp 0x48d756
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ch], 0
        push 0
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 1
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x48d71f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 54 20 5E 00: call dword ptr [0x5e2054]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 70: je 0x48d719
        __asm _emit 0x74
        __asm _emit 0x70
        cmp dword ptr [ebp - 2ch], 1
        ; Exact mapped bytes 74 63: je 0x48d712
        __asm _emit 0x74
        __asm _emit 0x63
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 50 20 5E 00: call dword ptr [0x5e2050]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x48d6c8
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x48d756
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        neg edx
        push edx
        mov eax, dword ptr [ebp - 18h]
        neg eax
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 8C 28 5E 00: call dword ptr [0x5e288c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        lea edx, [ebp - 28h]
        push edx
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 88 28 5E 00: call dword ptr [0x5e2888]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x48d712
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 16: je 0x48d710
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 88 28 5E 00: call dword ptr [0x5e2888]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x48d712
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0B: jmp 0x48d71d
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, 1
        ; Exact mapped bytes EB 3D: jmp 0x48d756
        __asm _emit 0xeb
        __asm _emit 0x3d
        xor eax, eax
        ; Exact mapped bytes EB 39: jmp 0x48d756
        __asm _emit 0xeb
        __asm _emit 0x39
        ; Exact mapped bytes EB 23: jmp 0x48d742
        __asm _emit 0xeb
        __asm _emit 0x23
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 1D: je 0x48d742
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 88 28 5E 00: call dword ptr [0x5e2888]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x48d742
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 14: jmp 0x48d756
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 14h]
        push edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 12340042h
        ; Exact mapped bytes FF 55 10: call dword ptr [ebp + 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x10
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
