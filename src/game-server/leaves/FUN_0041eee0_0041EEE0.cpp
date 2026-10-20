// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041EEE0 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_0041eee0_0041EEE0() {
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
        ; Exact mapped bytes E8 CA 18 00 00: call 0x4207d0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp + 8]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 C6 98 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
