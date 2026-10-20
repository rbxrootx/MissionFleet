// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057016D .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_0057016d_0057016D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 18dh
        push 5d0548h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 D9 AF F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xaf
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 30h
        mov esp, ebp
        pop ebp
        ret
    }
}
