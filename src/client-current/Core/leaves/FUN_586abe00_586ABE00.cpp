// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586ABE00 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_586abe00_586ABE00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 9ch], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586abe28
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 7D 2D: jge 0x586abe5b
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 0f8h], 0
        ; Exact mapped bytes 74 1B: je 0x586abe59
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0f8h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 88 A2 DD FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xa2
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C4: jmp 0x586abe1f
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov esp, ebp
        pop ebp
        ret
    }
}
