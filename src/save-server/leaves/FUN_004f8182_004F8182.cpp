// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F8182 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_004f8182_004F8182() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 0F BF 45 10: movsx eax, word ptr [ebp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 0F BF 4D 14: movsx ecx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x14
        cmp eax, ecx
        ; Exact mapped bytes 7E 14: jle 0x4f81a8
        __asm _emit 0x7e
        __asm _emit 0x14
        push 218h
        push 672eech
        ; Exact mapped bytes E8 9D 0B 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f81a8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4f8188
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes 0F BF 45 0C: movsx eax, word ptr [ebp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 0F BF 4D 10: movsx ecx, word ptr [ebp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x10
        cmp eax, ecx
        ; Exact mapped bytes 7C 0C: jl 0x4f81c6
        __asm _emit 0x7c
        __asm _emit 0x0c
        ; Exact mapped bytes 0F BF 55 0C: movsx edx, word ptr [ebp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 0F BF 45 14: movsx eax, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x14
        cmp edx, eax
        ; Exact mapped bytes 7E 1D: jle 0x4f81e3
        __asm _emit 0x7e
        __asm _emit 0x1d
        push 0f112h
        push 673110h
        ; Exact mapped bytes 0F BF 4D 14: movsx ecx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x14
        push ecx
        ; Exact mapped bytes 0F BF 55 10: movsx edx, word ptr [ebp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0x10
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 21 FE FF FF: call 0x4f8004
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
