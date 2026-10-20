// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F86C0 .. +0x105 bytes.
extern "C" __declspec(naked) void FUN_004f86c0_004F86C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4f86e6
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f6h
        push 6739a4h
        ; Exact mapped bytes E8 5F 06 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f86e6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f86cc
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4f8706
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f7h
        push 6739a4h
        ; Exact mapped bytes E8 3F 06 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8706
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4f86ec
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 80h], 0
        ; Exact mapped bytes 74 4C: je 0x4f8764
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EE 6F 04 00: call 0x53f712
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x4f8734
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x4f87bc
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        lea ecx, [ebp + 10h]
        push ecx
        push 4
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 A0 B2 68 00: call dword ptr [0x68b2a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        cmp dword ptr [ebp - 8], 0
        sete al
        ; Exact mapped bytes EB 58: jmp 0x4f87bc
        __asm _emit 0xeb
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 94h], 0
        ; Exact mapped bytes 75 14: jne 0x4f8784
        __asm _emit 0x75
        __asm _emit 0x14
        push 104h
        push 6739a4h
        ; Exact mapped bytes E8 C1 05 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8784
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4f8764
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 6739bch
        lea edx, [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 94h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 A8 B9 68 00: call dword ptr [0x68b9a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
