// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00439107 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_00439107_00439107() {
    __asm {
        mov eax, 43a960h
        ; Exact mapped bytes E8 F7 64 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ecx], 43e0a0h
        and dword ptr [ebp - 4], 0
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 34 B9 FF FF: call 0x434a5c
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb9
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
