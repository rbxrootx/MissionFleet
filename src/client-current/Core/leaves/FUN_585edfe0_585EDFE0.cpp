// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EDFE0 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_585edfe0_585EDFE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC 89 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x89
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6F 48 FE FF: call 0x585d2870
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0fh
        ; Exact mapped bytes 75 31: jne 0x585ee044
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 89 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x89
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CB 69 FE FF: call 0x585d49f0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x585ee044
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 89 E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x89
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 2
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2F 48 FE FF: call 0x585d2870
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 07: jge 0x585ee051
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 10d54h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F7 60 F1 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x60
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
