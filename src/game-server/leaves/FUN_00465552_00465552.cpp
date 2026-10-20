// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00465552 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_00465552_00465552() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x465579
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 1
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes DB 45 F8: fild dword ptr [ebp - 8]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes D9 5D F4: fstp dword ptr [ebp - 0xc]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0xf4
        ; Exact mapped bytes DB 45 0C: fild dword ptr [ebp + 0xc]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x0c
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 EE 43 04 00: call 0x4a9984
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x43
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes D9 55 F0: fst dword ptr [ebp - 0x10]
        __asm _emit 0xd9
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes D8 0D 3C 1C 58 00: fmul dword ptr [0x581c3c]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D8 7D F4: fdivr dword ptr [ebp - 0xc]
        __asm _emit 0xd8
        __asm _emit 0x7d
        __asm _emit 0xf4
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 31 32 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
