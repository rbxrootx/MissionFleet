// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00564479 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_00564479_00564479() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 1
        push 10h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 C6 B9 F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xb9
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5644a8
        __asm _emit 0x75
        __asm _emit 0x14
        push 132h
        push 5cfe90h
        ; Exact mapped bytes E8 5D 05 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x05
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5644a8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x564483
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 14: je 0x5644ca
        __asm _emit 0x74
        __asm _emit 0x14
        push 133h
        push 5cfe90h
        ; Exact mapped bytes E8 3B 05 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5644ca
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x5644ae
        __asm _emit 0x75
        __asm _emit 0xde
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 14: je 0x5644ed
        __asm _emit 0x74
        __asm _emit 0x14
        push 134h
        push 5cfe90h
        ; Exact mapped bytes E8 18 05 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5644ed
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5644d0
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], 1
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
