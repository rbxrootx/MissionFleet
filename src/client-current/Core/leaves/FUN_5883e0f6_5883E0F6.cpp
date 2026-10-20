// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883E0F6 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_5883e0f6_5883E0F6() {
    __asm {
        push ebp
        mov ebp, esp
        mov edx, dword ptr [ebp + 8]
        push esi
        mov esi, dword ptr [ebp + 10h]
        push edi
        mov edi, dword ptr [ebp + 0ch]
        test esi, esi
        ; Exact mapped bytes 74 1E: je 0x5883e126
        __asm _emit 0x74
        __asm _emit 0x1e
        movzx eax, word ptr [edi]
        add edx, eax
        mov eax, edx
        shr eax, 10h
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 07: je 0x5883e11e
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, eax
        movzx edx, dx
        add edx, ecx
        add edi, 2
        sub esi, 1
        ; Exact mapped bytes 75 E2: jne 0x5883e108
        __asm _emit 0x75
        __asm _emit 0xe2
        mov eax, edx
        shr eax, 10h
        pop edi
        add eax, edx
        pop esi
        pop ebp
        ret
    }
}
