// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00557A95 .. +0x37 bytes.
extern "C" __declspec(naked) void _OnViewChange_XAdviseSink_COleClientItem__UAGXKJ_Z_00557A95() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 6ch
        mov dword ptr [ebp - 4], eax
        push 88bh
        push 5cfa08h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 AB 36 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x36
        __asm _emit 0xfa
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
