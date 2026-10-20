// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050B97D .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_0050b97d_0050B97D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1
        push 0
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 A0 00 00 00: call dword ptr [edx + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x50b9ac
        __asm _emit 0x75
        __asm _emit 0x12
        push 5cbaa4h
        push 5cbac4h
        ; Exact mapped bytes E8 6C 42 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x42
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ret
    }
}
