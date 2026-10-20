// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CC51A .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_004cc51a_004CC51A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D 87 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 11: jne 0x4cc542
        __asm _emit 0x75
        __asm _emit 0x11
        push 35h
        push 6714ach
        ; Exact mapped bytes E8 03 C8 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xc8
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cc542
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DC: jne 0x4cc524
        __asm _emit 0x75
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 69 87 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 7C 42: jl 0x4cc597
        __asm _emit 0x7c
        __asm _emit 0x42
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5C 87 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 98 14 67 00: cmp eax, dword ptr [0x671498]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x14
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x4cc576
        __asm _emit 0x75
        __asm _emit 0x11
        push 38h
        push 6714ach
        ; Exact mapped bytes E8 CF C7 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cc576
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D9: jne 0x4cc555
        __asm _emit 0x75
        __asm _emit 0xd9
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2B 87 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 24 BA 68 00: call dword ptr [0x68ba24]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 16: jmp 0x4cc5ad
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 52 87 05 00: call 0x524cf1
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F0 05 00 00: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
