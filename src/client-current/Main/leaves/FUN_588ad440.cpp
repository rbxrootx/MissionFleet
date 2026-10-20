// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588AD440 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_588ad440() {
    __asm {
        cmp dword ptr [esp + 8], 2
        ; Exact mapped bytes 75 1F: jne 0x588ad466
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [esp + 4]
        cmp eax, dword ptr [ecx + 68h]
        ; Exact mapped bytes 75 0A: jne 0x588ad45a
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes E8 8B FA FF FF: call 0x588acee0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 75 07: jne 0x588ad466
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
