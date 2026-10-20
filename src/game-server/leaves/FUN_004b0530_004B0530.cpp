// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B0530 .. +0xE3 bytes.
extern "C" __declspec(naked) void FUN_004b0530_004B0530() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes E8 E7 00 00 00: call 0x4b0620
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 98 ED 5D 00 01: cmp dword ptr [0x5ded98], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 11: jne 0x4b0553
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 48 24 5E 00: call dword ptr [0x5e2448]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 90 22 5E 00: call dword ptr [0x5e2290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 94 ED 5D 00 01 00 00 00: mov dword ptr [0x5ded94], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [ebp + 10h]
        ; Exact mapped bytes 88 0D 90 ED 5D 00: mov byte ptr [0x5ded90], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 47: jne 0x4b05b3
        __asm _emit 0x75
        __asm _emit 0x47
        ; Exact mapped bytes 83 3D 70 02 5E 00 00: cmp dword ptr [0x5e0270], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2C: je 0x4b05a1
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 15 6C 02 5E 00: mov edx, dword ptr [0x5e026c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        sub eax, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 3B 0D 70 02 5E 00: cmp ecx, dword ptr [0x5e0270]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 72 0F: jb 0x4b05a1
        __asm _emit 0x72
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 05: je 0x4b059f
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes EB DD: jmp 0x4b057e
        __asm _emit 0xeb
        __asm _emit 0xdd
        push 5a0220h
        push 5a0218h
        ; Exact mapped bytes E8 90 00 00 00: call 0x4b0640
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        push 5a022ch
        push 5a0224h
        ; Exact mapped bytes E8 7E 00 00 00: call 0x4b0640
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes 83 3D 9C ED 5D 00 00: cmp dword ptr [0x5ded9c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x9c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 20: jne 0x4b05ee
        __asm _emit 0x75
        __asm _emit 0x20
        push -1
        ; Exact mapped bytes E8 6B B1 FF FF: call 0x4ab740
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        and eax, 20h
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x4b05ee
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes C7 05 9C ED 5D 00 01 00 00 00: mov dword ptr [0x5ded9c], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 62 BA FF FF: call 0x4ac050
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 07: je 0x4b05fb
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 37 00 00 00: call 0x4b0630
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x4b060f
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes C7 05 98 ED 5D 00 01 00 00 00: mov dword ptr [0x5ded98], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 9C 22 5E 00: call dword ptr [0x5e229c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
