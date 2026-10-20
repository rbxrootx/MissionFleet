// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00519CBC .. +0x49 bytes.
extern "C" __declspec(naked) void _TrackRubberBand_CRectTracker__QAEHPAVCWnd__VCPoint__H_Z_00519CBC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 24h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 6E 87 01 00: call 0x532455
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9F 07 00 00: call 0x51a49e
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
