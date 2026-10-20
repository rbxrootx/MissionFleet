// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056D6BD .. +0x104 bytes.
extern "C" __declspec(naked) void FUN_0056d6bd_0056D6BD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 0d4h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x56d7a3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 BC 00 00 00: call dword ptr [eax + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 10 38 FE FF: call 0x550f0b
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 74: je 0x56d778
        __asm _emit 0x74
        __asm _emit 0x74
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x56d721
        __asm _emit 0x75
        __asm _emit 0x14
        push 7a0h
        push 5d053ch
        ; Exact mapped bytes E8 E4 72 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x72
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56d721
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x56d704
        __asm _emit 0x75
        __asm _emit 0xdd
        push 58e4b0h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes E8 4E E7 FD FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xe7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x56d755
        __asm _emit 0x75
        __asm _emit 0x14
        push 7a3h
        push 5d053ch
        ; Exact mapped bytes E8 B0 72 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x72
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56d755
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x56d73b
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 52 24: call dword ptr [edx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes E9 77 FF FF FF: jmp 0x56d6ef
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 74 1C: je 0x56d79d
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 78h], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x56d778
        __asm _emit 0x75
        __asm _emit 0xd5
        push 7ach
        push 5d053ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 AA D9 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xd9
        __asm _emit 0xf8
        __asm _emit 0xff
        xor eax, eax
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
