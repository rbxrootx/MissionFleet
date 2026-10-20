// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DE1F .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_0042de1f_0042DE1F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF F0 FF FF: call 0x42cee8
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40c30h
        ; Exact mapped bytes E8 15 06 00 00: call 0x42e460
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 9B 6F 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x6f
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
