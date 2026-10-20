// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426468 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_00426468_00426468() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4ch]
        ; Exact mapped bytes E8 FA 87 02 00: call 0x44ec7f
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        push 482h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0b0h
        ; Exact mapped bytes E8 76 D4 FD FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 3C 23 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x23
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
