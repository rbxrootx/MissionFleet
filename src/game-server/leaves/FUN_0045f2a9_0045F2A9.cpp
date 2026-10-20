// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045F2A9 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_0045f2a9_0045F2A9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 5ba64ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 97 F6 06 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xf6
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 8
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 09 95 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x95
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
