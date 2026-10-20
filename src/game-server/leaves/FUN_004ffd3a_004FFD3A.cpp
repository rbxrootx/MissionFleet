// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FFD3A .. +0x245 bytes.
extern "C" __declspec(naked) void FUN_004ffd3a_004FFD3A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 830h
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 08 22 5E 00: call dword ptr [0x5e2208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4ffd5f
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 17 02 00 00: jmp 0x4fff76
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 2ah
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x4ffd75
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 01 02 00 00: jmp 0x4fff76
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 628h], eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 628h], eax
        ; Exact mapped bytes 74 07: je 0x4ffd9e
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 D8 01 00 00: jmp 0x4fff76
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 628h], 104h
        ; Exact mapped bytes 7C 14: jl 0x4ffdbe
        __asm _emit 0x7c
        __asm _emit 0x14
        push 27fh
        push 5cb750h
        ; Exact mapped bytes E8 47 4C 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ffdbe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4ffd9e
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes FF 15 20 23 5E 00: call dword ptr [0x5e2320]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 41ch], eax
        lea edx, [ebp - 624h]
        push edx
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 41ch]
        push ecx
        ; Exact mapped bytes FF 15 F4 22 5E 00: call dword ptr [0x5e22f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ffe04
        __asm _emit 0x75
        __asm _emit 0x14
        push 284h
        push 5cb750h
        ; Exact mapped bytes E8 01 4C 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x4c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ffe04
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C6: jne 0x4ffdd0
        __asm _emit 0x75
        __asm _emit 0xc6
        lea eax, [ebp - 830h]
        push eax
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 4
        mov edx, dword ptr [ebp - 41ch]
        push edx
        ; Exact mapped bytes FF 15 F4 22 5E 00: call dword ptr [0x5e22f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ffe3e
        __asm _emit 0x75
        __asm _emit 0x14
        push 286h
        push 5cb750h
        ; Exact mapped bytes E8 C7 4B 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x4b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ffe3e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C6: jne 0x4ffe0a
        __asm _emit 0x75
        __asm _emit 0xc6
        lea ecx, [ebp - 20ch]
        push ecx
        push -1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 1
        mov eax, dword ptr [ebp - 41ch]
        push eax
        ; Exact mapped bytes FF 15 F4 22 5E 00: call dword ptr [0x5e22f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ffe78
        __asm _emit 0x75
        __asm _emit 0x14
        push 288h
        push 5cb750h
        ; Exact mapped bytes E8 8D 4B 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x4b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ffe78
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C6: jne 0x4ffe44
        __asm _emit 0x75
        __asm _emit 0xc6
        lea edx, [ebp - 414h]
        push edx
        push -1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 4
        mov ecx, dword ptr [ebp - 41ch]
        push ecx
        ; Exact mapped bytes FF 15 F4 22 5E 00: call dword ptr [0x5e22f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ffeb2
        __asm _emit 0x75
        __asm _emit 0x14
        push 28bh
        push 5cb750h
        ; Exact mapped bytes E8 53 4B 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x4b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ffeb2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C6: jne 0x4ffe7e
        __asm _emit 0x75
        __asm _emit 0xc6
        mov dword ptr [ebp - 418h], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0F: jmp 0x4ffed9
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 AD D1 F8 FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xd1
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x4fff71
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 418h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 4D D0 F7 FF FF: mov dx, word ptr [ebp + ecx*2 - 0x830]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x4d
        __asm _emit 0xd0
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        and edx, 80h
        test edx, edx
        ; Exact mapped bytes 74 5C: je 0x4fff5d
        __asm _emit 0x74
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 418h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 45 EC FB FF FF: mov cx, word ptr [ebp + eax*2 - 0x414]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        and ecx, 80h
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x4fff2f
        __asm _emit 0x75
        __asm _emit 0x14
        push 296h
        push 5cb750h
        ; Exact mapped bytes E8 D6 4A 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fff2f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CC: jne 0x4fff01
        __asm _emit 0x75
        __asm _emit 0xcc
        mov eax, dword ptr [ebp - 418h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 45 DC F9 FF FF: mov cx, word ptr [ebp + eax*2 - 0x624]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xdc
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 418h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 55 F4 FD FF FF: mov ax, word ptr [ebp + edx*2 - 0x20c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ecx, eax
        ; Exact mapped bytes 74 04: je 0x4fff5d
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 19: jmp 0x4fff76
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 418h]
        add ecx, 1
        mov dword ptr [ebp - 418h], ecx
        ; Exact mapped bytes E9 59 FF FF FF: jmp 0x4ffeca
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
