// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A3470 .. +0x21 bytes.
extern "C" __declspec(naked) void __0CTypeLibCacheMap__QAE_XZ_004A3470() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F 7C 04 00: call 0x4eb100
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588844h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
