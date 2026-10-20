// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047D680 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_0047d680_0047D680() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 04 00 00: call 0x47dac0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 3A B1 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
