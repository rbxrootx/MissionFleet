// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056A379 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_0056a379_0056A379() {
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
        ; Exact mapped bytes E8 D6 90 F3 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x90
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56a3a8
        __asm _emit 0x75
        __asm _emit 0x14
        push 132h
        push 67c668h
        ; Exact mapped bytes E8 9D E9 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56a3a8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x56a383
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 14: je 0x56a3ca
        __asm _emit 0x74
        __asm _emit 0x14
        push 133h
        push 67c668h
        ; Exact mapped bytes E8 7B E9 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56a3ca
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x56a3ae
        __asm _emit 0x75
        __asm _emit 0xde
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 14: je 0x56a3ed
        __asm _emit 0x74
        __asm _emit 0x14
        push 134h
        push 67c668h
        ; Exact mapped bytes E8 58 E9 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56a3ed
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x56a3d0
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
