// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041919F .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_0041919f_0041919F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 5a134ch
        ; Exact mapped bytes E8 C6 46 0F 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x46
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 19 F6 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf6
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
