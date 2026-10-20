// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C48B0 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_584c48b0_584C48B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0a4h], 0
        ; Exact mapped bytes 75 19: jne 0x584c48de
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F3 B7 15 00: call 0x586200d0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xb7
        __asm _emit 0x15
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
