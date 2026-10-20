// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E63D3 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_004e63d3_004E63D3() {
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
        ; Exact mapped bytes 75 14: jne 0x4e63fc
        __asm _emit 0x75
        __asm _emit 0x14
        push 103h
        push 6733e0h
        ; Exact mapped bytes E8 49 29 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x29
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e63fc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4e63df
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 74 19: je 0x4e6430
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 63 C7 04 00: call 0x532b82
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 40 B4 68 00: call dword ptr [0x68b440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 19: je 0x4e6452
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 41 C7 04 00: call 0x532b82
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 40 B4 68 00: call dword ptr [0x68b440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 EA 27 00 00: call 0x4e8c45
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
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
