// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E607A .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_004e607a_004E607A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0
        ; Exact mapped bytes E8 89 FC FF FF: call 0x4e5d16
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 49: je 0x4e60df
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6B 3C F6 FF: call 0x449d10
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x3c
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 35: jne 0x4e60df
        __asm _emit 0x75
        __asm _emit 0x35
        push 673524h
        push 673550h
        ; Exact mapped bytes E8 5C A5 FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xa5
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x4e60d9
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b6h
        push 6733e0h
        ; Exact mapped bytes E8 6C 2C 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e60d9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4e60bc
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
