// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050A106 .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_0050a106_0050A106() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 63 FF FF: call 0x5004fd
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 7ch
        ; Exact mapped bytes E8 87 C2 01 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50a13b
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c3h
        push 6791a4h
        ; Exact mapped bytes E8 0A EC 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50a13b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x50a118
        __asm _emit 0x75
        __asm _emit 0xd7
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 7ch
        ; Exact mapped bytes E8 C6 C3 01 00: call 0x526514
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x50a166
        __asm _emit 0x74
        __asm _emit 0x14
        push 2c4h
        push 6791a4h
        ; Exact mapped bytes E8 DF EB 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50a166
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x50a141
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        add ecx, 7ch
        ; Exact mapped bytes E8 44 C2 01 00: call 0x5263bb
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 7ch
        ; Exact mapped bytes E8 91 C3 01 00: call 0x526514
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x50a19b
        __asm _emit 0x74
        __asm _emit 0x14
        push 2c5h
        push 6791a4h
        ; Exact mapped bytes E8 AA EB 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50a19b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CB: jne 0x50a16c
        __asm _emit 0x75
        __asm _emit 0xcb
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
