// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 35 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903D30 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_58903d30_segment_00() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 0ch]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esp + 0ch]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 10h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
