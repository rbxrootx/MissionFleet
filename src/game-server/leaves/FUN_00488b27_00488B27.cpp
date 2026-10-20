// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00488B27 .. +0x260 bytes.
extern "C" __declspec(naked) void FUN_00488b27_00488B27() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 2741h
        ; Exact mapped bytes 0F 8F A4 00 00 00: jg 0x488bfc
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 2741h
        ; Exact mapped bytes 0F 84 96 01 00 00: je 0x488cfb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 2734h
        ; Exact mapped bytes 7F 6E: jg 0x488bdc
        __asm _emit 0x7f
        __asm _emit 0x6e
        cmp dword ptr [ebp - 0ch], 2734h
        ; Exact mapped bytes 0F 84 D8 00 00 00: je 0x488c53
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 271eh
        ; Exact mapped bytes 7F 39: jg 0x488bbd
        __asm _emit 0x7f
        __asm _emit 0x39
        cmp dword ptr [ebp - 0ch], 271eh
        ; Exact mapped bytes 0F 84 CE 00 00 00: je 0x488c5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 3e3h
        ; Exact mapped bytes 0F 84 42 01 00 00: je 0x488ce0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 2714h
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x488c47
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 271dh
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x488c3b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 74 01 00 00: jmp 0x488d31
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 2726h
        ; Exact mapped bytes 0F 84 FB 00 00 00: je 0x488cc5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 2733h
        ; Exact mapped bytes 0F 84 DC 00 00 00: je 0x488cb3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 55 01 00 00: jmp 0x488d31
        __asm _emit 0xe9
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 2735h
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0bh
        ; Exact mapped bytes 0F 87 3F 01 00 00: ja 0x488d31
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 95 87 8D 48 00: jmp dword ptr [edx*4 + 0x488d87]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x87
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 2742h
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 2bh
        ; Exact mapped bytes 0F 87 20 01 00 00: ja 0x488d31
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        xor ecx, ecx
        mov cl, byte ptr [edx + 488debh]
        ; Exact mapped bytes FF 24 8D B7 8D 48 00: jmp dword ptr [ecx*4 + 0x488db7]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xb7
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 5c4610h
        ; Exact mapped bytes E9 09 01 00 00: jmp 0x488d38
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 5c4624h
        ; Exact mapped bytes E9 FD 00 00 00: jmp 0x488d38
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 5c4634h
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x488d38
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 5c4640h
        ; Exact mapped bytes E9 E5 00 00 00: jmp 0x488d38
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 5c464ch
        ; Exact mapped bytes E9 D9 00 00 00: jmp 0x488d38
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 5c465ch
        ; Exact mapped bytes E9 CD 00 00 00: jmp 0x488d38
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 5c4668h
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x488d38
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 5c4678h
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x488d38
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 5c4684h
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x488d38
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 5c4694h
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x488d38
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 5c46a4h
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x488d38
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 5c46b4h
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x488d38
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 5c46c4h
        ; Exact mapped bytes EB 7C: jmp 0x488d38
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov dword ptr [ebp - 4], 5c46d4h
        ; Exact mapped bytes EB 73: jmp 0x488d38
        __asm _emit 0xeb
        __asm _emit 0x73
        mov dword ptr [ebp - 4], 5c46e4h
        ; Exact mapped bytes EB 6A: jmp 0x488d38
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov dword ptr [ebp - 4], 5c46f0h
        ; Exact mapped bytes EB 61: jmp 0x488d38
        __asm _emit 0xeb
        __asm _emit 0x61
        mov dword ptr [ebp - 4], 5c4704h
        ; Exact mapped bytes EB 58: jmp 0x488d38
        __asm _emit 0xeb
        __asm _emit 0x58
        mov dword ptr [ebp - 4], 5c4714h
        ; Exact mapped bytes EB 4F: jmp 0x488d38
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov dword ptr [ebp - 4], 5c472ch
        ; Exact mapped bytes EB 46: jmp 0x488d38
        __asm _emit 0xeb
        __asm _emit 0x46
        mov dword ptr [ebp - 4], 5c473ch
        ; Exact mapped bytes EB 3D: jmp 0x488d38
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov dword ptr [ebp - 4], 5c474ch
        ; Exact mapped bytes EB 34: jmp 0x488d38
        __asm _emit 0xeb
        __asm _emit 0x34
        mov dword ptr [ebp - 4], 5c4760h
        ; Exact mapped bytes EB 2B: jmp 0x488d38
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov dword ptr [ebp - 4], 5c4774h
        ; Exact mapped bytes EB 22: jmp 0x488d38
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 4], 5c4788h
        ; Exact mapped bytes EB 19: jmp 0x488d38
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 4], 5c4794h
        ; Exact mapped bytes EB 10: jmp 0x488d38
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 4], 5c47a4h
        ; Exact mapped bytes EB 07: jmp 0x488d38
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 5c47b4h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 D4 6E 04 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 48h], 0
        ; Exact mapped bytes 74 0B: je 0x488d58
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 98 07 00 00: call 0x4894f0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 4cbh
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0b0h
        ; Exact mapped bytes E8 A3 AB F7 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xab
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 28 E3 FF FF: call 0x48709d
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 5F FA 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
