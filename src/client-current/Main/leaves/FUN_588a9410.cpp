// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588A9410 .. +0x1B7 bytes.
extern "C" __declspec(naked) void FUN_588a9410() {
    __asm {
        mov eax, dword ptr [ecx + 88h]
        mov edx, dword ptr [ecx + 84h]
        push esi
        movzx esi, word ptr [eax + 0ch]
        movzx eax, word ptr [eax + 0ah]
        xor esi, 0aah
        add esi, edx
        xor eax, 0aah
        add eax, esi
        mov esi, dword ptr [ecx + 68h]
        mov dword ptr [esi + 64h], edx
        mov edx, dword ptr [ecx + 88h]
        movzx edx, word ptr [edx + 8]
        xor edx, 0aah
        cmp edx, dword ptr [ecx + 84h]
        mov edx, dword ptr [ecx + 88h]
        ; Exact mapped bytes 7E 44: jle 0x588a949c
        __asm _emit 0x7e
        __asm _emit 0x44
        movzx esi, word ptr [edx + 8]
        movzx edx, word ptr [edx + 50h]
        xor edx, 0aah
        imul edx, eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 74h]
        xor esi, 0aah
        sub esi, dword ptr [ecx + 84h]
        mov dword ptr [edx + 64h], eax
        mov edx, dword ptr [ecx + 78h]
        lea eax, [esi + esi*4]
        add eax, eax
        mov dword ptr [edx + 64h], eax
        ; Exact mapped bytes E9 FD 00 00 00: jmp 0x588a9599
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        movzx edi, word ptr [edx + 8]
        movzx edx, word ptr [edx + 50h]
        xor edx, 0aah
        imul edx, eax
        mov esi, dword ptr [ecx + 84h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [edx + 64h], eax
        mov eax, dword ptr [ecx + 88h]
        mov dl, byte ptr [eax + 0eh]
        xor edi, 0aah
        sub esi, edi
        and dl, 0fh
        pop edi
        cmp dl, 2
        ; Exact mapped bytes 75 27: jne 0x588a950c
        __asm _emit 0x75
        __asm _emit 0x27
        movzx edx, word ptr [eax + 0eh]
        shr edx, 4
        xor edx, 0ffffffaah
        and edx, 0ffh
        mov eax, 66666667h
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 1fh
        lea edx, [edx + eax + 5]
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x588a9590
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, eax
        movzx eax, word ptr [edx + 0eh]
        mov edx, eax
        and edx, 0fh
        ; Exact mapped bytes 66 83 FA 01: cmp dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x01
        ; Exact mapped bytes 75 1F: jne 0x588a953c
        __asm _emit 0x75
        __asm _emit 0x1f
        shr eax, 4
        xor eax, 0ffffffaah
        and eax, 0ffh
        mov edx, eax
        mov eax, 2aaaaaabh
        imul edx
        mov eax, edx
        shr eax, 1fh
        lea edx, [edx + eax + 0ch]
        ; Exact mapped bytes EB 54: jmp 0x588a9590
        __asm _emit 0xeb
        __asm _emit 0x54
        ; Exact mapped bytes 66 83 FA 03: cmp dx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x03
        ; Exact mapped bytes 75 14: jne 0x588a9556
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ecx + 78h]
        shr eax, 5
        xor eax, 0ffffffd5h
        and eax, 7fh
        imul eax, esi
        mov dword ptr [edx + 64h], eax
        ; Exact mapped bytes EB 43: jmp 0x588a9599
        __asm _emit 0xeb
        __asm _emit 0x43
        ; Exact mapped bytes 66 83 FA 04: cmp dx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x04
        ; Exact mapped bytes 75 17: jne 0x588a9573
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ecx + 78h]
        shr eax, 5
        xor eax, 0ffffffd5h
        and eax, 7fh
        add eax, 0ah
        imul eax, esi
        mov dword ptr [edx + 64h], eax
        ; Exact mapped bytes EB 26: jmp 0x588a9599
        __asm _emit 0xeb
        __asm _emit 0x26
        shr eax, 4
        xor eax, 0ffffffaah
        and eax, 0ffh
        mov edx, eax
        mov eax, 55555556h
        imul edx
        mov eax, edx
        shr eax, 1fh
        lea edx, [edx + eax + 2]
        mov eax, dword ptr [ecx + 78h]
        imul edx, esi
        mov dword ptr [eax + 64h], edx
        mov edx, dword ptr [ecx + 88h]
        movzx eax, word ptr [edx + 8]
        xor eax, 0aah
        pop esi
        cmp eax, dword ptr [ecx + 84h]
        ; Exact mapped bytes 74 0B: je 0x588a95bc
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 7ch]
        mov dword ptr [ecx + 50h], 1
        ret
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [edx + 50h], 0
        ret
    }
}
