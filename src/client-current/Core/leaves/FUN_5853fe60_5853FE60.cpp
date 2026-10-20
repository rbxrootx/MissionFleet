// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5853FE60 .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_5853fe60_5853FE60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 2f8h]
        ; Exact mapped bytes E8 2C C2 F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc2
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 2c8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB 6E FB FF: call 0x584f6d70
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x6e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x5853ff58
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 2e4h]
        cmp eax, 1
        ; Exact mapped bytes 75 45: jne 0x5853ff06
        __asm _emit 0x75
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 0a2h]
        push edx
        push 0
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 5E FB FF: call 0x584f5dd0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x5e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 2e0h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 2dch]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD CB 03 00: call 0x5857cad0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xcb
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 52: jmp 0x5853ff58
        __asm _emit 0xeb
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 2e4h]
        cmp ecx, 2
        ; Exact mapped bytes 75 43: jne 0x5853ff58
        __asm _emit 0x75
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + 0a2h]
        push eax
        push 1
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 5E FB FF: call 0x584f5dd0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x5e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 2e0h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 2dch]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 CA 03 00: call 0x5857ca30
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
