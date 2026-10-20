// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587626D0 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_587626d0_587626D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 6B 05 64 77 94 58 75: imul eax, dword ptr [0x58947764], 0x75
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x75
        cdq
        mov ecx, 64h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        cdq
        idiv ecx
        push eax
        ; Exact mapped bytes 6B 05 64 77 94 58 64: imul eax, dword ptr [0x58947764], 0x64
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x77
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x64
        cdq
        mov ecx, 64h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        cdq
        idiv ecx
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 26 E7 FF: call 0x585d4d30
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x26
        __asm _emit 0xe7
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
