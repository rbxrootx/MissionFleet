// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00409930 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_00409930_00409930() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 64h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C5 4F 02 00: call 0x42e908
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 43cd58h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
