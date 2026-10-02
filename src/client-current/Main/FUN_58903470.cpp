// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 32 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903470 .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_58903470_segment_00() {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        mov dword ptr [eax + 4], 8
        mov dword ptr [eax + 8], 10h
        mov dword ptr [eax], 589a2510h
        mov dword ptr [eax + 0ch], ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
