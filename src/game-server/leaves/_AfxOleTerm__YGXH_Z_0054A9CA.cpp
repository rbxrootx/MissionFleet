// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054A9CA .. +0x94 bytes.
extern "C" __declspec(naked) void _AfxOleTerm__YGXH_Z_0054A9CA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        ; Exact mapped bytes E8 DB 7A 01 00: call 0x5624b0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 62 EC 02 00: call 0x57963c
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 FB 90 F5 FF: call 0x4a3ada
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x90
        __asm _emit 0xf5
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 73: jne 0x54aa58
        __asm _emit 0x75
        __asm _emit 0x73
        ; Exact mapped bytes E8 CF ED FA FF: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xed
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 38: je 0x54aa2b
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 12: je 0x54aa1a
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x54aa21
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 5ch], 0
        ; Exact mapped bytes E8 25 A5 FF FF: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 114h], 1
        ; Exact mapped bytes 75 19: jne 0x54aa58
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes FF 15 68 2A 5E 00: call dword ptr [0x5e2a68]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 6C 2A 5E 00: call dword ptr [0x5e2a6c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 114h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
