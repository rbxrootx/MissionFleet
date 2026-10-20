// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587546F0 .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_587546f0_587546F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5F 03 D3 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x03
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 2ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1A 24 DA FF: call 0x584f6b30
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x24
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 60: je 0x5875477f
        __asm _emit 0x74
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 24: je 0x5875474c
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 0ch], edx
        push 0a4h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 F5 C8 0D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1ch], 0
        push 0a4h
        ; Exact mapped bytes E8 AE C8 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1ch], eax
        push 0a4h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes E8 16 81 0F 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x81
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 2D: jmp 0x587547ac
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 24: je 0x587547ac
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        mov dword ptr [ebp - 14h], eax
        push 0a4h
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 95 C8 0D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc8
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1ch], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 09: je 0x587547bb
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 B8 FF FF: call 0x58750080
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
