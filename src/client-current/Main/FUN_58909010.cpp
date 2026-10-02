// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 82 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58909010 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_58909010_segment_00() {
    __asm {
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 0ch]
        push esi
        push eax
        mov eax, dword ptr [esp + 10h]
        mov esi, ecx
        mov ecx, dword ptr [esp + 18h]
        push ecx
        mov ecx, dword ptr [esp + 10h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 FD B9 E2 FF: call 0x58734a30
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xb9
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [esi], 589a2a14h
        mov dword ptr [esi + 50h], 1
        mov dword ptr [esi + 58h], 5
        mov dword ptr [esi + 5ch], 3b9aca00h
        mov dword ptr [esi + 60h], 2
        mov dword ptr [esi + 68h], 0
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
