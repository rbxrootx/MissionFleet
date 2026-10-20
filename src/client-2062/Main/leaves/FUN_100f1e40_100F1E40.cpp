// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F1E40 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_100f1e40_100F1E40() {
    __asm {
        mov edx, dword ptr [esp + 4]
        mov eax, ecx
        push esi
        push edi
        lea esi, [edx + 48h]
        lea edi, [eax + 48h]
        mov ecx, 17h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [edx + 0b5ch]
        mov dword ptr [eax + 0b5ch], ecx
        mov ecx, dword ptr [edx + 0b60h]
        mov dword ptr [eax + 0b60h], ecx
        mov ecx, dword ptr [edx + 0b64h]
        mov dword ptr [eax + 0b64h], ecx
        mov edx, dword ptr [edx + 0b68h]
        mov ecx, eax
        mov dword ptr [eax + 0b68h], edx
        ; Exact mapped bytes E8 E4 05 00 00: call 0x100f2470
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
