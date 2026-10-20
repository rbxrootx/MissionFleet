// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00564F10 .. +0xE6 bytes.
extern "C" __declspec(naked) void FUN_00564f10_00564F10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 13: je 0x564f35
        __asm _emit 0x74
        __asm _emit 0x13
        push 111h
        push 5d0bb4h
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 2B 62 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x62
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 09: je 0x564f44
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 8], 8000h
        ; Exact mapped bytes 72 14: jb 0x564f58
        __asm _emit 0x72
        __asm _emit 0x14
        push 114h
        push 5d0bb4h
        ; Exact mapped bytes E8 AD FA FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xfa
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x564f58
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x564f35
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 8ch], 0
        ; Exact mapped bytes 74 22: je 0x564f8c
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 8ch]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 14: je 0x564f8c
        __asm _emit 0x74
        __asm _emit 0x14
        push 115h
        push 5d0bb4h
        ; Exact mapped bytes E8 79 FA FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfa
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x564f8c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CC: jne 0x564f5e
        __asm _emit 0x75
        __asm _emit 0xcc
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8ch], ecx
        push 0
        push 0
        push 0
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B1 0D FD FF: call 0x535d5f
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x0d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B5 D6 F8 FF: call 0x4f2683
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xd6
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x564fd6
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 17: jmp 0x564fed
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 51 52 FC FF: call 0x52a239
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x52
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
