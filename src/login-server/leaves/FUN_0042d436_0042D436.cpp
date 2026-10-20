// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D436 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_0042d436_0042D436() {
    __asm {
        mov eax, 43abf8h
        ; Exact mapped bytes E8 C8 21 FF FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ecx], 43eaa0h
        push dword ptr [ecx + 4]
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 BF 04 00 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
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
