// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049BFC5 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_0049bfc5_0049BFC5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push 0
        push 0
        push 400h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FD FB 09 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        shr eax, 10h
        and eax, 0ffffh
        and eax, 0ffffh
        cmp eax, 534bh
        ; Exact mapped bytes 75 0E: jne 0x49c004
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffffh
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 07: jmp 0x49c00b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
