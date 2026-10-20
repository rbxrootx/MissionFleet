// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00440060 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_00440060_00440060() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        push 409h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E6 EA 0A 00: call 0x4eeb67
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xea
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 55 87 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x87
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
