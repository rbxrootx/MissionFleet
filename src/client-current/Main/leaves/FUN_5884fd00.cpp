// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884FD00 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_5884fd00() {
    __asm {
        cmp dword ptr [esp + 8], 2
        ; Exact mapped bytes 75 1A: jne 0x5884fd21
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [esp + 4]
        cmp eax, dword ptr [ecx + 1c4h]
        ; Exact mapped bytes 75 0E: jne 0x5884fd21
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx + 58h], 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
