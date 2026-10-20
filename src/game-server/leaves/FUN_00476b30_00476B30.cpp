// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00476B30 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_00476b30_00476B30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 51 17 00 00: call 0x4782a0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 E6 18 00 00: call 0x478440
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 8]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 72 1C 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x1c
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
