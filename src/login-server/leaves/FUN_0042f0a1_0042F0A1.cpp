// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F0A1 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_0042f0a1_0042F0A1() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 0ch], -2
        push esi
        ; Exact mapped bytes 75 65: jne 0x42f110
        __asm _emit 0x75
        __asm _emit 0x65
        cmp dword ptr [ebp + 10h], 201h
        ; Exact mapped bytes 74 12: je 0x42f0c6
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp + 10h], 207h
        ; Exact mapped bytes 74 09: je 0x42f0c6
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 10h], 204h
        ; Exact mapped bytes 75 4A: jne 0x42f110
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 17 00 00: call 0x430840
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x42f110
        __asm _emit 0x74
        __asm _emit 0x3e
        push dword ptr [eax + 1ch]
        ; Exact mapped bytes FF 15 0C C5 43 00: call dword ptr [0x43c50c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 F7 01 00 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 29: je 0x42f110
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes FF 15 70 C4 43 00: call dword ptr [0x43c470]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 E5 01 00 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 74 19: je 0x42f110
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, esi
        ; Exact mapped bytes E8 50 F2 FF FF: call 0x42e34e
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x42f110
        __asm _emit 0x74
        __asm _emit 0x0e
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 74 C4 43 00: call dword ptr [0x43c474]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push 1
        pop eax
        ; Exact mapped bytes EB 02: jmp 0x42f112
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
