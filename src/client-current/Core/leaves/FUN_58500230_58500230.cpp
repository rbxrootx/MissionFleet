// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58500230 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_58500230_58500230() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 3ch
        push eax
        ; Exact mapped bytes FF 15 18 42 89 58: call dword ptr [0x58894218]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 2D: je 0x5850027c
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x5850026c
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 29 00 00 00: call 0x58500290
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58500273
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14h
        ; Exact mapped bytes E8 A9 9A FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x9a
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
