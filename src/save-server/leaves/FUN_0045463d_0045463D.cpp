// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045463D .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_0045463d_0045463D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 0d0h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4E 67 0F 00: call 0x54adaa
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x67
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
