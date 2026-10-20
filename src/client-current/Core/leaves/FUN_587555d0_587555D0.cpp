// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587555D0 .. +0xC3 bytes.
extern "C" __declspec(naked) void FUN_587555d0_587555D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 13 DA FF: call 0x584f69c0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x13
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 60: je 0x58755651
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 74 24: je 0x5875561e
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        mov dword ptr [ebp - 0ch], eax
        push 9ch
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 23 BA 0D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xba
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24h], 0
        push 9ch
        ; Exact mapped bytes E8 DC B9 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xb9
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 24h], ecx
        push 9ch
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        push ecx
        ; Exact mapped bytes E8 44 72 0F 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x72
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 2D: jmp 0x5875567e
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 24h], 0
        ; Exact mapped bytes 74 24: je 0x5875567e
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 14h], ecx
        push 9ch
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 C3 B9 0D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xb9
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 24h], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 09: je 0x5875568d
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F4 A9 FF FF: call 0x58750080
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xa9
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
