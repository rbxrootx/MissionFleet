// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00471400 .. +0x219 bytes.
extern "C" __declspec(naked) void FUN_00471400_00471400() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 83 3D 2C 74 68 00 00: cmp dword ptr [0x68742c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 3D: jne 0x47145a
        __asm _emit 0x75
        __asm _emit 0x3d
        ; Exact mapped bytes FF 15 84 B8 68 00: call dword ptr [0x68b884]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0C: je 0x471438
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 2C 74 68 00 01 00 00 00: mov dword ptr [0x68742c], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 22: jmp 0x47145a
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes FF 15 88 B8 68 00: call dword ptr [0x68b888]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0C: je 0x471453
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 2C 74 68 00 02 00 00 00: mov dword ptr [0x68742c], 2
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x47145a
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 BB 01 00 00: jmp 0x471615
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 2C 74 68 00 01: cmp dword ptr [0x68742c], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 F7 00 00 00: jne 0x47155e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 16: jne 0x471483
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes FF 15 84 B8 68 00: call dword ptr [0x68b884]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 07: jne 0x471483
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 92 01 00 00: jmp 0x471615
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 20: je 0x4714b5
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 8]
        add eax, 2
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 75 09: jne 0x4714b3
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 2
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB D4: jmp 0x471489
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp - 14h]
        sar ecx, 1
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 0
        push 0
        ; Exact mapped bytes FF 15 1C BA 68 00: call dword ptr [0x68ba1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 1E: je 0x471504
        __asm _emit 0x74
        __asm _emit 0x1e
        push 64h
        push 63ee80h
        push 2
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 C8 52 FF FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 11: jne 0x471515
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes FF 15 8C B8 68 00: call dword ptr [0x68b88c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 00 01 00 00: jmp 0x471615
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 0
        push 0
        ; Exact mapped bytes FF 15 1C BA 68 00: call dword ptr [0x68ba1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x47154c
        __asm _emit 0x75
        __asm _emit 0x15
        push 2
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 1E 5E FF FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes FF 15 8C B8 68 00: call dword ptr [0x68b88c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 B7 00 00 00: jmp 0x471615
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 2C 74 68 00 02: cmp dword ptr [0x68742c], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x2c
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x471613
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 16: jne 0x471587
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes FF 15 88 B8 68 00: call dword ptr [0x68b888]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 07: jne 0x471587
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x471615
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 1E: je 0x4715b5
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 75 09: jne 0x4715b3
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB D8: jmp 0x47158d
        __asm _emit 0xeb
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        push 8fh
        push 63ee80h
        push 2
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 EA 51 FF FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 0E: jne 0x4715f0
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 90 B8 68 00: call dword ptr [0x68b890]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 25: jmp 0x471615
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 FF 3C FF FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 90 B8 68 00: call dword ptr [0x68b890]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 02: jmp 0x471615
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
