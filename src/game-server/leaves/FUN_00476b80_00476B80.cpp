// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00476B80 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_00476b80_00476B80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 9A 18 00 00: call 0x478440
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp + 8]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 26 1C 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x26
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
