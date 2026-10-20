// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00533E0B .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_00533e0b_00533E0B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        ; Exact mapped bytes E8 2A E9 FF FF: call 0x53274b
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 584d10h
        ; Exact mapped bytes E8 F9 72 FC FF: call 0x4fb125
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x72
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
