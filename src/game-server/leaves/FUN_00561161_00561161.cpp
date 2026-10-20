// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00561161 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_00561161_00561161() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f0fch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 588194h
        mov dword ptr [ebp - 4], 0
        push 2bh
        push 5cc7a4h
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 BE 9F F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x9f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 74 2B: je 0x5611d6
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes E8 E1 AD FE FF: call 0x54bf97
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 30h], 0
        ; Exact mapped bytes 74 11: je 0x5611d0
        __asm _emit 0x74
        __asm _emit 0x11
        push 31h
        push 5cc7a4h
        ; Exact mapped bytes E8 35 38 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x38
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5611d0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5611b6
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 74 35: je 0x561214
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 11: je 0x5611f9
        __asm _emit 0x74
        __asm _emit 0x11
        push 37h
        push 5cc7a4h
        ; Exact mapped bytes E8 0C 38 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x38
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5611f9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5611df
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 F8 C1 F8 FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 18 6B F9 FF: call 0x4f7d3b
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x6b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
