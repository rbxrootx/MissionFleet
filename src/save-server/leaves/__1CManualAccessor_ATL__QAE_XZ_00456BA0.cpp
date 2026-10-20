// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00456BA0 .. +0x37 bytes.
extern "C" __declspec(naked) void __1CManualAccessor_ATL__QAE_XZ_00456BA0() {
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
        ; Exact mapped bytes E8 EE 58 07 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 D9 58 07 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
