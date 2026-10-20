// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58571660 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_58571660_58571660() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 58h], 0dh
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2E A6 F1 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xa6
        __asm _emit 0xf1
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
