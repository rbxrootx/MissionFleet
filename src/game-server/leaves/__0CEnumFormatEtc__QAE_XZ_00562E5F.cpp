// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00562E5F .. +0x31 bytes.
extern "C" __declspec(naked) void __0CEnumFormatEtc__QAE_XZ_00562E5F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1
        push 0
        push 0
        push 14h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A E2 FF FF: call 0x5610c0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58942ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 38h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
