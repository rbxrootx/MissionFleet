// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416B54 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_00416b54_00416B54() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        ; Exact mapped bytes 75 11: jne 0x416b6e
        __asm _emit 0x75
        __asm _emit 0x11
        push 417427h
        mov ecx, 44f620h
        ; Exact mapped bytes E8 DC 02 02 00: call 0x436e48
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes E8 40 F1 01 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [eax + 1038h], esi
        pop esi
        ret
    }
}
