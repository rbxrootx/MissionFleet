// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00477200 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_00477200_00477200() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F2 61 07 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x61
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 BC 15 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
