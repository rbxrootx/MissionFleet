// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B9630 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_585b9630_585B9630() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        movzx ecx, byte ptr [ebp - 1]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 84 77 EE FF: call 0x584a0dd0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8B 50 03 00: call 0x585ee6e0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
