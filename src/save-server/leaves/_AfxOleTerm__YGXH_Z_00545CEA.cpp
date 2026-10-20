// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00545CEA .. +0x94 bytes.
extern "C" __declspec(naked) void _AfxOleTerm__YGXH_Z_00545CEA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        ; Exact mapped bytes E8 BB 26 02 00: call 0x5683b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 A2 38 04 00: call 0x58959c
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E8 EB A3 F1 FF: call 0x4600ea
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xa3
        __asm _emit 0xf1
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 73: jne 0x545d78
        __asm _emit 0x75
        __asm _emit 0x73
        ; Exact mapped bytes E8 4F 2B F9 FF: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x2b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 38: je 0x545d4b
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 12: je 0x545d3a
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
        ; Exact mapped bytes EB 07: jmp 0x545d41
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 5ch], 0
        ; Exact mapped bytes E8 25 A4 FF FF: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 114h], 1
        ; Exact mapped bytes 75 19: jne 0x545d78
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes FF 15 08 C3 68 00: call dword ptr [0x68c308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 00 C3 68 00: call dword ptr [0x68c300]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xc3
        __asm _emit 0x68
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
