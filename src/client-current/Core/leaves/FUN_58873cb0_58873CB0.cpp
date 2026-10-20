// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873CB0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_58873cb0_58873CB0() {
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
        ; Exact mapped bytes 75 26: jne 0x58873ce4
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x58873cd8
        __asm _emit 0x74
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x58873cd8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp + 0ch], eax
        mov dword ptr [ebp + 8], ecx
        pop ebp
        ; Exact mapped bytes E9 88 FF FF FF: jmp 0x58873c60
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 0ch], eax
        mov dword ptr [ebp + 8], ecx
        pop ebp
        ; Exact mapped bytes E9 AC DD FE FF: jmp 0x58861a90
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0F 00 00 00: call 0x58873d00
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop ebp
        ret
    }
}
