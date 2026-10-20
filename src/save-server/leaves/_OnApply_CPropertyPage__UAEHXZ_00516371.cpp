// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00516371 .. +0x31 bytes.
extern "C" __declspec(naked) void _OnApply_CPropertyPage__UAEHXZ_00516371() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 12bh
        push 674cach
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 D5 3E FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x3e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 CC 00 00 00: call dword ptr [edx + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
