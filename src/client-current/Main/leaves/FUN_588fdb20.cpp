// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FDB20 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_588fdb20() {
    __asm {
        ; Exact mapped bytes A1 F0 45 A2 58: mov eax, dword ptr [0x58a245f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 68h]
        mov edx, eax
        add eax, 68h
        push esi
        mov esi, 0fffbh
        ; Exact mapped bytes 66 21 71 24: and word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x71
        __asm _emit 0x24
        mov eax, dword ptr [eax]
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov byte ptr [edx + 0a4h], 0
        pop esi
        ret
    }
}
