// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00525F44 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_00525f44_00525F44() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6B AF FC FF: call 0x4f0ec1
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xaf
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ch], 28h
        ; Exact mapped bytes 74 14: je 0x525f73
        __asm _emit 0x74
        __asm _emit 0x14
        push 54ah
        push 5c8174h
        ; Exact mapped bytes E8 92 EA 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x525f73
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x525f56
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        and eax, 80h
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x525f9c
        __asm _emit 0x75
        __asm _emit 0x14
        push 54bh
        push 5c8174h
        ; Exact mapped bytes E8 69 EA 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x525f9c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x525f79
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 74h], 4ef8f0h
        ; Exact mapped bytes 74 14: je 0x525fc2
        __asm _emit 0x74
        __asm _emit 0x14
        push 54ch
        push 5c8174h
        ; Exact mapped bytes E8 43 EA 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x525fc2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x525fa2
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 14: je 0x525fe7
        __asm _emit 0x74
        __asm _emit 0x14
        push 54dh
        push 5c8174h
        ; Exact mapped bytes E8 1E EA 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x525fe7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x525fc8
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
