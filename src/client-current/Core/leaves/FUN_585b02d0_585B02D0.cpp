// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B02D0 .. +0xFC bytes.
extern "C" __declspec(naked) void FUN_585b02d0_585B02D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], 0
        movzx eax, byte ptr [ebp + 8]
        cmp eax, 0ffh
        ; Exact mapped bytes 75 19: jne 0x585b0304
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5D 94 F7 FF: call 0x58529750
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x94
        __asm _emit 0xf7
        __asm _emit 0xff
        movzx ecx, ax
        and ecx, 0ff00h
        sar ecx, 8
        mov byte ptr [ebp - 1], cl
        ; Exact mapped bytes EB 06: jmp 0x585b030a
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dl, byte ptr [ebp + 8]
        mov byte ptr [ebp - 1], dl
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB 66 ED FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x66
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x585b03c3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 66 ED FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x66
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x585b0338
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7B BD ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xbd
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x585b03c3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 96 46 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x46
        __asm _emit 0xed
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 35ch]
        movzx ecx, byte ptr [ebp - 1]
        cmp eax, ecx
        ; Exact mapped bytes 75 65: jne 0x585b03be
        __asm _emit 0x75
        __asm _emit 0x65
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 13: jne 0x585b0372
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F9 46 ED FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x46
        __asm _emit 0xed
        __asm _emit 0xff
        cmp dword ptr [eax + 0a4h], 1
        ; Exact mapped bytes 75 02: jne 0x585b0372
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB BB: jmp 0x585b032d
        __asm _emit 0xeb
        __asm _emit 0xbb
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 3D: jne 0x585b03b5
        __asm _emit 0x75
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 60 46 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x46
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 EA 05: shr dx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 3
        ; Exact mapped bytes 74 1C: je 0x585b03b0
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 44 46 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x46
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 5
        ; Exact mapped bytes 75 05: jne 0x585b03b5
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 78 FF FF FF: jmp 0x585b032d
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E9 6A FF FF FF: jmp 0x585b032d
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
