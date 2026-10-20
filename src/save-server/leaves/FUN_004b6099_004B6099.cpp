// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B6099 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_004b6099_004B6099() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 1000h
        ; Exact mapped bytes E8 7C F2 01 00: call 0x4d532b
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4b60c4
        __asm _emit 0x75
        __asm _emit 0x11
        push 2bh
        push 677e8ch
        ; Exact mapped bytes E8 81 2C 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b60c4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x4b60a5
        __asm _emit 0x75
        __asm _emit 0xdb
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D6 54 07 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x00
        push eax
        push 80000000h
        push 80000000h
        push 80000000h
        push 80000000h
        mov ecx, dword ptr [ebp + 0ch]
        or ecx, 80000000h
        push ecx
        push 0
        push 677ea8h
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 06 A3 01 00: call 0x4d040c
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0C: je 0x4b611b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EE 54 07 00: call 0x52b609
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
