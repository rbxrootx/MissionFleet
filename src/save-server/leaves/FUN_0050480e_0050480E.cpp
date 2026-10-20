// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050480E .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_0050480e_0050480E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 123h
        push 677834h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 38 5A FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x5a
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E8 CC E6 F9 FF: call 0x4a2ef9
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xe6
        __asm _emit 0xf9
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
