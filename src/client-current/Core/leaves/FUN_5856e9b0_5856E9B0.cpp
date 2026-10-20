// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856E9B0 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_5856e9b0_5856E9B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a9cbch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 E5 2B 00: call 0x5882cf00
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xe5
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F E5 2B 00: call 0x5882cf00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe5
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
