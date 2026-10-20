// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882E7F0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_5882e7f0_5882E7F0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        add edx, eax
        cmp eax, edx
        ; Exact mapped bytes 74 11: je 0x5882e810
        __asm _emit 0x74
        __asm _emit 0x11
        push esi
        mov esi, dword ptr [ebp + 10h]
        movzx ecx, byte ptr [eax]
        inc eax
        mov byte ptr [ecx + esi], 1
        cmp eax, edx
        ; Exact mapped bytes 75 F4: jne 0x5882e803
        __asm _emit 0x75
        __asm _emit 0xf4
        pop esi
        pop ebp
        ret
    }
}
