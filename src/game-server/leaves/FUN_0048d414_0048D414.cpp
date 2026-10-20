// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048D414 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_0048d414_0048D414() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes E8 34 FE FF FF: call 0x48d250
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x48d434
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 0C E5 5D 00: call dword ptr [0x5de50c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 39: jmp 0x48d46d
        __asm _emit 0xeb
        __asm _emit 0x39
        mov eax, dword ptr [ebp + 10h]
        and eax, 3
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x48d464
        __asm _emit 0x75
        __asm _emit 0x26
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 27: jl 0x48d46b
        __asm _emit 0x7c
        __asm _emit 0x27
        push 0
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7D 1A: jge 0x48d46b
        __asm _emit 0x7d
        __asm _emit 0x1a
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7C 14: jl 0x48d46b
        __asm _emit 0x7c
        __asm _emit 0x14
        push 1
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 7D 07: jge 0x48d46b
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 12340042h
        ; Exact mapped bytes EB 02: jmp 0x48d46d
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
