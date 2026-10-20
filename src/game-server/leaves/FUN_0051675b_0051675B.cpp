// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051675B .. +0x10D bytes.
extern "C" __declspec(naked) void FUN_0051675b_0051675B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 92 86 FD FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x86
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 10000000h
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x516797
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 09: je 0x516797
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 80h
        ; Exact mapped bytes EB 1A: jmp 0x5167b1
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x5167b1
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x5167b1
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 40h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 60h]
        and edx, 0fffffffch
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 60h], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 22: je 0x5167e8
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 8]
        or ecx, 2
        or ecx, 1
        or ecx, 4
        or ecx, 10h
        push ecx
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A8 8A FD FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x8a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0E 86 FD FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x86
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 74 67: je 0x516860
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 74 14: je 0x516816
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 F1 85 FD FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x516860
        __asm _emit 0x74
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 56 53 02 00: call 0x53bb74
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 12: je 0x516839
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 B8 00 00 00: call dword ptr [edx + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x516844
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 01 E3 FD FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 16: je 0x516860
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 90 C8 00 00 00: call dword ptr [eax + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
