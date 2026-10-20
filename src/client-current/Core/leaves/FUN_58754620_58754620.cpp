// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58754620 .. +0xC3 bytes.
extern "C" __declspec(naked) void FUN_58754620_58754620() {
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
        ; Exact mapped bytes E8 38 24 DA FF: call 0x584f6a70
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x24
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 60: je 0x587546a1
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 74 24: je 0x5875466e
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 0ch], eax
        push 0ach
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 D3 C9 0D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xc9
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], 0
        push 0ach
        ; Exact mapped bytes E8 8C C9 0D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc9
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 18h], ecx
        push 0ach
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        ; Exact mapped bytes E8 F4 81 0F 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x81
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 2D: jmp 0x587546ce
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 18h], 0
        ; Exact mapped bytes 74 24: je 0x587546ce
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 14h], ecx
        push 0ach
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 73 C9 0D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xc9
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 18h], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 09: je 0x587546dd
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A4 B9 FF FF: call 0x58750080
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xb9
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
