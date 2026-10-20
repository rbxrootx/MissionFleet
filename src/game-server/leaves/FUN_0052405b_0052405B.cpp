// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052405B .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_0052405b_0052405B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 54 CE FC FF: call 0x4f0ec1
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xce
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ch], 28h
        ; Exact mapped bytes 74 14: je 0x52408a
        __asm _emit 0x74
        __asm _emit 0x14
        push 1f5h
        push 5c8174h
        ; Exact mapped bytes E8 7B 09 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52408a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x52406d
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        and eax, 80h
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5240b3
        __asm _emit 0x75
        __asm _emit 0x14
        push 1f6h
        push 5c8174h
        ; Exact mapped bytes E8 52 09 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5240b3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x524090
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 74h], 4ef8f0h
        ; Exact mapped bytes 74 14: je 0x5240d9
        __asm _emit 0x74
        __asm _emit 0x14
        push 1f7h
        push 5c8174h
        ; Exact mapped bytes E8 2C 09 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5240d9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x5240b9
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 14: je 0x5240fe
        __asm _emit 0x74
        __asm _emit 0x14
        push 1f8h
        push 5c8174h
        ; Exact mapped bytes E8 07 09 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5240fe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x5240df
        __asm _emit 0x75
        __asm _emit 0xdb
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
