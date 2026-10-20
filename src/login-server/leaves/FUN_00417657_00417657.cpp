// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417657 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_00417657_00417657() {
    __asm {
        mov eax, 43ab68h
        ; Exact mapped bytes E8 A7 7F 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ecx], 43e914h
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 83 B0 01 00: call 0x4326f7
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
