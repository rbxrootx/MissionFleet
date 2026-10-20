// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436865 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_00436865_00436865() {
    __asm {
        mov eax, 43ab54h
        ; Exact mapped bytes E8 99 8D FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ecx], 43e914h
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 75 BE FF FF: call 0x4326f7
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
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
