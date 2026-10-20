// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F4883 .. +0x29 bytes.
extern "C" __declspec(naked) void FID_conflict___0CTestCmdUI__QAE_XZ_004F4883() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EC 3E 00 00: call 0x4f877e
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 582f74h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 28h], 1
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
