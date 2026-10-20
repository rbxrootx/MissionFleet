// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D4E70 .. +0x1A3 bytes.
extern "C" __declspec(naked) void FUN_585d4e70_585D4E70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        sub edx, 100h
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 0F 87 75 01 00 00: ja 0x585d500d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 85 14 50 5D 58: jmp dword ptr [eax*4 + 0x585d5014]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x50
        __asm _emit 0x5d
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 FA EA FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfa
        __asm _emit 0xea
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 85 15 01 00 00: jne 0x585d4fcd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 20f18h], 0
        ; Exact mapped bytes 74 30: je 0x585d4ef4
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D FC 1F 96 58: mov ecx, dword ptr [0x58961ffc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB 6E 1E 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x6e
        __asm _emit 0x1e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC 1F 96 58: mov ecx, dword ptr [0x58961ffc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], eax
        push 0
        ; Exact mapped bytes 8B 0D FC 1F 96 58: mov ecx, dword ptr [0x58961ffc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        nop
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x585d4fc0
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 3dh
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x585d4fa3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 5bh
        ; Exact mapped bytes 74 0B: je 0x585d4f18
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 0ch], 5dh
        ; Exact mapped bytes 74 4B: je 0x585d4f5e
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes E9 A8 00 00 00: jmp 0x585d4fc0
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 21004h], 0
        ; Exact mapped bytes 74 38: je 0x585d4f5c
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10700h]
        sub edx, 64h
        cmp edx, 1f4h
        ; Exact mapped bytes 7D 0F: jge 0x585d4f47
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10700h], 1f4h
        ; Exact mapped bytes EB 15: jmp 0x585d4f5c
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10700h]
        sub edx, 64h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10700h], edx
        ; Exact mapped bytes EB 62: jmp 0x585d4fc0
        __asm _emit 0xeb
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 21004h], 0
        ; Exact mapped bytes 74 37: je 0x585d4fa1
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10700h]
        add eax, 64h
        cmp eax, 7d0h
        ; Exact mapped bytes 7E 0F: jle 0x585d4f8c
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10700h], 7d0h
        ; Exact mapped bytes EB 15: jmp 0x585d4fa1
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10700h]
        add eax, 64h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10700h], eax
        ; Exact mapped bytes EB 1D: jmp 0x585d4fc0
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10780h]
        and eax, 1
        ; Exact mapped bytes 74 0F: je 0x585d4fc0
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0
        push 28h
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 6B 01 00: call 0x585ebad0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 64 21 FF FF: call 0x585c7130
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3E: jmp 0x585d500d
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 21ac4h], 0
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 10h
        ; Exact mapped bytes 75 0D: jne 0x585d4ff2
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 21f04h], 0
        ; Exact mapped bytes EB 19: jmp 0x585d500d
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D0 B7 FE FF: call 0x585c07d0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 BA FF FF: call 0x585d0a20
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
