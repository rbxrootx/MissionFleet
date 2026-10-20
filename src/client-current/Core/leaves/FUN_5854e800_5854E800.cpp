// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5854E800 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_5854e800_5854E800() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F 77 F3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x77
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 A4 FD F7 FF: call 0x584ce5c0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 70h]
        ; Exact mapped bytes E8 99 FD F7 FF: call 0x584ce5c0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xfd
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
