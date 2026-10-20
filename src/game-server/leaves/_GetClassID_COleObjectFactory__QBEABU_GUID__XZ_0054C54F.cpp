// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054C54F .. +0x21 bytes.
extern "C" __declspec(naked) void _GetClassID_COleObjectFactory__QBEABU_GUID__XZ_0054C54F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 51h
        push 5cc198h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 FA EB FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xeb
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 24h
        mov esp, ebp
        pop ebp
        ret
    }
}
