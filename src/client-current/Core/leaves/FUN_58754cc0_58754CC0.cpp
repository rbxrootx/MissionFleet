// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58754CC0 .. +0x1BF bytes.
extern "C" __declspec(naked) void FUN_58754cc0_58754CC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov al, byte ptr [ebp + 0ch]
        mov byte ptr [ebp - 8], al
        cmp byte ptr [ebp - 8], 0bh
        ; Exact mapped bytes 74 0F: je 0x58754ce4
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp byte ptr [ebp - 8], 0ch
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x58754d9d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 6F 01 00 00: jmp 0x58754e53
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3D 21 DA FF: call 0x584f6e30
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x21
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 0b0h]
        mov edx, dword ptr [ebp + 10h]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 3B: je 0x58754d47
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 0b0h]
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 14h], ecx
        push 4
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 07 C3 0D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xc3
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 0b0h]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + eax*4], 0
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 4B: je 0x58754d98
        __asm _emit 0x74
        __asm _emit 0x4b
        push 0ach
        ; Exact mapped bytes E8 AD C2 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xc2
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 0b0h]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [eax + ecx*4], edx
        push 0ach
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 0b0h]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax + ecx*4]
        push edx
        ; Exact mapped bytes E8 FB 7A 0F 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x7a
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 CD 00 00 00: jmp 0x58754e6a
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 21 DA FF: call 0x584f6ef0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x21
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 0b0h]
        mov ecx, dword ptr [ebp + 10h]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 3B: je 0x58754e00
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 0b0h]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 1ch], eax
        push 4
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 4E C2 0D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xc2
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 0b0h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + edx*4], 0
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 4B: je 0x58754e51
        __asm _emit 0x74
        __asm _emit 0x4b
        push 0b4h
        ; Exact mapped bytes E8 F4 C1 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc1
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 0b0h]
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [edx + eax*4], ecx
        push 0b4h
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 0b0h]
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [edx + eax*4]
        push ecx
        ; Exact mapped bytes E8 42 7A 0F 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x7a
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 17: jmp 0x58754e6a
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 0b0h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + edx*4], 0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 09: je 0x58754e79
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 B2 FF FF: call 0x58750080
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
