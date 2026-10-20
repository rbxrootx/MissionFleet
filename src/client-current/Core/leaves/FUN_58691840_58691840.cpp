// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58691840 .. +0x10E bytes.
extern "C" __declspec(naked) void FUN_58691840_58691840() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 2F: je 0x5869187f
        __asm _emit 0x74
        __asm _emit 0x2f
        movzx eax, byte ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 67ch]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 75 45 DF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x45
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx eax, byte ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 110h], 32h
        ; Exact mapped bytes E9 B7 00 00 00: jmp 0x58691936
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x5869190c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 67ch]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EC 46 DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx edx, byte ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6ach]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C1 35 EA FF: call 0x58534e80
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x35
        __asm _emit 0xea
        __asm _emit 0xff
        movzx edx, byte ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 698h], 1
        movzx ecx, byte ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 148h], 8
        movzx eax, byte ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 15ch]
        mov eax, 4
        shl eax, 0
        movzx ecx, byte ptr [ebp + 8]
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + eax]
        mov dword ptr [esi + ecx*4 + 614h], edx
        ; Exact mapped bytes EB 2A: jmp 0x58691936
        __asm _emit 0xeb
        __asm _emit 0x2a
        movzx eax, byte ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 67ch]
        mov dword ptr [ebp - 14h], edx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B9 44 DF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x44
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx eax, byte ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 110h], 0
        movzx edx, byte ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + edx*4 + 0fch], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
