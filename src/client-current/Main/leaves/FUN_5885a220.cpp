// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885A220 .. +0x11B bytes.
extern "C" __declspec(naked) void FUN_5885a220() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push esi
        mov esi, ecx
        test ebx, ebx
        ; Exact mapped bytes 74 29: je 0x5885a255
        __asm _emit 0x74
        __asm _emit 0x29
        movzx eax, byte ptr [esp + 0ch]
        mov ecx, dword ptr [esi + eax*4 + 978h]
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov byte ptr [eax + esi + 0c8h], 32h
        mov dword ptr [esi + eax*4 + 0a8h], ebx
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [esp + 14h], 0
        push edi
        ; Exact mapped bytes 74 5D: je 0x5885a2ba
        __asm _emit 0x74
        __asm _emit 0x5d
        movzx edi, byte ptr [esp + 10h]
        mov eax, dword ptr [esi + edi*4 + 978h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + edi*4 + 9c0h]
        push 0
        ; Exact mapped bytes E8 20 9B F3 FF: call 0x58793da0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x9b
        __asm _emit 0xf3
        __asm _emit 0xff
        push 0
        mov ecx, esi
        mov dword ptr [esi + edi*4 + 9a0h], 1
        mov dword ptr [esi + edi*4 + 138h], 8
        ; Exact mapped bytes E8 31 E9 FF FF: call 0x58858bd0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + edi*8 + 15ch]
        mov dword ptr [esi + edi*4 + 0a8h], ebx
        mov dword ptr [esi + edi*4 + 8c8h], edx
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        movzx edx, byte ptr [esp + 10h]
        mov eax, dword ptr [esi + edx*4 + 978h]
        ; Exact mapped bytes 66 83 48 24 02: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        mov byte ptr [edx + esi + 0c8h], 0
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 18h
        ; Exact mapped bytes 7E 16: jle 0x5885a2f7
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x5885a2f7
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 600h
        ; Exact mapped bytes EB 02: jmp 0x5885a2f9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0a7ch]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x5885a32e
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edi
        mov edi, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edi
        mov edi, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edi
        mov edi, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        pop edi
        mov dword ptr [esi + edx*4 + 0a8h], ebx
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
