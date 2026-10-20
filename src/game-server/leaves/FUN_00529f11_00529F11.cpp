// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00529F11 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_00529f11_00529F11() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes FF 15 8C 23 5E 00: call dword ptr [0x5e238c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 80000000h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x529f41
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes FF 15 8C 23 5E 00: call dword ptr [0x5e238c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        xor ecx, ecx
        cmp eax, 4
        sete cl
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 75 35: jne 0x529f76
        __asm _emit 0x75
        __asm _emit 0x35
        ; Exact mapped bytes FF 15 8C 23 5E 00: call dword ptr [0x5e238c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 80000000h
        test eax, eax
        ; Exact mapped bytes 75 1D: jne 0x529f6d
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes FF 15 8C 23 5E 00: call dword ptr [0x5e238c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        xor edx, edx
        cmp eax, 3
        sete dl
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 75 09: jne 0x529f76
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 0E: jmp 0x529f84
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 5c8fd8h
        ; Exact mapped bytes FF 15 F4 25 5E 00: call dword ptr [0x5e25f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes A3 58 E8 5D 00: mov dword ptr [0x5de858], eax
        __asm _emit 0xa3
        __asm _emit 0x58
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
