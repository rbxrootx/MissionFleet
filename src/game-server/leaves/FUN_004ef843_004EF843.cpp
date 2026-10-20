// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EF843 .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_004ef843_004EF843() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4ef869
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b7h
        push 5c4f60h
        ; Exact mapped bytes E8 9C 51 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x51
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ef869
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4ef84f
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4ef889
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b8h
        push 5c4f60h
        ; Exact mapped bytes E8 7C 51 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x51
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ef889
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4ef86f
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 20h
        ; Exact mapped bytes E8 A6 BC FF FF: call 0x4eb547
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 36: je 0x4ef8e0
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 15: je 0x4ef8ce
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 38h]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 0A: jne 0x4ef8ce
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 38h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 38h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 24h], eax
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
