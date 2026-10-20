// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004619E3 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_004619e3_004619E3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 5bab98h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 5D CF 06 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xcf
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 8
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 CF 6D 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x6d
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
