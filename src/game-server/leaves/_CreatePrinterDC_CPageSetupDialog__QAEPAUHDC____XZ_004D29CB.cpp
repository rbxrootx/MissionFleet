// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D29CB .. +0x2E bytes.
extern "C" __declspec(naked) void _CreatePrinterDC_CPageSetupDialog__QAEPAUHDC____XZ_004D29CB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 60h
        push 5d0e18h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 7E 87 02 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        ; Exact mapped bytes E8 EA 08 00 00: call 0x4d32df
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
