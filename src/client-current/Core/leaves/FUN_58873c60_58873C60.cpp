// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873C60 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_58873c60_58873C60() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov edi, edi
        movzx ecx, word ptr [edi]
        lea edi, [edi + 2]
        movzx esi, word ptr [ebx]
        lea ebx, [ebx + 2]
        cmp ecx, esi
        ; Exact mapped bytes 74 1C: je 0x58873c9c
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
        ; Exact mapped bytes 75 04: jne 0x58873ca6
        __asm _emit 0x75
        __asm _emit 0x04
        test ecx, ecx
        ; Exact mapped bytes 75 CA: jne 0x58873c70
        __asm _emit 0x75
        __asm _emit 0xca
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
