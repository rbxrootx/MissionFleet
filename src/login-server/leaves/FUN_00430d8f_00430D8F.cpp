// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430D8F .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_00430d8f_00430D8F() {
    __asm {
        push ebx
        push esi
        push edi
        mov ebx, ecx
        ; Exact mapped bytes E8 59 D4 FF FF: call 0x42e1f2
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, 40000000h
        ; Exact mapped bytes 75 46: jne 0x430de6
        __asm _emit 0x75
        __asm _emit 0x46
        ; Exact mapped bytes E8 B6 46 FE FF: call 0x41545b
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 3B: je 0x430de6
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 3D 48 C4 43 00: mov edi, dword ptr [0x43c448]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push 10h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 2C: jl 0x430de6
        __asm _emit 0x7c
        __asm _emit 0x2c
        push 11h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 23: jl 0x430de6
        __asm _emit 0x7c
        __asm _emit 0x23
        push 12h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 1A: jl 0x430de6
        __asm _emit 0x7c
        __asm _emit 0x1a
        push 0
        push 0e146h
        push 111h
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push 1
        pop eax
        ; Exact mapped bytes EB 07: jmp 0x430ded
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, ebx
        ; Exact mapped bytes E8 52 E4 FF FF: call 0x42f23f
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
