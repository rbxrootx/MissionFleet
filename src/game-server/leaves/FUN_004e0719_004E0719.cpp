// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E0719 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_004e0719_004E0719() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 1000h
        ; Exact mapped bytes E8 CC 6C 01 00: call 0x4f73fb
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4e0744
        __asm _emit 0x75
        __asm _emit 0x11
        push 2bh
        push 5cb6b4h
        ; Exact mapped bytes E8 C1 42 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e0744
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x4e0725
        __asm _emit 0x75
        __asm _emit 0xdb
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F6 B3 05 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xb3
        __asm _emit 0x05
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
        push 5cb6d0h
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 56 1D 01 00: call 0x4f24dc
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0C: je 0x4e079b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0E B4 05 00: call 0x53bba9
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xb4
        __asm _emit 0x05
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
