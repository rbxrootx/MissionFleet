// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A4990 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_584a4990_584A4990() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0e0h
        ; Exact mapped bytes E8 29 2B FE FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x2b
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584a49ba
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 1A: jge 0x584a49da
        __asm _emit 0x7d
        __asm _emit 0x1a
        push 38h
        push 0
        imul ecx, dword ptr [ebp - 4], 38h
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 18h]
        push eax
        ; Exact mapped bytes E8 3B 84 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x84
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB D7: jmp 0x584a49b1
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
