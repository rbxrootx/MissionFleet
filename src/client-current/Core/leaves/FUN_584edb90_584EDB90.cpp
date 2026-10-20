// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EDB90 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_584edb90_584EDB90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 50 1C 00 00: call 0x584ef7f0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D 1B 00 00: call 0x584ef6d0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
