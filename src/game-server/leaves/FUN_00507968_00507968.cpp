// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00507968 .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_00507968_00507968() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 75 39: jne 0x5079b6
        __asm _emit 0x75
        __asm _emit 0x39
        push 5ca3a0h
        push 5ca3dch
        ; Exact mapped bytes E8 89 82 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x5079ac
        __asm _emit 0x74
        __asm _emit 0x14
        push 0e3h
        push 5ca348h
        ; Exact mapped bytes E8 59 D0 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5079ac
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x50798f
        __asm _emit 0x75
        __asm _emit 0xdd
        xor eax, eax
        ; Exact mapped bytes EB 6B: jmp 0x507a21
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4ch]
        ; Exact mapped bytes E8 28 39 FF FF: call 0x4fb2e9
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 1A: jne 0x5079e4
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [edx]
        push eax
        push 5ca3e0h
        ; Exact mapped bytes E8 38 82 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x82
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 3D: jmp 0x507a21
        __asm _emit 0xeb
        __asm _emit 0x3d
        push 587bf8h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9F 36 FF FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x507a09
        __asm _emit 0x75
        __asm _emit 0x14
        push 0edh
        push 5ca348h
        ; Exact mapped bytes E8 FC CF 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x507a09
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x5079e4
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
