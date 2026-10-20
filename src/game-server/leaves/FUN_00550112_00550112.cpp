// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00550112 .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_00550112_00550112() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 115h
        push 5cf710h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 2F B0 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xb0
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x55015c
        __asm _emit 0x74
        __asm _emit 0x25
        push 1
        push 18h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 12 FD F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xfd
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55015c
        __asm _emit 0x75
        __asm _emit 0x14
        push 117h
        push 5cf710h
        ; Exact mapped bytes E8 A9 48 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55015c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x550131
        __asm _emit 0x75
        __asm _emit 0xcf
        mov eax, dword ptr [ebp - 8]
        add eax, 10h
        push eax
        push 1
        push 0
        ; Exact mapped bytes FF 15 30 2A 5E 00: call dword ptr [0x5e2a30]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 13: jge 0x55018f
        __asm _emit 0x7d
        __asm _emit 0x13
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0D: je 0x55018f
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 6C F7 FF FF: call 0x54f8fb
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7C 1D: jl 0x5501b2
        __asm _emit 0x7c
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x5501b2
        __asm _emit 0x75
        __asm _emit 0x14
        push 11dh
        push 5cf710h
        ; Exact mapped bytes E8 53 48 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5501b2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x55018f
        __asm _emit 0x75
        __asm _emit 0xd7
        xor eax, eax
        cmp dword ptr [ebp - 4], 0
        setge al
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
