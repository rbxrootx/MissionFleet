// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052E1E0 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_0052e1e0_0052E1E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes E8 4A 01 00 00: call 0x52e333
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x52e1ef
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 55: jmp 0x52e244
        __asm _emit 0xeb
        __asm _emit 0x55
        push 1
        ; Exact mapped bytes E8 D9 00 00 00: call 0x52e2cf
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 05 73 00 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2B: je 0x52e22f
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 22: je 0x52e22f
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes E8 89 11 FC FF: call 0x4ef3a1
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x52e22d
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1ch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 1ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 60: call dword ptr [eax + 0x60]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x60
        ; Exact mapped bytes EB 15: jmp 0x52e244
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes E8 0F 72 01 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 75 07: jne 0x52e244
        __asm _emit 0x75
        __asm _emit 0x07
        push 0
        ; Exact mapped bytes E8 D1 B0 04 00: call 0x579315
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
