// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005510A8 .. +0x29 bytes.
extern "C" __declspec(naked) void __0CDocItem__IAE_XZ_005510A8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C9 5C F8 FF: call 0x4d6d80
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x5c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 63c8d8h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1ch], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
