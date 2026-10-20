// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883F0BF .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_5883f0bf_5883F0BF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes E8 51 38 FF FF: call 0x58832919
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp + 10h]
        mov dword ptr [ebp - 4], eax
        push dword ptr [ebp - 4]
        push dword ptr [ebp + 0ch]
        push 1400h
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8F 0C C9 FF: call 0x584cfd70
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x0c
        __asm _emit 0xc9
        __asm _emit 0xff
        add esp, 10h
        mov esp, ebp
        pop ebp
        ret
    }
}
