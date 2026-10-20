// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049A580 .. +0x37 bytes.
extern "C" __declspec(naked) void __1CManualAccessor_ATL__QAE_XZ_0049A580() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 6E 2E 05 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x2e
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 59 2E 05 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x2e
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
