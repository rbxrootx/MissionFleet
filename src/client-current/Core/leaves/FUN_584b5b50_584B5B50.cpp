// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B5B50 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_584b5b50_584B5B50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 1E 00 00 00: call 0x584b5b80
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 58h]
        ; Exact mapped bytes E8 13 00 00 00: call 0x584b5b80
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
