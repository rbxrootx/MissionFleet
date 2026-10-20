// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EA700 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_585ea700_585EA700() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2F 1D EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x1d
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 48 A3 E9 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xa3
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp dword ptr [eax + 0a4h], 0
        ; Exact mapped bytes 75 22: jne 0x585ea743
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 87 28 EA FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x28
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 21ac8h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AE C0 12 00: call 0x587167f0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xc0
        __asm _emit 0x12
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
