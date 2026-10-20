// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045E380 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_0045e380_0045E380() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 E9 05 00 00: call 0x45e980
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 3C A4 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xa4
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
