// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052ABDE .. +0x130 bytes.
extern "C" __declspec(naked) void FUN_0052abde_0052ABDE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 24: je 0x52ac12
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x52ac12
        __asm _emit 0x74
        __asm _emit 0x17
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 48 FC FF: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes FF 15 0C 26 5E 00: call dword ptr [0x5e260c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 F3 00 00 00: jmp 0x52ad05
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F 24 01 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x52ac23
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 E2 00 00 00: jmp 0x52ad05
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 53: jne 0x52ac7c
        __asm _emit 0x75
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 05 33 01 00: call 0x53df36
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 47: jne 0x52ac7c
        __asm _emit 0x75
        __asm _emit 0x47
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        and eax, 80h
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x52ac58
        __asm _emit 0x74
        __asm _emit 0x14
        push 1cbh
        push 5c8fcch
        ; Exact mapped bytes E8 AD 9D 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52ac58
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x52ac35
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        or al, 80h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 24h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 90 00 00 00: call dword ptr [eax + 0x90]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4F: jmp 0x52accb
        __asm _emit 0xeb
        __asm _emit 0x4f
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 49: je 0x52accb
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        and edx, 80h
        test edx, edx
        ; Exact mapped bytes 74 39: je 0x52accb
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        and cl, 7fh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24h], ecx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 94 00 00 00: call dword ptr [edx + 0x94]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 24 27 5E 00: call dword ptr [0x5e2724]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 75 0E: jne 0x52accb
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        push 1
        push 6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0E 0F 01 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1E: je 0x52acef
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        and eax, 20h
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x52acef
        __asm _emit 0x74
        __asm _emit 0x11
        push 0
        push 1
        push 86h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EA 0E 01 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        neg ecx
        sbb ecx, ecx
        and ecx, 0fffffff0h
        add ecx, 20h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 09 00 00 00: call 0x52ad0e
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
