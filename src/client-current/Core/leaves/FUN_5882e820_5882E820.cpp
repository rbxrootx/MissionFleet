// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882E820 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_5882e820_5882E820() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [eax + ecx*2]
        cmp eax, edx
        ; Exact mapped bytes 74 13: je 0x5882e843
        __asm _emit 0x74
        __asm _emit 0x13
        push esi
        mov esi, dword ptr [ebp + 10h]
        movzx ecx, word ptr [eax]
        add eax, 2
        mov byte ptr [ecx + esi], 1
        cmp eax, edx
        ; Exact mapped bytes 75 F2: jne 0x5882e834
        __asm _emit 0x75
        __asm _emit 0xf2
        pop esi
        pop ebp
        ret
    }
}
