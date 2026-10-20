// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F5AA .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_5886f5aa_5886F5AA() {
    __asm {
        mov edi, edi
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
        ; Exact mapped bytes 75 48: jne 0x5886f60b
        __asm _emit 0x75
        __asm _emit 0x48
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 57h
        ; Exact mapped bytes 75 3B: jne 0x5886f609
        __asm _emit 0x75
        __asm _emit 0x3b
        push 7
        push 588c3044h
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 43 7A FF FF: call 0x58867020
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x5886f609
        __asm _emit 0x74
        __asm _emit 0x25
        push 7
        push 588c5e98h
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2D 7A FF FF: call 0x58867020
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x5886f609
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
