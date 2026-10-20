// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00464619 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_00464619_00464619() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 38h
        mov dword ptr [ebp - 4], eax
        push 1beh
        push 67cd04h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 27 5C 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x5c
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, 80004001h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
