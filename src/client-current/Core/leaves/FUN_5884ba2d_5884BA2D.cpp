// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884BA2D .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_5884ba2d_5884BA2D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, dword ptr [ebp + 8]
        push esi
        mov esi, dword ptr [ebp + 10h]
        push edi
        mov eax, dword ptr [ecx + 18f8h]
        mov edi, dword ptr [ecx + esi*4 + 1004h]
        lea edx, [esi + esi]
        cmp edx, eax
        ; Exact mapped bytes 0F 8F 98 00 00 00: jg 0x5884bae9
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes 7D 42: jge 0x5884ba96
        __asm _emit 0x7d
        __asm _emit 0x42
        mov ebx, dword ptr [ecx + edx*4 + 1008h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ecx + edx*4 + 1004h]
        movzx ebx, word ptr [eax + ebx*4]
        movzx eax, word ptr [eax + ecx*4]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 3B D8: cmp bx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd8
        ; Exact mapped bytes 72 20: jb 0x5884ba95
        __asm _emit 0x72
        __asm _emit 0x20
        ; Exact mapped bytes 75 1F: jne 0x5884ba96
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ecx + edx*4 + 1008h]
        mov ebx, dword ptr [ecx + edx*4 + 1004h]
        mov al, byte ptr [eax + ecx + 1900h]
        cmp al, byte ptr [ebx + ecx + 1900h]
        ; Exact mapped bytes 77 01: ja 0x5884ba96
        __asm _emit 0x77
        __asm _emit 0x01
        inc edx
        mov eax, dword ptr [ebp + 0ch]
        mov ebx, dword ptr [ecx + edx*4 + 1004h]
        movzx ecx, word ptr [eax + edi*4]
        mov dword ptr [ebp + 10h], ecx
        movzx ecx, word ptr [eax + ebx*4]
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 72 2F: jb 0x5884bae8
        __asm _emit 0x72
        __asm _emit 0x2f
        ; Exact mapped bytes 66 3B 45 FC: cmp ax, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 75 10: jne 0x5884bacf
        __asm _emit 0x75
        __asm _emit 0x10
        mov al, byte ptr [edi + ecx + 1900h]
        cmp al, byte ptr [ebx + ecx + 1900h]
        ; Exact mapped bytes 76 19: jbe 0x5884bae8
        __asm _emit 0x76
        __asm _emit 0x19
        mov dword ptr [ecx + esi*4 + 1004h], ebx
        mov esi, edx
        mov eax, dword ptr [ecx + 18f8h]
        add edx, edx
        cmp edx, eax
        ; Exact mapped bytes 0F 8E 6A FF FF FF: jle 0x5884ba52
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebx
        mov dword ptr [ecx + esi*4 + 1004h], edi
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
