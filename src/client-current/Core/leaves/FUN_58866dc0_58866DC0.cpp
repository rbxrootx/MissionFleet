// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58866DC0 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_58866dc0_58866DC0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 80 99 96 58 00: cmp dword ptr [0x58969980], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 36: jne 0x58866e04
        __asm _emit 0x75
        __asm _emit 0x36
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 0ch]
        test edx, edx
        ; Exact mapped bytes 74 1A: je 0x58866df5
        __asm _emit 0x74
        __asm _emit 0x1a
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x58866df5
        __asm _emit 0x74
        __asm _emit 0x16
        cmp eax, 7fffffffh
        ; Exact mapped bytes 77 0F: ja 0x58866df5
        __asm _emit 0x77
        __asm _emit 0x0f
        mov dword ptr [ebp + 10h], eax
        mov dword ptr [ebp + 0ch], ecx
        mov dword ptr [ebp + 8], edx
        pop ebp
        ; Exact mapped bytes E9 6B EF 00 00: jmp 0x58875d60
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 10h], eax
        mov dword ptr [ebp + 0ch], ecx
        mov dword ptr [ebp + 8], edx
        pop ebp
        ; Exact mapped bytes E9 7C FF FF FF: jmp 0x58866d80
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0C 00 00 00: call 0x58866e20
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        pop ebp
        ret
    }
}
