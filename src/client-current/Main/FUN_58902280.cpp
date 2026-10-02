// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 43 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902280 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_58902280_segment_00() {
    __asm {
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 54 24 10: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes C6 04 24 00: mov byte ptr [esp], 0
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 8B 04 24: mov eax, dword ptr [esp]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 44 24 14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 14: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 19 FF FF FF: call 0x589021c0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 1C: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x1c
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
