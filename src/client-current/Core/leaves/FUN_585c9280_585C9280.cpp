// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C9280 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_585c9280_585C9280() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C 2C EC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x2c
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x585c92a4
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8F 2E EC FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x2e
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 68: je 0x585c9312
        __asm _emit 0x74
        __asm _emit 0x68
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 60: je 0x585c9310
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 88 31 EC FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x31
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F1 BD ED FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xbd
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7F 4D: jg 0x585c9310
        __asm _emit 0x7f
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 85 2E EC FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x2e
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 260h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 260h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CA B8 00 00: call 0x585d4bb0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 23: jne 0x585c9310
        __asm _emit 0x75
        __asm _emit 0x23
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 260h]
        push eax
        push 0
        push 80021800h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 36 26 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x36
        __asm _emit 0x26
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 87: jmp 0x585c9299
        __asm _emit 0xeb
        __asm _emit 0x87
        mov esp, ebp
        pop ebp
        ret
    }
}
