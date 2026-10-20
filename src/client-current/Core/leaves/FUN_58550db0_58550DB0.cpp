// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58550DB0 .. +0x159 bytes.
extern "C" __declspec(naked) void FUN_58550db0_58550DB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58550dcb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 0F 8D 30 01 00 00: jge 0x58550f05
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 5B F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x5b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 59 B6 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xb6
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6A C2 F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xc2
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 5
        ; Exact mapped bytes 0F 85 8F 00 00 00: jne 0x58550e91
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 5B F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x5b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1F B6 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xb6
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 1
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DE C1 F3 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xc1
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7A 5B F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x5b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F3 B5 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xb5
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B2 C1 F3 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xc1
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 19 60 01 00: call 0x58566e90
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov dword ptr [ebp - 24h], edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 22 61 01 00: call 0x58566fb0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 6F: jmp 0x58550f00
        __asm _emit 0xeb
        __asm _emit 0x6f
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 5B F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x5b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9D B5 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xb5
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 AE C1 F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xc1
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 6
        ; Exact mapped bytes 75 46: jne 0x58550f00
        __asm _emit 0x75
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 8]
        mov dword ptr [ebp - 34h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE 5A F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x5a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 67 B5 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xb5
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 26 C1 F3 FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xc1
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E1 9B 01 00: call 0x5856aae0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x9b
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 BD FE FF FF: jmp 0x58550dc2
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
