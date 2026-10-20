// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A31A0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_584a31a0_584A31A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C0 0B 00 00: call 0x584a3d70
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 46 00 00 00: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, dword ptr [eax + 4]
        ; Exact mapped bytes 75 06: jne 0x584a31c5
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes E8 FC 03 00 00: call 0x584a35c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
