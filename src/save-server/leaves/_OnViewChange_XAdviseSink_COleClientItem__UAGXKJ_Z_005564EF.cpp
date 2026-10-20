// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005564EF .. +0x37 bytes.
extern "C" __declspec(naked) void _OnViewChange_XAdviseSink_COleClientItem__UAGXKJ_Z_005564EF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 6ch
        mov dword ptr [ebp - 4], eax
        push 88bh
        push 67c1e0h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 51 3D F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 74: call dword ptr [edx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x74
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
