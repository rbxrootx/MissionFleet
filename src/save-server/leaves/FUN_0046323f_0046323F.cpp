// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046323F .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_0046323f_0046323F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A 5C 11 00: call 0x578e70
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x5c
        __asm _emit 0x11
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 63d020h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
