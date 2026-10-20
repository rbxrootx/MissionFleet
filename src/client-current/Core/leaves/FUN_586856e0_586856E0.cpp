// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586856E0 .. +0x141 bytes.
extern "C" __declspec(naked) void FUN_586856e0_586856E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 2F: je 0x5868571f
        __asm _emit 0x74
        __asm _emit 0x2f
        movzx eax, byte ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 978h]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D5 06 E0 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x06
        __asm _emit 0xe0
        __asm _emit 0xff
        movzx eax, byte ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 0c8h], 32h
        ; Exact mapped bytes E9 EA 00 00 00: jmp 0x58685809
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x586857b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 978h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4C 08 E0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0xe0
        __asm _emit 0xff
        movzx edx, byte ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 9c0h]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 21 F7 EA FF: call 0x58534e80
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf7
        __asm _emit 0xea
        __asm _emit 0xff
        movzx edx, byte ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 9a0h], 1
        movzx ecx, byte ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 138h], 8
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 63 F5 FF FF: call 0x58684cf0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 158h]
        mov eax, 4
        shl eax, 0
        movzx ecx, byte ptr [ebp + 8]
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + eax]
        mov dword ptr [esi + ecx*4 + 8c8h], edx
        ; Exact mapped bytes EB 53: jmp 0x58685809
        __asm _emit 0xeb
        __asm _emit 0x53
        movzx eax, byte ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 978h]
        mov dword ptr [ebp - 14h], edx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0F 06 E0 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0xe0
        __asm _emit 0xff
        movzx eax, byte ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 0c8h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a7ch]
        mov dword ptr [ebp - 1ch], eax
        push 18h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 F2 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xf2
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 58 14 E0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x14
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        movzx edx, byte ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + edx*4 + 0a8h], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
