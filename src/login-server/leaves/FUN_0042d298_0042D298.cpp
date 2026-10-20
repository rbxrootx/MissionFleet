// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D298 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_0042d298_0042D298() {
    __asm {
        mov eax, 43ab94h
        ; Exact mapped bytes E8 66 23 FF FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ecx], 43ea48h
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 C3 FF FF FF: call 0x42d278
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xff
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
