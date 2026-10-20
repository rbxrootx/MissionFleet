// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B8770 .. +0x13F bytes.
extern "C" __declspec(naked) void FUN_004b8770_004B8770() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        push 2
        ; Exact mapped bytes E8 65 CA FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4b87a0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 3B 0D 40 02 5E 00: cmp ecx, dword ptr [0x5e0240]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8D E4 00 00 00: jge 0x4b8893
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes A1 24 F2 5D 00: mov eax, dword ptr [0x5df224]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp dword ptr [eax + edx*4], 0
        ; Exact mapped bytes 0F 84 CD 00 00 00: je 0x4b888e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 8B 15 24 F2 5D 00: mov edx, dword ptr [0x5df224]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [edx + ecx*4]
        mov ecx, dword ptr [eax + 0ch]
        and ecx, 83h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x4b888e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes A1 24 F2 5D 00: mov eax, dword ptr [0x5df224]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + edx*4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 9D FB FF FF: call 0x4b8390
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 8B 0D 24 F2 5D 00: mov ecx, dword ptr [0x5df224]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx + eax*4]
        mov eax, dword ptr [edx + 0ch]
        and eax, 83h
        test eax, eax
        ; Exact mapped bytes 74 67: je 0x4b8875
        __asm _emit 0x74
        __asm _emit 0x67
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 25: jne 0x4b8839
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 8B 15 24 F2 5D 00: mov edx, dword ptr [0x5df224]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [edx + ecx*4]
        push eax
        ; Exact mapped bytes E8 2A FE FF FF: call 0x4b8650
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp eax, -1
        ; Exact mapped bytes 74 09: je 0x4b8837
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 3C: jmp 0x4b8875
        __asm _emit 0xeb
        __asm _emit 0x3c
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 36: jne 0x4b8875
        __asm _emit 0x75
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes A1 24 F2 5D 00: mov eax, dword ptr [0x5df224]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + edx*4]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 2
        test edx, edx
        ; Exact mapped bytes 74 21: je 0x4b8875
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 8B 0D 24 F2 5D 00: mov ecx, dword ptr [0x5df224]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx + eax*4]
        push edx
        ; Exact mapped bytes E8 EA FD FF FF: call 0x4b8650
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp eax, -1
        ; Exact mapped bytes 75 07: jne 0x4b8875
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0ffffffffh
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 8B 0D 24 F2 5D 00: mov ecx, dword ptr [0x5df224]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx + eax*4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 75 FB FF FF: call 0x4b8400
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 04 FF FF FF: jmp 0x4b8797
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        ; Exact mapped bytes E8 F6 C9 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 05: jne 0x4b88a8
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 03: jmp 0x4b88ab
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
