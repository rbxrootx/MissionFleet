// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D6B8 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_0042d6b8_0042D6B8() {
    __asm {
        mov eax, 43aba8h
        ; Exact mapped bytes E8 46 1F FF FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ecx], 43ea84h
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 B8 FF FF FF: call 0x42d68d
        __asm _emit 0xe8
        __asm _emit 0xb8
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
