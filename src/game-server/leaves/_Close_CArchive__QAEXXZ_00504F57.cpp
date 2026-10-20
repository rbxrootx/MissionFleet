// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00504F57 .. +0x33 bytes.
extern "C" __declspec(naked) void _Close_CArchive__QAEXXZ_00504F57() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1deh
        push 5c7650h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 EC 61 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 07 00 00: call 0x50571f
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
