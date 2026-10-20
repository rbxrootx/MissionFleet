// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00482870 .. +0x2E0 bytes.
extern "C" __declspec(naked) void FUN_00482870_00482870() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1F: je 0x48289c
        __asm _emit 0x74
        __asm _emit 0x1f
        push 3dh
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 28 68 FE FF: call 0x4690b0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 08: je 0x48289c
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 75 08: jne 0x4828a4
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 A7 02 00 00: jmp 0x482b4b
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 42 01: movsx eax, byte ptr [edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x01
        neg eax
        sbb eax, eax
        inc eax
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 8B 0D 54 72 68 00: mov ecx, dword ptr [0x687254]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 3B 0D 58 72 68 00: cmp ecx, dword ptr [0x687258]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x4828d5
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 54 72 68 00: mov edx, dword ptr [0x687254]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 03 03 00 00: call 0x482bd0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes A3 54 72 68 00: mov dword ptr [0x687254], eax
        __asm _emit 0xa3
        __asm _emit 0x54
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 54 72 68 00 00: cmp dword ptr [0x687254], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 B3 00 00 00: jne 0x482995
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 1F: je 0x482907
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 83 3D 5C 72 68 00 00: cmp dword ptr [0x68725c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 16: je 0x482907
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes E8 DA EE FF FF: call 0x4817d0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x482902
        __asm _emit 0x74
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 49 02 00 00: jmp 0x482b4b
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x482995
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 07: je 0x482914
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 37 02 00 00: jmp 0x482b4b
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 54 72 68 00 00: cmp dword ptr [0x687254], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 37: jne 0x482954
        __asm _emit 0x75
        __asm _emit 0x37
        push 87h
        push 63fbfch
        push 2
        push 4
        ; Exact mapped bytes E8 90 3E FE FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes A3 54 72 68 00: mov dword ptr [0x687254], eax
        __asm _emit 0xa3
        __asm _emit 0x54
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 54 72 68 00 00: cmp dword ptr [0x687254], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x482949
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 02 02 00 00: jmp 0x482b4b
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 54 72 68 00: mov eax, dword ptr [0x687254]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [eax], 0
        ; Exact mapped bytes 83 3D 5C 72 68 00 00: cmp dword ptr [0x68725c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 38: jne 0x482995
        __asm _emit 0x75
        __asm _emit 0x38
        push 8eh
        push 63fbfch
        push 2
        push 4
        ; Exact mapped bytes E8 50 3E FE FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes A3 5C 72 68 00: mov dword ptr [0x68725c], eax
        __asm _emit 0xa3
        __asm _emit 0x5c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 5C 72 68 00 00: cmp dword ptr [0x68725c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x482989
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 C2 01 00 00: jmp 0x482b4b
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 5C 72 68 00: mov ecx, dword ptr [0x68725c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ecx], 0
        ; Exact mapped bytes 8B 15 54 72 68 00: mov edx, dword ptr [0x687254]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 18h]
        sub eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 A2 01 00 00: call 0x482b50
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 8C 93 00 00 00: jl 0x482a51
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x482a51
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 73: je 0x482a43
        __asm _emit 0x74
        __asm _emit 0x73
        push 2
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax*4]
        push edx
        ; Exact mapped bytes E8 7F 49 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x49
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 09: jmp 0x4829ef
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + ecx*4], 0
        ; Exact mapped bytes 74 15: je 0x482a10
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 0ch]
        mov edx, dword ptr [esi + edx*4 + 4]
        mov dword ptr [ecx + eax*4], edx
        ; Exact mapped bytes EB D6: jmp 0x4829e6
        __asm _emit 0xeb
        __asm _emit 0xd6
        push 0b9h
        push 63fbfch
        push 2
        mov eax, dword ptr [ebp - 8]
        shl eax, 2
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 84 42 FE FF: call 0x466cb0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 09: je 0x482a41
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 89 15 54 72 68 00: mov dword ptr [0x687254], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x482a4f
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + eax*4], edx
        ; Exact mapped bytes EB 73: jmp 0x482ac4
        __asm _emit 0xeb
        __asm _emit 0x73
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 66: jne 0x482abd
        __asm _emit 0x75
        __asm _emit 0x66
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 08: jge 0x482a65
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        neg eax
        mov dword ptr [ebp - 8], eax
        push 0ceh
        push 63fbfch
        push 2
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx*4 + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 2B 42 FE FF: call 0x466cb0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x42
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 08: jne 0x482a99
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x482b4b
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + ecx*4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + ecx*4 + 4], 0
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes A3 54 72 68 00: mov dword ptr [0x687254], eax
        __asm _emit 0xa3
        __asm _emit 0x54
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x482ac4
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x482b4b
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 7F: je 0x482b49
        __asm _emit 0x74
        __asm _emit 0x7f
        push 0e5h
        push 63fbfch
        push 2
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 61 2C FE FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        add eax, 2
        push eax
        ; Exact mapped bytes E8 D5 3C FE FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 52: je 0x482b49
        __asm _emit 0x74
        __asm _emit 0x52
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 6C 2E FE FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x2e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 18h]
        sub ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 10h]
        add edx, ecx
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 14h]
        neg edx
        sbb edx, edx
        not edx
        and edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 20 B8 68 00: call dword ptr [0x68b820]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        push 2
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 1A 48 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
