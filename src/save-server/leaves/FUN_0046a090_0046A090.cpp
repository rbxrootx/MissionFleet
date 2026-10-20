// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046A090 .. +0xE3 bytes.
extern "C" __declspec(naked) void FUN_0046a090_0046A090() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes E8 E7 00 00 00: call 0x46a180
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 74 72 68 00 01: cmp dword ptr [0x687274], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 11: jne 0x46a0b3
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 F0 B7 68 00: call dword ptr [0x68b7f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 B8 B8 68 00: call dword ptr [0x68b8b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 70 72 68 00 01 00 00 00: mov dword ptr [0x687270], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [ebp + 10h]
        ; Exact mapped bytes 88 0D 6C 72 68 00: mov byte ptr [0x68726c], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 47: jne 0x46a113
        __asm _emit 0x75
        __asm _emit 0x47
        ; Exact mapped bytes 83 3D C0 8D 68 00 00: cmp dword ptr [0x688dc0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2C: je 0x46a101
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 15 BC 8D 68 00: mov edx, dword ptr [0x688dbc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        sub eax, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 3B 0D C0 8D 68 00: cmp ecx, dword ptr [0x688dc0]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 72 0F: jb 0x46a101
        __asm _emit 0x72
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 05: je 0x46a0ff
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes EB DD: jmp 0x46a0de
        __asm _emit 0xeb
        __asm _emit 0xdd
        push 657c00h
        push 6579f8h
        ; Exact mapped bytes E8 90 00 00 00: call 0x46a1a0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        push 657f0ch
        push 657d04h
        ; Exact mapped bytes E8 7E 00 00 00: call 0x46a1a0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes 83 3D 78 72 68 00 00: cmp dword ptr [0x687278], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 20: jne 0x46a14e
        __asm _emit 0x75
        __asm _emit 0x20
        push -1
        ; Exact mapped bytes E8 9B DD FF FF: call 0x467ed0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        and eax, 20h
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x46a14e
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes C7 05 78 72 68 00 01 00 00 00: mov dword ptr [0x687278], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 32 E8 FF FF: call 0x468980
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 07: je 0x46a15b
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 37 00 00 00: call 0x46a190
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x46a16f
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes C7 05 74 72 68 00 01 00 00 00: mov dword ptr [0x687274], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x74
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 C0 B8 68 00: call dword ptr [0x68b8c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
