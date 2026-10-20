// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DEC44 .. +0x1F6 bytes.
extern "C" __declspec(naked) void FUN_004dec44_004DEC44() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4dec67
        __asm _emit 0x75
        __asm _emit 0x14
        push 246h
        push 677f28h
        ; Exact mapped bytes E8 DE A0 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dec67
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4dec4d
        __asm _emit 0x75
        __asm _emit 0xe0
        push 104h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 1E E4 FE FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 104h
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 33 6C F8 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x6c
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        push 104h
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 0F: jmp 0x4decba
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 5C AA F6 FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xaa
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 29: je 0x4deced
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx]
        push eax
        ; Exact mapped bytes E8 51 EB FF FF: call 0x4dd820
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x4deceb
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + 1]
        push edx
        ; Exact mapped bytes E8 3E EB FF FF: call 0x4dd820
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x4deceb
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4deced
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB BE: jmp 0x4decab
        __asm _emit 0xeb
        __asm _emit 0xbe
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x4dede3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx]
        push eax
        ; Exact mapped bytes E8 1A EB FF FF: call 0x4dd820
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ded21
        __asm _emit 0x75
        __asm _emit 0x14
        push 254h
        push 677f28h
        ; Exact mapped bytes E8 24 A0 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ded21
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x4decfb
        __asm _emit 0x75
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + 1]
        push eax
        ; Exact mapped bytes E8 ED EA FF FF: call 0x4dd820
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ded4e
        __asm _emit 0x75
        __asm _emit 0x14
        push 255h
        push 677f28h
        ; Exact mapped bytes E8 F7 9F 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x9f
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ded4e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x4ded27
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
        ; Exact mapped bytes 74 23: je 0x4ded8a
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx]
        push eax
        ; Exact mapped bytes E8 AE EA FF FF: call 0x4dd820
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4ded8a
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 8E A9 F6 FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xa9
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D3: jmp 0x4ded5d
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x4deda3
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 73 A9 F6 FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xa9
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x4dedd0
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx]
        push edx
        ; Exact mapped bytes E8 68 EA FF FF: call 0x4dd820
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4dedd0
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 48 A9 F6 FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xa9
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D3: jmp 0x4deda3
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x4dede1
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 1], 0
        ; Exact mapped bytes EB 44: jmp 0x4dee27
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
        ; Exact mapped bytes 74 23: je 0x4dee16
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx]
        push edx
        ; Exact mapped bytes E8 22 EA FF FF: call 0x4dd820
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4dee16
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 02 A9 F6 FF: call 0x449710
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xa9
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D3: jmp 0x4dede9
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x4dee27
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 1], 0
        push -1
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 A2 E3 FE FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xe3
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
