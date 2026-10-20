// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588512F3 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_588512f3() {
    __asm {
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 09: jne 0x58851300
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes FF 75 E4: push dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes E8 2A B4 01 00: call 0x5886c729
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes FF 75 E4: push dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes E8 0E 8A 00 00: call 0x58859d16
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
