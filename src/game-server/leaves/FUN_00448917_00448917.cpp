// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00448917 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_00448917_00448917() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 ED FF FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 A4 FE 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xfe
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
