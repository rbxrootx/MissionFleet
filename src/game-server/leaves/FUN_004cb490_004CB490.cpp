// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CB490 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_004cb490_004CB490() {
    __asm {
        ; Exact mapped bytes 66 81 3D 00 05 5E 00 5F 03: cmp word ptr [0x5e0500], 0x35f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x5f
        __asm _emit 0x03
        ; Exact mapped bytes 72 03: jb 0x4cb49e
        __asm _emit 0x72
        __asm _emit 0x03
        xor eax, eax
        ret
        mov eax, dword ptr [esp + 8]
        and eax, 0ffffffdfh
        ; Exact mapped bytes 66 3D 09 00: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes 77 06: ja 0x4cb4b1
        __asm _emit 0x77
        __asm _emit 0x06
        mov eax, 1
        ret
        xor eax, eax
        ret
    }
}
