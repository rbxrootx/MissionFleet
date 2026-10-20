// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00527AD6 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_00527ad6_00527AD6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 70h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 83 4E FA FF: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        or edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
