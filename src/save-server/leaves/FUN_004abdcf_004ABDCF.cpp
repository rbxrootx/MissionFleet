// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ABDCF .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_004abdcf_004ABDCF() {
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
        ; Exact mapped bytes 74 14: je 0x4abdf8
        __asm _emit 0x74
        __asm _emit 0x14
        push 4b2h
        push 672a58h
        ; Exact mapped bytes E8 4D CF 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xcf
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4abdf8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4abddb
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 02 FE FF FF: call 0x4abc09
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4abe1f
        __asm _emit 0x74
        __asm _emit 0x14
        push 4b3h
        push 672a58h
        ; Exact mapped bytes E8 26 CF 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xcf
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4abe1f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4abdfe
        __asm _emit 0x75
        __asm _emit 0xd9
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x4abe2f
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 48: jmp 0x4abe77
        __asm _emit 0xeb
        __asm _emit 0x48
        push 1
        ; Exact mapped bytes E8 A1 FB FF FF: call 0x4ab9d7
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4abe53
        __asm _emit 0x75
        __asm _emit 0x14
        push 4b9h
        push 672a58h
        ; Exact mapped bytes E8 F2 CE 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xce
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4abe53
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4abe39
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 98 01 03 00: call 0x4dc00a
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, 1
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
