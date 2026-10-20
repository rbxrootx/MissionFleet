// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850D23 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_58850d23_58850D23() {
    __asm {
        mov edi, edi
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 8], 0
        ; Exact mapped bytes 75 19: jne 0x58850d47
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        and dword ptr [esi + 4], 0
        push eax
        mov byte ptr [esi + 8], 1
        ; Exact mapped bytes FF 15 0C 44 89 58: call dword ptr [0x5889440c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
        pop esi
        ret
        mov eax, dword ptr [esi + 4]
        pop esi
        ret
    }
}
