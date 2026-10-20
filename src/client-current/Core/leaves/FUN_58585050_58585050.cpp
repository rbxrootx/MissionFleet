// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58585050 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_58585050_58585050() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588aab80h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 03 00 00: call 0x585853a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
