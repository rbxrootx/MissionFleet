// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00449BDD .. +0x12F bytes.
extern "C" __declspec(naked) void _xEnumDisplayMonitors_16_00449BDD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        ; Exact mapped bytes E8 18 FC FF FF: call 0x449800
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x449c07
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
        ; Exact mapped bytes FF 15 2C 6A 68 00: call dword ptr [0x686a2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 FF 00 00 00: jmp 0x449d06
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 07: jne 0x449c14
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F2 00 00 00: jmp 0x449d06
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ch], 0
        push 0
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 1
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x449ccf
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
        ; Exact mapped bytes FF 15 98 B6 68 00: call dword ptr [0x68b698]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 70: je 0x449cc9
        __asm _emit 0x74
        __asm _emit 0x70
        cmp dword ptr [ebp - 2ch], 1
        ; Exact mapped bytes 74 63: je 0x449cc2
        __asm _emit 0x74
        __asm _emit 0x63
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 9C B6 68 00: call dword ptr [0x68b69c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x449c78
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x449d06
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
        ; Exact mapped bytes FF 15 5C BF 68 00: call dword ptr [0x68bf5c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [ebp - 28h]
        push edx
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 60 BF 68 00: call dword ptr [0x68bf60]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x449cc2
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 16: je 0x449cc0
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 60 BF 68 00: call dword ptr [0x68bf60]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x449cc2
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0B: jmp 0x449ccd
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, 1
        ; Exact mapped bytes EB 3D: jmp 0x449d06
        __asm _emit 0xeb
        __asm _emit 0x3d
        xor eax, eax
        ; Exact mapped bytes EB 39: jmp 0x449d06
        __asm _emit 0xeb
        __asm _emit 0x39
        ; Exact mapped bytes EB 23: jmp 0x449cf2
        __asm _emit 0xeb
        __asm _emit 0x23
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 1D: je 0x449cf2
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 60 BF 68 00: call dword ptr [0x68bf60]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x449cf2
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 14: jmp 0x449d06
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
