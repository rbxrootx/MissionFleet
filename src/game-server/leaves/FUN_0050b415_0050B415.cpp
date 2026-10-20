// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050B415 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_0050b415_0050B415() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 41h
        push 5cba5ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 34 FD FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 84 00 00 00: call dword ptr [edx + 0x84]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
