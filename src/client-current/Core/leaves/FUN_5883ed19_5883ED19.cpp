// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883ED19 .. +0x104 bytes.
extern "C" __declspec(naked) void FUN_5883ed19_5883ED19() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        push edi
        xor edi, edi
        mov eax, edi
        ; Exact mapped bytes 66 0F 6E C0: movd xmm0, eax
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 70 C0 00: pshufd xmm0, xmm0, 0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xc0
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F FE 05 40 85 8B 58: paddd xmm0, xmmword ptr [0x588b8540]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xfe
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 0F 11 44 83 08: movups xmmword ptr [ebx + eax*4 + 8], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x44
        __asm _emit 0x83
        __asm _emit 0x08
        add eax, 4
        cmp eax, 100h
        ; Exact mapped bytes 72 E0: jb 0x5883ed28
        __asm _emit 0x72
        __asm _emit 0xe0
        mov edx, edi
        mov dword ptr [ebx], edi
        lea esi, [ebx + 10h]
        mov dword ptr [ebx + 4], edi
        mov dword ptr [ebp - 4], edx
        mov dword ptr [ebp + 8], esi
        mov dword ptr [ebp - 8], 40h
        mov ecx, dword ptr [esi - 8]
        xor esi, esi
        mov eax, dword ptr [ebp + 10h]
        movzx eax, byte ptr [edx + eax]
        add eax, ecx
        add eax, edi
        mov edi, dword ptr [ebp + 8]
        movzx edx, al
        mov eax, dword ptr [ebp - 4]
        inc eax
        cmp eax, dword ptr [ebp + 0ch]
        cmovne esi, eax
        mov eax, dword ptr [ebx + edx*4 + 8]
        mov dword ptr [edi - 8], eax
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebx + edx*4 + 8], ecx
        mov ecx, dword ptr [edi - 4]
        movzx eax, byte ptr [esi + eax]
        add eax, ecx
        add eax, edx
        movzx edx, al
        lea eax, [esi + 1]
        xor esi, esi
        cmp eax, dword ptr [ebp + 0ch]
        cmovne esi, eax
        mov eax, dword ptr [ebx + edx*4 + 8]
        mov dword ptr [edi - 4], eax
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebx + edx*4 + 8], ecx
        mov ecx, dword ptr [edi]
        movzx eax, byte ptr [esi + eax]
        add eax, ecx
        add eax, edx
        mov edx, dword ptr [ebp + 8]
        movzx edi, al
        lea eax, [esi + 1]
        xor esi, esi
        cmp eax, dword ptr [ebp + 0ch]
        cmovne esi, eax
        mov eax, dword ptr [ebx + edi*4 + 8]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebx + edi*4 + 8], ecx
        lea ecx, [esi + 1]
        mov edx, dword ptr [edx + 4]
        movzx eax, byte ptr [esi + eax]
        mov esi, dword ptr [ebp + 8]
        add eax, edx
        add eax, edi
        movzx edi, al
        mov eax, dword ptr [ebx + edi*4 + 8]
        mov dword ptr [esi + 4], eax
        add esi, 10h
        mov dword ptr [ebx + edi*4 + 8], edx
        xor edx, edx
        cmp ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp + 8], esi
        cmovne edx, ecx
        sub dword ptr [ebp - 8], 1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes 0F 85 49 FF FF FF: jne 0x5883ed5f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
