// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004096E0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_004096e0_004096E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FF C8 02 00: call 0x435ff0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 43cba0h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
