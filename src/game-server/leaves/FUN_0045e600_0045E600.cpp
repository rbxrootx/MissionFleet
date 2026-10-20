// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045E600 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_0045e600_0045E600() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 400h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F 02 00 00: call 0x45e8a0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 B5 A1 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xa1
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
