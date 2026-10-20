// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586DD8F0 .. +0x23C bytes.
extern "C" __declspec(naked) void FUN_586dd8f0_586DD8F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        push 30h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 78h
        push eax
        ; Exact mapped bytes E8 07 F5 16 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf5
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        push 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 63 35 00 00: call 0x586e0e80
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 64 47 00 00: call 0x586e2090
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        push 589604e0h
        mov edx, dword ptr [ebp - 4]
        add edx, 78h
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 154h]
        ; Exact mapped bytes E8 B4 2B DF FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x2b
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 154h]
        mov dword ptr [ebp - 0ch], edx
        push 588b2448h
        ; Exact mapped bytes E8 8E 46 E4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x46
        __asm _emit 0xe4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0C EE E0 FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xee
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x586dda15
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 34 05 96 58 00: cmp dword ptr [0x58960534], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x586dda15
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 638h], 1
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 638h], 1
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 638h], 1
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 624h]
        mov dword ptr [ebp - 10h], edx
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 50 1E DC FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x1e
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 624h]
        mov dword ptr [ebp - 14h], eax
        push 5
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 31 1E DC FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x1e
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 11 01 00 00: jmp 0x586ddb26
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x586ddab0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 34 05 96 58 00: cmp dword ptr [0x58960534], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x586ddab0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 638h], 1
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 638h], 1
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 638h], 1
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 624h]
        mov dword ptr [ebp - 18h], ecx
        push 5
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B1 1D DC FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 624h]
        mov dword ptr [ebp - 1ch], ecx
        push 5
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 93 1D DC FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 76: jmp 0x586ddb26
        __asm _emit 0xeb
        __asm _emit 0x76
        ; Exact mapped bytes 83 3D 30 05 96 58 00: cmp dword ptr [0x58960530], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 57: jne 0x586ddb10
        __asm _emit 0x75
        __asm _emit 0x57
        ; Exact mapped bytes 83 3D 34 05 96 58 00: cmp dword ptr [0x58960534], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x586ddb10
        __asm _emit 0x74
        __asm _emit 0x4e
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 638h], 1
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 638h], 1
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 624h]
        mov dword ptr [ebp - 20h], edx
        push 5
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 33 1D DC FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 16: jmp 0x586ddb26
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 638h], 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
