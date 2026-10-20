// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004389C4 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_004389c4_004389C4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 5d2f4ch
        ; Exact mapped bytes E8 60 14 07 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 F3 FD 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
