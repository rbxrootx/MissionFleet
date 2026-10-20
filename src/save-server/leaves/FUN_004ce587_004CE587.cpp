// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CE587 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_004ce587_004CE587() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x4ce5b0
        __asm _emit 0x74
        __asm _emit 0x14
        push 1ceh
        push 67154ch
        ; Exact mapped bytes E8 95 A7 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xa7
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ce5b0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4ce593
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E8 B5 34 06 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0A: je 0x4ce5ce
        __asm _emit 0x74
        __asm _emit 0x0a
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B2 82 02 00: call 0x4f6880
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        add edx, 54h
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 CC CF 05 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xcf
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 FE 85 02 00: call 0x4f6be4
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 6D 1C 00 00: call 0x4d025f
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
