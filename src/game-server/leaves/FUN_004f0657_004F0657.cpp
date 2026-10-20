// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F0657 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_004f0657_004F0657() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x4f0680
        __asm _emit 0x74
        __asm _emit 0x14
        push 1cbh
        push 5c5060h
        ; Exact mapped bytes E8 85 43 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f0680
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4f0663
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E8 75 4E 04 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x4e
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0A: je 0x4f069e
        __asm _emit 0x74
        __asm _emit 0x0a
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 82 CF 01 00: call 0x50d620
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        add edx, 54h
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 9C B4 04 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 CE D2 01 00: call 0x50d984
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 6D 1C 00 00: call 0x4f232f
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
