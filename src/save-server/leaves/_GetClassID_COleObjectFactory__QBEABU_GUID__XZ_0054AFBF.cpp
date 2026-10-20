// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054AFBF .. +0x21 bytes.
extern "C" __declspec(naked) void _GetClassID_COleObjectFactory__QBEABU_GUID__XZ_0054AFBF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 51h
        push 678970h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 8A F2 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf2
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 24h
        mov esp, ebp
        pop ebp
        ret
    }
}
