// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00564C0A .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_00564c0a_00564C0A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 41: je 0x564c6e
        __asm _emit 0x74
        __asm _emit 0x41
        push 58aaa8h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 56 64 F9 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x64
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x564c52
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b9h
        push 5d0bb4h
        ; Exact mapped bytes E8 B3 FD FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x564c52
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x564c2d
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DE 67 FA FF: call 0x50b43e
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 84 00 00 00: call dword ptr [edx + 0x84]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0dch], 0
        ; Exact mapped bytes 74 0E: je 0x564c88
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0dch]
        ; Exact mapped bytes E8 79 82 FC FF: call 0x52cf01
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x82
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0e0h], 0
        ; Exact mapped bytes 74 0E: je 0x564ca2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0e0h]
        ; Exact mapped bytes E8 5F 82 FC FF: call 0x52cf01
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x82
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 47 6B FC FF: call 0x52b7f1
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x6b
        __asm _emit 0xfc
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
