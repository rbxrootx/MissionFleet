// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052B7F1 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_0052b7f1_0052B7F1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FC 16 00 00: call 0x52cf01
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 44h], 0
        ; Exact mapped bytes 74 58: je 0x52b866
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B4 27 5E 00: call dword ptr [0x5e27b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp eax, dword ptr [ecx + 44h]
        ; Exact mapped bytes 74 43: je 0x52b866
        __asm _emit 0x74
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 44h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B0 27 5E 00: call dword ptr [0x5e27b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B4 27 5E 00: call dword ptr [0x5e27b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 44h]
        ; Exact mapped bytes 74 14: je 0x52b860
        __asm _emit 0x74
        __asm _emit 0x14
        push 35ah
        push 5c8fcch
        ; Exact mapped bytes E8 A5 91 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52b860
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D1: jne 0x52b837
        __asm _emit 0x75
        __asm _emit 0xd1
        ; Exact mapped bytes E8 95 9C 00 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1E: je 0x52b892
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 13: jne 0x52b892
        __asm _emit 0x75
        __asm _emit 0x13
        push 0
        push 2
        push 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 A8 25 5E 00: call dword ptr [0x5e25a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 74 6F FC FF: call 0x4f280e
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x6f
        __asm _emit 0xfc
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
