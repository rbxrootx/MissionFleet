// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00472B40 .. +0x62 bytes.
extern "C" __declspec(naked) void __heapchk_00472B40() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 63f1f8h
        push 46d504h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, -0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], 0fffffffeh
        ; Exact mapped bytes 83 3D 98 89 68 00 03: cmp dword ptr [0x688998], 3
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 75 3C: jne 0x472baf
        __asm _emit 0x75
        __asm _emit 0x3c
        push 9
        ; Exact mapped bytes E8 36 DD FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 87 18 00 00: call 0x474410
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 07: jge 0x472b94
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0fffffffch
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 02 00 00 00: call 0x472ba2
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x472bad
        __asm _emit 0xeb
        __asm _emit 0x0b
    }
}
