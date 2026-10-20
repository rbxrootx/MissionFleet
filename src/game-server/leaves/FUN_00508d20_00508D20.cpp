// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00508D20 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_00508d20_00508D20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 10 FE FF FF: call 0x508b43
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        push ecx
        push 5cb3f8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D4 BD 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 98 4C FE FF: call 0x4ed9e5
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 44h]
        push eax
        push 5cb408h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BA BD 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8C C0 02 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
