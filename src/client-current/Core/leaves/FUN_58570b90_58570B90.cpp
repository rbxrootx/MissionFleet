// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58570B90 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_58570b90_58570B90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 30h
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 30h
        push ecx
        ; Exact mapped bytes 8B 0D 7C 75 94 58: mov ecx, dword ptr [0x5894757c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E F8 FD FF: call 0x58550440
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x58570bba
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5A: jmp 0x58570c14
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5A DE FF FF: call 0x5856ea20
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x58570c0f
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 7C 39: jl 0x58570c0f
        __asm _emit 0x7c
        __asm _emit 0x39
        mov dword ptr [ebp - 0ch], 20000h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18ch]
        or edx, 30000h
        mov dword ptr [ebp - 8], edx
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 80020a00h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 82 BD 2B 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xbd
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
