// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045F8FB .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_0045f8fb_0045F8FB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 5ba750h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 45 F0 06 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 8
        xor eax, eax
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 BA 8E 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x8e
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
