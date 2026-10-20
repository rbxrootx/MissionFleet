// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00523AF1 .. +0x31 bytes.
extern "C" __declspec(naked) void _OnApply_CPropertyPage__UAEHXZ_00523AF1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 12bh
        push 5c8174h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 55 76 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x76
        __asm _emit 0xfd
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
