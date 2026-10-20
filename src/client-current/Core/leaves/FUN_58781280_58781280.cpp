// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58781280 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_58781280_58781280() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5878129b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 7
        ; Exact mapped bytes 7D 4C: jge 0x587812ed
        __asm _emit 0x7d
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + ecx*4 + 154h]
        shr eax, 10h
        movzx ecx, ax
        cmp ecx, 3
        ; Exact mapped bytes 75 32: jne 0x587812eb
        __asm _emit 0x75
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + edx*4 + 154h]
        and ecx, 0ffffh
        push ecx
        push 3
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 53 D7 FF: call 0x584f66d0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x53
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 08: je 0x587812eb
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        add eax, 14h
        ; Exact mapped bytes EB 04: jmp 0x587812ef
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB A5: jmp 0x58781292
        __asm _emit 0xeb
        __asm _emit 0xa5
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
