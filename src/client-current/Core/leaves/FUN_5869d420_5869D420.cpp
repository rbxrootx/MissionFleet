// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5869D420 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_5869d420_5869D420() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2d0h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 8], edx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 97 89 DE FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x89
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
