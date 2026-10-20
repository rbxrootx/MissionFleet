// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A4EF0 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_587a4ef0_587A4EF0() {
    __asm {
        sub esp, 20h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 1ch], eax
        push esi
        movzx ecx, word ptr [esp + 2ch]
        mov eax, ecx
        mov byte ptr [esp + 9], cl
        movzx ecx, word ptr [esp + 30h]
        shr eax, 8
        mov byte ptr [esp + 8], al
        mov eax, ecx
        shr eax, 8
        mov byte ptr [esp + 0ah], al
        mov byte ptr [esp + 0bh], cl
        movzx ecx, word ptr [esp + 34h]
        mov eax, ecx
        mov byte ptr [esp + 0dh], cl
    }
}
