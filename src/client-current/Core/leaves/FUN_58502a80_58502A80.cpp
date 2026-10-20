// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58502A80 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_58502a80_58502A80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 40 0B 00 00: call 0x585035d0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 66 07 FA FF: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x07
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp esi, dword ptr [eax + 4]
        ; Exact mapped bytes 75 06: jne 0x58502aa5
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes E8 1C 0B FA FF: call 0x584a35c0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x0b
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
