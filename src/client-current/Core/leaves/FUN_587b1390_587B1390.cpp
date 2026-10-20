// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B1390 .. +0xC7 bytes.
extern "C" __declspec(naked) void FUN_587b1390_587B1390() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push ebp
        mov ecx, dword ptr [eax + 1450h]
        mov ebp, dword ptr [eax + ebx*4 + 0b5ch]
        lea edx, [ebx + ebx]
        mov dword ptr [esp + 0ch], ebp
        cmp edx, ecx
        ; Exact mapped bytes 0F 8F 97 00 00 00: jg 0x587b144d
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [esp + 14h]
        push edi
        lea edi, [esi + ebp*4]
        mov dword ptr [esp + 1ch], edi
        cmp edx, ecx
        ; Exact mapped bytes 7D 32: jge 0x587b13f9
        __asm _emit 0x7d
        __asm _emit 0x32
        mov edi, dword ptr [eax + edx*4 + 0b60h]
        mov ebp, dword ptr [eax + edx*4 + 0b5ch]
        movzx ecx, word ptr [esi + edi*4]
        movzx esi, word ptr [esi + ebp*4]
        ; Exact mapped bytes 66 3B CE: cmp cx, si
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xce
        ; Exact mapped bytes 72 12: jb 0x587b13f4
        __asm _emit 0x72
        __asm _emit 0x12
        ; Exact mapped bytes 75 11: jne 0x587b13f5
        __asm _emit 0x75
        __asm _emit 0x11
        mov cl, byte ptr [edi + eax + 1458h]
        cmp cl, byte ptr [eax + ebp + 1458h]
        ; Exact mapped bytes 77 01: ja 0x587b13f5
        __asm _emit 0x77
        __asm _emit 0x01
        inc edx
        mov ebp, dword ptr [esp + 14h]
        mov esi, dword ptr [eax + edx*4 + 0b5ch]
        mov ecx, dword ptr [esp + 1ch]
        mov edi, dword ptr [esp + 18h]
        movzx ecx, word ptr [ecx]
        movzx edi, word ptr [edi + esi*4]
        ; Exact mapped bytes 66 3B CF: cmp cx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xcf
        ; Exact mapped bytes 72 2D: jb 0x587b1441
        __asm _emit 0x72
        __asm _emit 0x2d
        ; Exact mapped bytes 75 10: jne 0x587b1426
        __asm _emit 0x75
        __asm _emit 0x10
        mov cl, byte ptr [eax + ebp + 1458h]
        cmp cl, byte ptr [esi + eax + 1458h]
        ; Exact mapped bytes 76 1B: jbe 0x587b1441
        __asm _emit 0x76
        __asm _emit 0x1b
        mov dword ptr [eax + ebx*4 + 0b5ch], esi
        mov ebx, edx
        mov ecx, dword ptr [eax + 1450h]
        add edx, edx
        cmp edx, ecx
        ; Exact mapped bytes 7F 06: jg 0x587b1441
        __asm _emit 0x7f
        __asm _emit 0x06
        mov esi, dword ptr [esp + 18h]
        ; Exact mapped bytes EB 82: jmp 0x587b13c3
        __asm _emit 0xeb
        __asm _emit 0x82
        pop edi
        pop esi
        mov dword ptr [eax + ebx*4 + 0b5ch], ebp
        pop ebp
        pop ebx
        ret
        mov dword ptr [eax + ebx*4 + 0b5ch], ebp
        pop ebp
        pop ebx
        ret
    }
}
