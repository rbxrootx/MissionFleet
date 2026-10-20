// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00556862 .. +0x24 bytes.
extern "C" __declspec(naked) void _GetDrawAspect_COleClientItem__QBE_AW4tagDVASPECT__XZ_00556862() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 12eh
        push 67c1ech
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 E4 39 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x39
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 2ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
