// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050DDA0 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_0050dda0_0050DDA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 51h
        push 5c60a8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 A6 D3 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd3
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x50ddd1
        __asm _emit 0x75
        __asm _emit 0x11
        push 52h
        push 5c60a8h
        ; Exact mapped bytes E8 34 6C 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50ddd1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x50ddba
        __asm _emit 0x75
        __asm _emit 0xe3
        push -1
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 50 20 FC FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x50ddf7
        __asm _emit 0x75
        __asm _emit 0x11
        push 53h
        push 5c60a8h
        ; Exact mapped bytes E8 0E 6C 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50ddf7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x50ddd7
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 1B: je 0x50de24
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
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
