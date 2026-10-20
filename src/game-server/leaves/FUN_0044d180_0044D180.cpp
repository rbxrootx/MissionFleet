// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044D180 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_0044d180_0044D180() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 B5 01 00 00: call 0x44d350
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 38 B6 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
