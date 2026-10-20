// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58861454 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_58861454_58861454() {
    __asm {
        mov eax, dword ptr [ecx + 8]
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x5886146e
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes E8 0F 10 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 40 FB FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        xor al, al
        ret
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 77 E8: ja 0x5886145b
        __asm _emit 0x77
        __asm _emit 0xe8
        mov al, 1
        ret
    }
}
