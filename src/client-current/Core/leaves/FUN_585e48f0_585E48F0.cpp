// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E48F0 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_585e48f0_585E48F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 32: je 0x585e4931
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 75 EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x75
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x585e491a
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 19 78 EA FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x78
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0F: je 0x585e492f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 74 2A 00 00: call 0x585e73a0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB E0: jmp 0x585e490f
        __asm _emit 0xeb
        __asm _emit 0xe0
        ; Exact mapped bytes EB 20: jmp 0x585e4951
        __asm _emit 0xeb
        __asm _emit 0x20
        movzx ecx, word ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F F6 F3 FF: call 0x58523fc0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf6
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 50 2A 00 00: call 0x585e73a0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
