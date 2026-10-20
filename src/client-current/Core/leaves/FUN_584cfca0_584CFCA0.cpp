// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CFCA0 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_584cfca0_584CFCA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C8 EC 37 00: call 0x5884e980
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xec
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
