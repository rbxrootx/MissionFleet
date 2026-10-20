// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433317 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_00433317_00433317() {
    __asm {
        push esi
        mov esi, ecx
        push 0
        mov eax, dword ptr [esi]
        push dword ptr [esp + 0ch]
        ; Exact mapped bytes FF 50 28: call dword ptr [eax + 0x28]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x28
        push dword ptr [esi + 4]
        ; Exact mapped bytes FF 15 EC C0 43 00: call dword ptr [0x43c0ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        pop esi
        ; Exact mapped bytes 75 0D: jne 0x433340
        __asm _emit 0x75
        __asm _emit 0x0d
        push eax
        ; Exact mapped bytes FF 15 C0 C1 43 00: call dword ptr [0x43c1c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 2E 04 00 00: call 0x43376e
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
