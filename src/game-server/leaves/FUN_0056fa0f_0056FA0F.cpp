// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056FA0F .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_0056fa0f_0056FA0F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 0e4h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0C C9 FD FF: call 0x54c33a
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
