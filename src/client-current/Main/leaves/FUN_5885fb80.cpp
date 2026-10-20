// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885FB80 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_5885fb80() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push esi
        mov esi, ecx
        test ebx, ebx
        ; Exact mapped bytes 74 29: je 0x5885fbb5
        __asm _emit 0x74
        __asm _emit 0x29
        movzx eax, byte ptr [esp + 0ch]
        mov ecx, dword ptr [esi + eax*4 + 67ch]
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov byte ptr [eax + esi + 110h], 32h
        mov dword ptr [esi + eax*4 + 0fch], ebx
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [esp + 14h], 0
        ; Exact mapped bytes 74 55: je 0x5885fc11
        __asm _emit 0x74
        __asm _emit 0x55
        push edi
        movzx edi, byte ptr [esp + 10h]
        mov eax, dword ptr [esi + edi*4 + 67ch]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + edi*4 + 6ach]
        push 0
        ; Exact mapped bytes E8 C0 41 F3 FF: call 0x58793da0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x41
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [esi + edi*4 + 698h], 1
        mov dword ptr [esi + edi*4 + 148h], 8
        mov edx, dword ptr [esi + edi*8 + 160h]
        mov dword ptr [esi + edi*4 + 0fch], ebx
        mov dword ptr [esi + edi*4 + 614h], edx
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        movzx eax, byte ptr [esp + 0ch]
        mov ecx, dword ptr [esi + eax*4 + 67ch]
        ; Exact mapped bytes 66 83 49 24 02: or word ptr [ecx + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x02
        mov byte ptr [eax + esi + 110h], 0
        mov dword ptr [esi + eax*4 + 0fch], ebx
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
