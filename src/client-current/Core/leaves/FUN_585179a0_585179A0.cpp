// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585179A0 .. +0x153 bytes.
extern "C" __declspec(naked) void FUN_585179a0_585179A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 0F F0 F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf0
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 64h], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F1 46 F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x46
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 68h], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5F 7A F8 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x7a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 6ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 4B FF FF FF: call 0x58517930
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d8h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0d4h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 D3 0B 00: call 0x585d4d30
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd3
        __asm _emit 0x0b
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x58517a42
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E2 01: and dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x01
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x58517a40
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 01: or dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes EB 29: jmp 0x58517a6b
        __asm _emit 0xeb
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E2 01: and dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x01
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 75 16: jne 0x58517a6b
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffeh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C8 04: or ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x04
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 54h], 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0dch], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 70h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F6 DA 29 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xda
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58517acd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 1A: jge 0x58517aed
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 70h]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 66 7A F8 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x7a
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x58517ac4
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
