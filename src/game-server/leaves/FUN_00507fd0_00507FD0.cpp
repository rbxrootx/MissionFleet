// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00507FD0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_00507fd0_00507FD0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 68 93 FE FF: call 0x4f1347
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x93
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 5873ach
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
