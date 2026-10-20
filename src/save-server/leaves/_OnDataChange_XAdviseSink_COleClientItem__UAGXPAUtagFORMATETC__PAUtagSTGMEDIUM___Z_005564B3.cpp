// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005564B3 .. +0x3C bytes.
extern "C" __declspec(naked) void _OnDataChange_XAdviseSink_COleClientItem__UAGXPAUtagFORMATETC__PAUtagSTGMEDIUM___Z_005564B3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 6ch
        mov dword ptr [ebp - 4], eax
        push 880h
        push 67c1e0h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 8D 3D F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 D4 00 00 00: call dword ptr [edx + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
