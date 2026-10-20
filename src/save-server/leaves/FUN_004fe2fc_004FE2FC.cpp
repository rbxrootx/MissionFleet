// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FE2FC .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_004fe2fc_004FE2FC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 8b6h
        push 674fe8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 45 BF FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x4fe347
        __asm _emit 0x75
        __asm _emit 0x16
        push 6754c4h
        push 675500h
        ; Exact mapped bytes E8 D5 22 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x22
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 6B: jmp 0x4fe3b2
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 75 14: jne 0x4fe364
        __asm _emit 0x75
        __asm _emit 0x14
        push 8bdh
        push 674fe8h
        ; Exact mapped bytes E8 E1 A9 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fe364
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4fe347
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 6ch], 0
        ; Exact mapped bytes 75 14: jne 0x4fe387
        __asm _emit 0x75
        __asm _emit 0x14
        push 8beh
        push 674fe8h
        ; Exact mapped bytes E8 BE A9 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fe387
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4fe36a
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 1
        ; Exact mapped bytes 7F 12: jg 0x4fe3a8
        __asm _emit 0x7f
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 6ch], 1
        ; Exact mapped bytes 7F 09: jg 0x4fe3a8
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 07: jmp 0x4fe3af
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov eax, dword ptr [ebp - 8]
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
