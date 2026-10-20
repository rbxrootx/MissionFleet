// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F69F0 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_585f69f0_585F69F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10dd0h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7F 47 1C 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
