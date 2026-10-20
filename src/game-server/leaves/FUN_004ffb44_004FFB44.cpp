// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FFB44 .. +0x1F6 bytes.
extern "C" __declspec(naked) void FUN_004ffb44_004FFB44() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4ffb67
        __asm _emit 0x75
        __asm _emit 0x14
        push 246h
        push 5cb750h
        ; Exact mapped bytes E8 9E 4E 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x4e
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ffb67
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4ffb4d
        __asm _emit 0x75
        __asm _emit 0xe0
        push 104h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 7E E4 FE FF: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 104h
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 E3 97 FA FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x97
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        push 104h
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 0F: jmp 0x4ffbba
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 CC D4 F8 FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd4
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 29: je 0x4ffbed
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx]
        push eax
        ; Exact mapped bytes E8 51 EB FF FF: call 0x4fe720
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x4ffbeb
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + 1]
        push edx
        ; Exact mapped bytes E8 3E EB FF FF: call 0x4fe720
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4ffbeb
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4ffbed
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB BE: jmp 0x4ffbab
        __asm _emit 0xeb
        __asm _emit 0xbe
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x4ffce3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx]
        push eax
        ; Exact mapped bytes E8 1A EB FF FF: call 0x4fe720
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ffc21
        __asm _emit 0x75
        __asm _emit 0x14
        push 254h
        push 5cb750h
        ; Exact mapped bytes E8 E4 4D 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x4d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ffc21
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x4ffbfb
        __asm _emit 0x75
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + 1]
        push eax
        ; Exact mapped bytes E8 ED EA FF FF: call 0x4fe720
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ffc4e
        __asm _emit 0x75
        __asm _emit 0x14
        push 255h
        push 5cb750h
        ; Exact mapped bytes E8 B7 4D 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x4d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ffc4e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x4ffc27
        __asm _emit 0x75
        __asm _emit 0xd3
        mov edx, dword ptr [ebp - 4]
        add edx, 2
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 23: je 0x4ffc8a
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx]
        push eax
        ; Exact mapped bytes E8 AE EA FF FF: call 0x4fe720
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4ffc8a
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 FE D3 F8 FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xd3
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D3: jmp 0x4ffc5d
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x4ffca3
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 E3 D3 F8 FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xd3
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
        ; Exact mapped bytes 74 23: je 0x4ffcd0
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx]
        push edx
        ; Exact mapped bytes E8 68 EA FF FF: call 0x4fe720
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4ffcd0
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 B8 D3 F8 FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xd3
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D3: jmp 0x4ffca3
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x4ffce1
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 1], 0
        ; Exact mapped bytes EB 44: jmp 0x4ffd27
        __asm _emit 0xeb
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x4ffd16
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx]
        push edx
        ; Exact mapped bytes E8 22 EA FF FF: call 0x4fe720
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4ffd16
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 72 D3 F8 FF: call 0x48d080
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xd3
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D3: jmp 0x4ffce9
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x4ffd27
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 1], 0
        push -1
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 02 E4 FE FF: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
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
