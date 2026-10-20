// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047FFA0 .. +0x1E2 bytes.
extern "C" __declspec(naked) void FUN_0047ffa0_0047FFA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 8], 0ffffffffh
        push 12h
        ; Exact mapped bytes E8 FB 08 FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x47ffca
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 40h
        ; Exact mapped bytes 0F 8D 9C 01 00 00: jge 0x480170
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx*4 + 6889a0h], 0
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x4800d6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx*4 + 6889a0h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x47fffd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 24h
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx*4 + 6889a0h]
        add eax, 480h
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 0F 83 B1 00 00 00: jae 0x4800c6
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 51 04: movsx edx, byte ptr [ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x04
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x4800c1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 39: jne 0x480069
        __asm _emit 0x75
        __asm _emit 0x39
        push 11h
        ; Exact mapped bytes E8 79 08 FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 75 1C: jne 0x48005f
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        add edx, 0ch
        push edx
        ; Exact mapped bytes FF 15 74 B9 68 00: call dword ptr [0x68b974]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], ecx
        push 11h
        ; Exact mapped bytes E8 EA 08 FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        add eax, 0ch
        push eax
        ; Exact mapped bytes FF 15 68 B9 68 00: call dword ptr [0x68b968]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 51 04: movsx edx, byte ptr [ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x04
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x480096
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        add eax, 0ch
        push eax
        ; Exact mapped bytes FF 15 6C B9 68 00: call dword ptr [0x68b96c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 5E FF FF FF: jmp 0x47fff4
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 0ffffffffh
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [edx*4 + 6889a0h]
        cdq
        mov esi, 24h
        idiv esi
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 05: jmp 0x4800c6
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 2E FF FF FF: jmp 0x47fff4
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 74 05: je 0x4800d1
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 9F 00 00 00: jmp 0x480170
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x48016b
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 79h
        push 63fba4h
        push 2
        push 480h
        ; Exact mapped bytes E8 D7 66 FE FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 74: je 0x480169
        __asm _emit 0x74
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax*4 + 6889a0h], ecx
        ; Exact mapped bytes 8B 15 DC 8A 68 00: mov edx, dword ptr [0x688adc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        add edx, 20h
        ; Exact mapped bytes 89 15 DC 8A 68 00: mov dword ptr [0x688adc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x48011c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 24h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx*4 + 6889a0h]
        add edx, 480h
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 73 23: jae 0x480154
        __asm _emit 0x73
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 5], 0ah
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], 0
        ; Exact mapped bytes EB BF: jmp 0x480113
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 5
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 4A 03 00 00: call 0x4804b0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 05: jmp 0x480170
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 51 FE FF FF: jmp 0x47ffc1
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 12h
        ; Exact mapped bytes E8 D9 07 FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
