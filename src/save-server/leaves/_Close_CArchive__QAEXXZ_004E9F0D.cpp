// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E9F0D .. +0x33 bytes.
extern "C" __declspec(naked) void _Close_CArchive__QAEXXZ_004E9F0D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1deh
        push 674180h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 36 03 FF FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 07 00 00: call 0x4ea6d5
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 20h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
