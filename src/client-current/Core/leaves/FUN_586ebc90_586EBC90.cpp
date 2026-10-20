// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586EBC90 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_586ebc90_586EBC90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 FE FF FF: call 0x586ebad0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 76 20: jbe 0x586ebcc4
        __asm _emit 0x76
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 FF FF FF: call 0x586ebc30
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 76 06: jbe 0x586ebcb7
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 8A C3 D9 FF: call 0x58488040
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc3
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        lea eax, [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3D C1 FF FF: call 0x586e7e00
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
