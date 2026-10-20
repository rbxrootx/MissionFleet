// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58616580 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_58616580_58616580() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        ; Exact mapped bytes E8 EE F5 E9 FF: call 0x584b5b80
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf5
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 E3 F5 E9 FF: call 0x584b5b80
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf5
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
