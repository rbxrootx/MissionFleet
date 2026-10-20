// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584ACF30 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_584acf30_584ACF30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 68h], 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c4h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b8h], 40000000h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 74h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0bch], 40000000h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
