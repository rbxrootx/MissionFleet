// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 40 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58749F50 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_58749f50_segment_00() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        add dword ptr [ecx + eax*4 + 20d88h], edx
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x58749f75
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ecx + 20d88h]
        mov ecx, dword ptr [ecx + 20df4h]
        push eax
        ; Exact mapped bytes E8 EB D3 1B 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd3
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
