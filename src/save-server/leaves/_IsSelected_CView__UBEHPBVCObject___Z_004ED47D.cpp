// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED47D .. +0x22 bytes.
extern "C" __declspec(naked) void _IsSelected_CView__UBEHPBVCObject___Z_004ED47D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0dah
        push 677b4ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C9 CD FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
