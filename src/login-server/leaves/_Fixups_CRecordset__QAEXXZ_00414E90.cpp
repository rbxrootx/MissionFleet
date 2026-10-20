// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414E90 .. +0x2A bytes.
extern "C" __declspec(naked) void _Fixups_CRecordset__QAEXXZ_00414E90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        mov esi, ecx
        push 0
        push esi
        push 5
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 C9 05 00 00: call 0x41546f
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        lea ecx, [ebp - 38h]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [esi]
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
