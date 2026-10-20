// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AA400 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_584aa400_584AA400() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 00 04 00 00: call 0x584aa810
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E6 8D FF FF: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, dword ptr [eax + 4]
        ; Exact mapped bytes 75 06: jne 0x584aa425
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes E8 9C 91 FF FF: call 0x584a35c0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
