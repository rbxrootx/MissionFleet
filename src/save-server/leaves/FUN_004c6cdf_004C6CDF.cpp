// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C6CDF .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_004c6cdf_004C6CDF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 79 36 01 00: call 0x4da36a
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 77 14: ja 0x4c6d0e
        __asm _emit 0x77
        __asm _emit 0x14
        push 13dh
        push 67476ch
        ; Exact mapped bytes E8 37 20 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c6d0e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4c6cf1
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 74 1D: je 0x4c6d3a
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4c6d3a
        __asm _emit 0x75
        __asm _emit 0x14
        push 13eh
        push 67476ch
        ; Exact mapped bytes E8 0B 20 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c6d3a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x4c6d14
        __asm _emit 0x75
        __asm _emit 0xd4
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
