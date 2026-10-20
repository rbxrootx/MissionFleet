// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A6FD0 .. +0x11E bytes.
extern "C" __declspec(naked) void FUN_587a6fd0_587A6FD0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push esi
        push edi
        mov cl, byte ptr [eax + 8]
        cmp cl, 6
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x587a7085
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [eax + 9], 8
        mov ebx, dword ptr [eax]
        ; Exact mapped bytes 75 3F: jne 0x587a702a
        __asm _emit 0x75
        __asm _emit 0x3f
        mov edx, dword ptr [esp + 14h]
        mov esi, edx
        test ebx, ebx
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x587a70ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [esi + 1]
        lea esi, [esi + 4]
        mov cl, byte ptr [esi - 4]
        lea edx, [edx + 4]
        mov byte ptr [edx - 4], al
        movzx eax, byte ptr [esi - 2]
        mov byte ptr [edx - 3], al
        movzx eax, byte ptr [esi - 1]
        mov byte ptr [edx - 2], al
        mov byte ptr [edx - 1], cl
        sub ebx, 1
        ; Exact mapped bytes 75 DA: jne 0x587a7000
        __asm _emit 0x75
        __asm _emit 0xda
        pop edi
        pop esi
        pop ebx
        ret
        mov esi, dword ptr [esp + 14h]
        mov edi, esi
        test ebx, ebx
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x587a70ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 1F 84 00 00 00 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [edi + 2]
        lea edi, [edi + 8]
        mov cl, byte ptr [edi - 8]
        lea esi, [esi + 8]
        mov dl, byte ptr [edi - 7]
        mov byte ptr [esi - 8], al
        movzx eax, byte ptr [edi - 5]
        mov byte ptr [esi - 7], al
        movzx eax, byte ptr [edi - 4]
        mov byte ptr [esi - 6], al
        movzx eax, byte ptr [edi - 3]
        mov byte ptr [esi - 5], al
        movzx eax, byte ptr [edi - 2]
        mov byte ptr [esi - 4], al
        movzx eax, byte ptr [edi - 1]
        mov byte ptr [esi - 3], al
        mov byte ptr [esi - 2], cl
        mov byte ptr [esi - 1], dl
        sub ebx, 1
        ; Exact mapped bytes 75 BF: jne 0x587a7040
        __asm _emit 0x75
        __asm _emit 0xbf
        pop edi
        pop esi
        pop ebx
        ret
        cmp cl, 4
        ; Exact mapped bytes 75 60: jne 0x587a70ea
        __asm _emit 0x75
        __asm _emit 0x60
        cmp byte ptr [eax + 9], 8
        mov edi, dword ptr [eax]
        ; Exact mapped bytes 75 29: jne 0x587a70bb
        __asm _emit 0x75
        __asm _emit 0x29
        mov edx, dword ptr [esp + 14h]
        mov esi, edx
        test edi, edi
        ; Exact mapped bytes 74 4E: je 0x587a70ea
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        mov al, byte ptr [esi + 1]
        lea esi, [esi + 2]
        mov cl, byte ptr [esi - 2]
        lea edx, [edx + 2]
        mov byte ptr [edx - 2], al
        mov byte ptr [edx - 1], cl
        sub edi, 1
        ; Exact mapped bytes 75 E9: jne 0x587a70a0
        __asm _emit 0x75
        __asm _emit 0xe9
        pop edi
        pop esi
        pop ebx
        ret
        mov eax, dword ptr [esp + 14h]
        mov esi, eax
        test edi, edi
        ; Exact mapped bytes 74 25: je 0x587a70ea
        __asm _emit 0x74
        __asm _emit 0x25
        movzx ecx, byte ptr [esi + 2]
        lea esi, [esi + 4]
        mov dl, byte ptr [esi - 4]
        lea eax, [eax + 4]
        mov bl, byte ptr [esi - 3]
        mov byte ptr [eax - 4], cl
        movzx ecx, byte ptr [esi - 1]
        mov byte ptr [eax - 3], cl
        mov byte ptr [eax - 2], dl
        mov byte ptr [eax - 1], bl
        sub edi, 1
        ; Exact mapped bytes 75 DB: jne 0x587a70c5
        __asm _emit 0x75
        __asm _emit 0xdb
        pop edi
        pop esi
        pop ebx
        ret
    }
}
