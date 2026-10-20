// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D7451 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_004d7451_004D7451() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4d747d
        __asm _emit 0x75
        __asm _emit 0x11
        push 69h
        push 5835a8h
        ; Exact mapped bytes E8 88 D5 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xd5
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d747d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4d745b
        __asm _emit 0x75
        __asm _emit 0xd8
        cmp dword ptr [ebp + 0ch], 100h
        ; Exact mapped bytes 7C 11: jl 0x4d749d
        __asm _emit 0x7c
        __asm _emit 0x11
        push 69h
        push 5835a8h
        ; Exact mapped bytes E8 68 D5 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xd5
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d749d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d7483
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        or edx, dword ptr [ebp + 10h]
        push edx
        push 401h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
