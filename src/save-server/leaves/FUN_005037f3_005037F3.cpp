// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005037F3 .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_005037f3_005037F3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 75 07: jne 0x50380c
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 3E 01 00 00: jmp 0x50394a
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 DC BE 68 00: call dword ptr [0x68bedc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 20 93 02 00: call 0x52cb42
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7F 7D 02 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x7d
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 06 F3 FC FF: call 0x4d2b3e
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf3
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 93 8C 02 00: call 0x52c4d3
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F7 F2 FC FF: call 0x4d2b3e
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes FF 15 E4 B9 68 00: call dword ptr [0x68b9e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 11: je 0x503871
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 E7 7E F4 FF: call 0x44b750
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x7e
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x503878
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0B: je 0x50388f
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF 15 C4 BD 68 00: call dword ptr [0x68bdc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes 75 23: jne 0x5038b2
        __asm _emit 0x75
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 75 06: jne 0x5038a0
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes FF 15 60 BC 68 00: call dword ptr [0x68bc60]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F0 6D 68 00: mov ecx, dword ptr [0x686df0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 30 BD 68 00: call dword ptr [0x68bd30]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x503939
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 22: je 0x5038da
        __asm _emit 0x74
        __asm _emit 0x22
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1C: je 0x5038da
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 14: jne 0x5038da
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 4A E5 00 00: call 0x511e20
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x5038fc
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 07: je 0x5038e9
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 75 06: jne 0x5038fa
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes FF 15 60 BC 68 00: call dword ptr [0x68bc60]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 3D: jmp 0x503939
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov dword ptr [ebp - 18h], 1
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 09: je 0x503914
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 25: jmp 0x503939
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 20h]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 74 0D: je 0x50392c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 C8 BD 68 00: call dword ptr [0x68bdc8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F4 6D 68 00: mov edx, dword ptr [0x686df4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 30 BD 68 00: call dword ptr [0x68bd30]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 08: je 0x503947
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
