// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055D6B7 .. +0x27 bytes.
extern "C" __declspec(naked) void _GetIconicMetafile_COleChangeIconDialog__QBEPAXXZ_0055D6B7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 168h
        push 5cebf0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 8F DA F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xda
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 84h]
        mov esp, ebp
        pop ebp
        ret
    }
}
