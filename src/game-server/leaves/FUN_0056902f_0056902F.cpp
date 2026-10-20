// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056902F .. +0x17D bytes.
extern "C" __declspec(naked) void FUN_0056902f_0056902F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 24h], ecx
        push 55h
        push 5cffc8h
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 18 21 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x21
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 30h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 34h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 38h], 0
        push 1
        ; Exact mapped bytes FF 15 BC 25 5E 00: call dword ptr [0x5e25bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 7D 1E: jge 0x569093
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 38h]
        or al, 1
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 38h], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 34h]
        or al, 2
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 34h], eax
        ; Exact mapped bytes EB 2D: jmp 0x5690c0
        __asm _emit 0xeb
        __asm _emit 0x2d
        push 2
        ; Exact mapped bytes FF 15 BC 25 5E 00: call dword ptr [0x5e25bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        test edx, edx
        ; Exact mapped bytes 7D 1E: jge 0x5690c0
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 38h]
        or ecx, 2
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 38h], ecx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 34h]
        or ecx, 1
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 34h], ecx
        ; Exact mapped bytes FF 15 F8 23 5E 00: call dword ptr [0x5e23f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 13 3A FD FF: call 0x53cae4
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x3a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 0F 85 BC 00 00 00: jne 0x56919a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F0 39 FD FF: call 0x53cad3
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x39
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 05: je 0x5690ed
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x56919a
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 209h
        push 200h
        push 0
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 84 25 5E 00: call dword ptr [0x5e2584]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x569125
        __asm _emit 0x75
        __asm _emit 0x1c
        push 1
        push 108h
        push 100h
        push 0
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 84 25 5E 00: call dword ptr [0x5e2584]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x56917a
        __asm _emit 0x74
        __asm _emit 0x55
        cmp dword ptr [ebp - 1ch], 202h
        ; Exact mapped bytes 74 1B: je 0x569149
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp dword ptr [ebp - 1ch], 205h
        ; Exact mapped bytes 74 12: je 0x569149
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 1ch], 201h
        ; Exact mapped bytes 74 09: je 0x569149
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 1ch], 204h
        ; Exact mapped bytes 75 02: jne 0x56914b
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 4F: jmp 0x56919a
        __asm _emit 0xeb
        __asm _emit 0x4f
        cmp dword ptr [ebp - 1ch], 100h
        ; Exact mapped bytes 75 08: jne 0x56915c
        __asm _emit 0x75
        __asm _emit 0x08
        cmp dword ptr [ebp - 18h], 1bh
        ; Exact mapped bytes 75 02: jne 0x56915c
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 3E: jmp 0x56919a
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 20h
        ; Exact mapped bytes E8 6F CE FC FF: call 0x535fde
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xce
        __asm _emit 0xfc
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        inc eax
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 30h], eax
        ; Exact mapped bytes FF 15 F8 23 5E 00: call dword ptr [0x5e23f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 3B 05 DC EC 5D 00: cmp eax, dword ptr [0x5decdc]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 76 0A: jbe 0x569195
        __asm _emit 0x76
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 30h], 1
        ; Exact mapped bytes E9 37 FF FF FF: jmp 0x5690d1
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 5C 25 5E 00: call dword ptr [0x5e255c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + 30h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
