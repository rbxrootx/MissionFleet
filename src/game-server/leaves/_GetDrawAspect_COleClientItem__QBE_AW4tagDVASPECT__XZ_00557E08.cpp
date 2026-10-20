// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00557E08 .. +0x24 bytes.
extern "C" __declspec(naked) void _GetDrawAspect_COleClientItem__QBE_AW4tagDVASPECT__XZ_00557E08() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 12eh
        push 5cfa14h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 3E 33 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 2ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
