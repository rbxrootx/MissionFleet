// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587ADDD0 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_587addd0_587ADDD0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        push ebp
        mov edi, dword ptr [ebx + 4ch]
        mov eax, dword ptr [ebx + 44h]
        mov edx, dword ptr [ebx + 2ch]
        lea esi, [eax + edi*2]
        movzx ecx, word ptr [esi - 2]
        lea esi, [esi - 2]
        mov eax, ecx
        xor ebp, ebp
        sub eax, edx
        cmp ecx, edx
        movzx eax, ax
        cmovb eax, ebp
        ; Exact mapped bytes 66 89 06: mov word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x06
        sub edi, 1
        ; Exact mapped bytes 75 E3: jne 0x587adde4
        __asm _emit 0x75
        __asm _emit 0xe3
        mov eax, dword ptr [ebx + 40h]
        mov edi, edx
        lea esi, [eax + edx*2]
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [esi - 2]
        lea esi, [esi - 2]
        mov eax, ecx
        xor ebp, ebp
        sub eax, edx
        cmp ecx, edx
        movzx eax, ax
        cmovb eax, ebp
        ; Exact mapped bytes 66 89 06: mov word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x06
        sub edi, 1
        ; Exact mapped bytes 75 E3: jne 0x587ade10
        __asm _emit 0x75
        __asm _emit 0xe3
        pop ebp
        pop edi
        pop esi
        mov dword ptr [ebx + 16c8h], 1
        pop ebx
        ret
    }
}
