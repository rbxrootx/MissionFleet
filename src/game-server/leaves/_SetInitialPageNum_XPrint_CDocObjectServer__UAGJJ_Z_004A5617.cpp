// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A5617 .. +0x31 bytes.
extern "C" __declspec(naked) void _SetInitialPageNum_XPrint_CDocObjectServer__UAGJJ_Z_004A5617() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 40h
        mov dword ptr [ebp - 4], eax
        push 0c3h
        push 5d0270h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 29 5B 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x5b
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 24h], eax
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
