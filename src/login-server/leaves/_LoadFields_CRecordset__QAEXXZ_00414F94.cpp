// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414F94 .. +0x29 bytes.
extern "C" __declspec(naked) void _LoadFields_CRecordset__QAEXXZ_00414F94() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 28 FD FF FF: call 0x414cca
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push esi
        push 0dh
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 C0 04 00 00: call 0x41546f
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF 50 40: call dword ptr [eax + 0x40]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x40
        pop esi
        leave
        ret
    }
}
