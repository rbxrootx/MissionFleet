// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A5ADB .. +0x2E bytes.
extern "C" __declspec(naked) void _CreatePrinterDC_CPageSetupDialog__QAEPAUHDC____XZ_004A5ADB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 60h
        push 67d5f0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 6E 47 03 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        ; Exact mapped bytes E8 9B 09 00 00: call 0x4a64a0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
