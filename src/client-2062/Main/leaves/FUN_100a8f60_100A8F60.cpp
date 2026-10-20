// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A8F60 .. +0xE7 bytes.
extern "C" __declspec(naked) void FUN_100a8f60_100A8F60() {
    __asm {
        push ecx
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        mov edi, ecx
        test esi, esi
        mov dword ptr [esp + 8], edi
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x100a903d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 18h]
        xor eax, eax
        xor ecx, ecx
        xor edx, edx
        ; Exact mapped bytes 66 8B 45 04: mov ax, word ptr [ebp + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        ; Exact mapped bytes 66 8B 4D 02: mov cx, word ptr [ebp + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x02
        ; Exact mapped bytes 66 8B 55 00: mov dx, word ptr [ebp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x00
        xor ebx, ebx
        ; Exact mapped bytes 66 8B 5E 5C: mov bx, word ptr [esi + 0x5c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5e
        __asm _emit 0x5c
        push eax
        push ecx
        push edx
        mov ecx, esi
        xor ebx, 0aah
        ; Exact mapped bytes E8 DD 00 F8 FF: call 0x10029080
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1
        mov ecx, dword ptr [eax + 0d48h]
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 E5 36 00 00: call 0x100ac6a0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 0d0ch]
        push edx
        ; Exact mapped bytes E8 53 54 FB FF: call 0x1005e420
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x54
        __asm _emit 0xfb
        __asm _emit 0xff
        add esi, 50h
        add edi, 0b4h
        mov ecx, 0dfh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov esi, dword ptr [esp + 10h]
        mov ecx, esi
        ; Exact mapped bytes E8 88 F7 FF FF: call 0x100a8770
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes 66 8B 45 04: mov ax, word ptr [ebp + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x04
        pop ebp
        cmp ebx, eax
        pop ebx
        ; Exact mapped bytes 7D 3F: jge 0x100a9033
        __asm _emit 0x7d
        __asm _emit 0x3f
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 34h
        ; Exact mapped bytes 7E 12: jle 0x100a9014
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100a9014
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax + 0d0h]
        ; Exact mapped bytes EB 02: jmp 0x100a9016
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 19bh
        ; Exact mapped bytes E8 7D 4A F7 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x4a
        __asm _emit 0xf7
        __asm _emit 0xff
        or byte ptr [esi + 24h], 2
        pop edi
        pop esi
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        or byte ptr [edi + 24h], 2
        pop edi
        pop esi
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
