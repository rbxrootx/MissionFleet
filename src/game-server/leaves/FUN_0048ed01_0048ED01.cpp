// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048ED01 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_0048ed01_0048ED01() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x48ed27
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c2h
        push 5c636ch
        ; Exact mapped bytes E8 DE 5C 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x5c
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48ed27
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x48ed0d
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 75 14: jne 0x48ed47
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c3h
        push 5c636ch
        ; Exact mapped bytes E8 BE 5C 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x5c
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48ed47
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x48ed2d
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 85 FB 05 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 09: je 0x48ed6e
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 39: jne 0x48eda7
        __asm _emit 0x75
        __asm _emit 0x39
        mov edx, dword ptr [ebp + 8]
        push edx
        push 5c6468h
        ; Exact mapped bytes E8 99 0E 04 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x0e
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 8
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x48ed9c
        __asm _emit 0x74
        __asm _emit 0x14
        push 2c8h
        push 5c636ch
        ; Exact mapped bytes E8 69 5C 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x5c
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x48ed9c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x48ed7f
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E8 22 10 04 00: call 0x4cfdc9
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [edx + 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ch], 0
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
