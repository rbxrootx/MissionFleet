// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F52A0 .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_585f52a0_585F52A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B 6C E9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x6c
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x585f52c5
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6E 6E E9 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x6e
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 22: je 0x585f52ed
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD 7C E9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x7c
        __asm _emit 0xe9
        __asm _emit 0xff
        movzx ecx, byte ptr [ebp + 8]
        cmp eax, ecx
        ; Exact mapped bytes 75 10: jne 0x585f52eb
        __asm _emit 0x75
        __asm _emit 0x10
        movzx edx, byte ptr [ebp + 10h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B6 82 17 00: call 0x5876d5a0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x82
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CD: jmp 0x585f52ba
        __asm _emit 0xeb
        __asm _emit 0xcd
        movzx eax, word ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 EC F2 FF: call 0x58523fc0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xec
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        movzx ecx, byte ptr [ebp + 10h]
        add ecx, 0ah
        push ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8E 82 17 00: call 0x5876d5a0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x82
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 16 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x16
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2B 6E E9 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x6e
        __asm _emit 0xe9
        __asm _emit 0xff
        movzx edx, word ptr [ebp + 0ch]
        cmp eax, edx
        ; Exact mapped bytes 75 20: jne 0x585f534d
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 78h]
        or ecx, 4
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 78h], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 174h]
        ; Exact mapped bytes E8 C6 D7 10 00: call 0x58702b10
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xd7
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 34: jmp 0x585f5381
        __asm _emit 0xeb
        __asm _emit 0x34
        movzx esi, byte ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 16 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x16
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DD 70 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x70
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 96 6B E9 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x6b
        __asm _emit 0xe9
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 4]
        cmp esi, ecx
        ; Exact mapped bytes 75 0F: jne 0x585f5381
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 174h]
        ; Exact mapped bytes E8 90 D1 10 00: call 0x58702510
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xd1
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
