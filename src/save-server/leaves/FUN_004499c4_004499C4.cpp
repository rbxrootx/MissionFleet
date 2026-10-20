// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004499C4 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_004499c4_004499C4() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes E8 34 FE FF FF: call 0x449800
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4499e4
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 24 6A 68 00: call dword ptr [0x686a24]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x6a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 39: jmp 0x449a1d
        __asm _emit 0xeb
        __asm _emit 0x39
        mov eax, dword ptr [ebp + 10h]
        and eax, 3
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x449a14
        __asm _emit 0x75
        __asm _emit 0x26
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 27: jl 0x449a1b
        __asm _emit 0x7c
        __asm _emit 0x27
        push 0
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7D 1A: jge 0x449a1b
        __asm _emit 0x7d
        __asm _emit 0x1a
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7C 14: jl 0x449a1b
        __asm _emit 0x7c
        __asm _emit 0x14
        push 1
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 7D 07: jge 0x449a1b
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 12340042h
        ; Exact mapped bytes EB 02: jmp 0x449a1d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
