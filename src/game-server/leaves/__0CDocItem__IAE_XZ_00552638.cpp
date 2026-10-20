// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00552638 .. +0x29 bytes.
extern "C" __declspec(naked) void __0CDocItem__IAE_XZ_00552638() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 99 56 FA FF: call 0x4f7ce0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x56
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58a2b0h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1ch], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
