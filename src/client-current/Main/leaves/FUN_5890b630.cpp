// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890B630 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_5890b630() {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp eax, dword ptr [ecx + 88h]
        ; Exact mapped bytes 75 0A: jne 0x5890b646
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 18h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 8ch]
        ; Exact mapped bytes 75 07: jne 0x5890b655
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 1ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
