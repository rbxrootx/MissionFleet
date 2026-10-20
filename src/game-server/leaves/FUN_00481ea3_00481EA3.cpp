// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00481EA3 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_00481ea3_00481EA3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 29 ED 06 00: call 0x4f0be2
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xed
        __asm _emit 0x06
        __asm _emit 0x00
        push 28fh
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 5ch
        ; Exact mapped bytes E8 59 89 05 00: call 0x4da824
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x89
        __asm _emit 0x05
        __asm _emit 0x00
        push 5dcbc0h
        push 413h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0C CD 06 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xcd
        __asm _emit 0x06
        __asm _emit 0x00
        push 5dcbc4h
        push 416h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FA CC 06 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xcc
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 E2 68 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
