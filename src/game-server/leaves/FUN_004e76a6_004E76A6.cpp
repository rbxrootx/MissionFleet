// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E76A6 .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_004e76a6_004E76A6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 0e8h
        push 5c8f3ch
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 9B 3A 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x4e76dc
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 10 FC FF FF: call 0x4e72e7
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x4e777f
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 76 FA FF FF: call 0x4e716b
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 3B: je 0x4e7745
        __asm _emit 0x74
        __asm _emit 0x3b
        push 1
        push 0ch
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 3C 87 FE FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e7732
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f4h
        push 5c8f3ch
        ; Exact mapped bytes E8 D3 D2 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7732
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x4e770a
        __asm _emit 0x75
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 2E: jmp 0x4e7773
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 74 14: je 0x4e7764
        __asm _emit 0x74
        __asm _emit 0x14
        push 0f9h
        push 5c8f3ch
        ; Exact mapped bytes E8 A1 D2 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e7764
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x4e7745
        __asm _emit 0x75
        __asm _emit 0xdb
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
