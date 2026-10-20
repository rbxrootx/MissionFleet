// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D2F1D .. +0x49 bytes.
extern "C" __declspec(naked) void _CreatePrinterDC_CPrintDialog__QAEPAUHDC____XZ_004D2F1D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 10fh
        push 5d0e18h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 29 82 02 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes E8 8F 03 00 00: call 0x4d32df
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [edx + 10h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov eax, dword ptr [ecx + 10h]
        mov esp, ebp
        pop ebp
        ret
    }
}
