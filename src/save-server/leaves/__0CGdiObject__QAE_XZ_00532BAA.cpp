// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00532BAA .. +0x29 bytes.
extern "C" __declspec(naked) void __0CGdiObject__QAE_XZ_00532BAA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D7 1B FF FF: call 0x524790
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 636690h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
