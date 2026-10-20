// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585642E0 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_585642e0_585642E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        imul eax, dword ptr [ebp + 8], 0ah
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c0h], eax
        imul edx, dword ptr [ebp + 0ch], 0ah
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0bch], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
