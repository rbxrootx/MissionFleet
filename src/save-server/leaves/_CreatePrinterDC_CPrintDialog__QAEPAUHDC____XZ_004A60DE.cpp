// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A60DE .. +0x49 bytes.
extern "C" __declspec(naked) void _CreatePrinterDC_CPrintDialog__QAEPAUHDC____XZ_004A60DE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 111h
        push 67d5f0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 68 41 03 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes E8 8F 03 00 00: call 0x4a64a0
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
