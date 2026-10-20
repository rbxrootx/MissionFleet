// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E6128 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_004e6128_004E6128() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4e6151
        __asm _emit 0x75
        __asm _emit 0x14
        push 0cah
        push 6733e0h
        ; Exact mapped bytes E8 F4 2B 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x2b
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e6151
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4e6134
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 10: je 0x4e6177
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 B0 B5 68 00: call dword ptr [0x68b5b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 74 18: je 0x4e619d
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 B0 B5 68 00: call dword ptr [0x68b5b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4e619d
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
