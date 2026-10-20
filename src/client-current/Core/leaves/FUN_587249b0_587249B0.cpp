// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587249B0 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_587249b0_587249B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        movzx eax, byte ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 7C 12: jl 0x587249d3
        __asm _emit 0x7c
        __asm _emit 0x12
        movzx ecx, byte ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 13a5h]
        cmp ecx, eax
        ; Exact mapped bytes 7C 06: jl 0x587249d9
        __asm _emit 0x7c
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes EB 66: jmp 0x58724a3d
        __asm _emit 0xeb
        __asm _emit 0x66
        ; Exact mapped bytes EB 64: jmp 0x58724a3d
        __asm _emit 0xeb
        __asm _emit 0x64
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x587249f2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0a0h]
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 3A: jge 0x58724a3b
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 0fa4h], 0
        ; Exact mapped bytes 74 28: je 0x58724a39
        __asm _emit 0x74
        __asm _emit 0x28
        movzx eax, byte ptr [ebp + 8]
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 75 16: jne 0x58724a30
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 0da4h]
        ; Exact mapped bytes E8 54 7B EF FF: call 0x5861c580
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x7b
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 0F: jmp 0x58724a3d
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes EB 09: jmp 0x58724a39
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB AE: jmp 0x587249e9
        __asm _emit 0xeb
        __asm _emit 0xae
        xor eax, eax
        mov esp, ebp
    }
}
