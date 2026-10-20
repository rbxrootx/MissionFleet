// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00555CEA .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_00555cea_00555CEA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 508h
        push 5cfa08h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 57 54 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x54
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 77 46: ja 0x555d5b
        __asm _emit 0x77
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 95 9A 5D 55 00: jmp dword ptr [edx*4 + 0x555d9a]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x9a
        __asm _emit 0x5d
        __asm _emit 0x55
        __asm _emit 0x00
        ; Exact mapped bytes EB 5D: jmp 0x555d7e
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x555d3e
        __asm _emit 0x75
        __asm _emit 0x14
        push 511h
        push 5cfa08h
        ; Exact mapped bytes E8 C7 EC FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555d3e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x555d21
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1ch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 1ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        ; Exact mapped bytes EB 25: jmp 0x555d7e
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes EB 23: jmp 0x555d7e
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x555d78
        __asm _emit 0x74
        __asm _emit 0x14
        push 51ah
        push 5cfa08h
        ; Exact mapped bytes E8 8D EC FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555d78
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x555d5b
        __asm _emit 0x75
        __asm _emit 0xdd
        push 51dh
        push 5cfa08h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 CF 53 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x53
        __asm _emit 0xfa
        __asm _emit 0xff
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
