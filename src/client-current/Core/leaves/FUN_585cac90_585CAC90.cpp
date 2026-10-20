// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585CAC90 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_585cac90_585CAC90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0F 23 EC FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x23
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 21ac8h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 16 00 00 00: call 0x585cacd0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
