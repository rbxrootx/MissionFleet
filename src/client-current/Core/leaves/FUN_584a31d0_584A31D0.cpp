// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A31D0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_584a31d0_584A31D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D0 0B 00 00: call 0x584a3db0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 16 00 00 00: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, dword ptr [eax + 4]
        ; Exact mapped bytes 75 06: jne 0x584a31f5
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes E8 CC 03 00 00: call 0x584a35c0
        __asm _emit 0xe8
        __asm _emit 0xcc
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
