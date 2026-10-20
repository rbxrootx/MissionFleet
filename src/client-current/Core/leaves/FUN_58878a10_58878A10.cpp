// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58878A10 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_58878a10_58878A10() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push edi
        mov edi, dword ptr [ebp + 10h]
        test edi, edi
        ; Exact mapped bytes 75 05: jne 0x58878a22
        __asm _emit 0x75
        __asm _emit 0x05
        xor eax, eax
        pop edi
        pop ebp
        ret
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        ; Exact mapped bytes 66 0F 1F 84 00 00 00 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        lea ebx, [ebx + 2]
        movzx ecx, word ptr [ebx - 2]
        movzx esi, word ptr [eax]
        add eax, 2
        mov dword ptr [ebp + 0ch], eax
        cmp ecx, esi
        ; Exact mapped bytes 74 1C: je 0x58878a63
        __asm _emit 0x74
        __asm _emit 0x1c
        lea eax, [ecx - 41h]
        cmp eax, 19h
        lea edx, [ecx + 20h]
        lea eax, [esi - 41h]
        cmova edx, ecx
        cmp eax, 19h
        mov ecx, edx
        lea edx, [esi + 20h]
        cmova edx, esi
        mov esi, edx
        mov eax, ecx
        sub eax, esi
        ; Exact mapped bytes 75 09: jne 0x58878a72
        __asm _emit 0x75
        __asm _emit 0x09
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x58878a72
        __asm _emit 0x74
        __asm _emit 0x05
        sub edi, 1
        ; Exact mapped bytes 75 BE: jne 0x58878a30
        __asm _emit 0x75
        __asm _emit 0xbe
        pop esi
        pop ebx
        pop edi
        pop ebp
        ret
    }
}
