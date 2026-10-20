// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040A6E0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_0040a6e0_0040A6E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 5
        push 5a0b98h
        mov eax, dword ptr [ebp - 4]
        add eax, 5dh
        push eax
        ; Exact mapped bytes E8 7F F0 09 00: call 0x4a9780
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        neg eax
        sbb eax, eax
        inc eax
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 CD E0 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xe0
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
