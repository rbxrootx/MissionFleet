// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004400A0 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_004400a0_004400A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B0 02 00 00: call 0x440370
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 13 87 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x87
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
