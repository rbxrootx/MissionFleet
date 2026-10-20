// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58786BF0 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_58786bf0_58786BF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ech]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2F A0 DE FF: call 0x58570c40
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xa0
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0e4h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
