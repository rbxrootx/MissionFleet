// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00466790 .. +0x26 bytes.
extern "C" __declspec(naked) void _malloc_00466790() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 0
        push 0
        push 1
        ; Exact mapped bytes A1 34 74 68 00: mov eax, dword ptr [0x687434]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 67 00 00 00: call 0x466810
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
