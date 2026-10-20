// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588509C2 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_588509c2_588509C2() {
    __asm {
        push ebp
        mov ebp, esp
        push 800h
        push 0
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 94 42 89 58: call dword ptr [0x58894294]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 32: jne 0x58850a0b
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 57h
        ; Exact mapped bytes 75 25: jne 0x58850a09
        __asm _emit 0x75
        __asm _emit 0x25
        push 7
        push 588c3044h
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2D 66 01 00: call 0x58867020
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x58850a09
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0
        push 0
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 94 42 89 58: call dword ptr [0x58894294]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        pop ebp
        ret
        xor eax, eax
        pop ebp
        ret
    }
}
