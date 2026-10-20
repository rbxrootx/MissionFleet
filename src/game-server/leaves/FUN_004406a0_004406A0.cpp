// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004406A0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_004406a0_004406A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 52 CD 0A 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xcd
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 1C 81 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
