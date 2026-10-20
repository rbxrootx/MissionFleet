// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050F2BE .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_0050f2be_0050F2BE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 10h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x50f364
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 14: je 0x50f2ee
        __asm _emit 0x74
        __asm _emit 0x14
        push 270h
        push 5c68bch
        ; Exact mapped bytes E8 17 57 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50f2ee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x50f2d2
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EE ED FF FF: call 0x50e0ee
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 CB 86 FE FF: call 0x4f79da
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x50f33d
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x50f330
        __asm _emit 0x74
        __asm _emit 0x14
        push 276h
        push 5c68bch
        ; Exact mapped bytes E8 D5 56 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50f330
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x50f313
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E8 8E 0A FC FF: call 0x4cfdc9
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x0a
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 27: jmp 0x50f364
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ecx + 4]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [esi + 1ch], eax
        ; Exact mapped bytes 74 0F: je 0x50f364
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 62 04 FE FF: call 0x4ef7c6
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
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
