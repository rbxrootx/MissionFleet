// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052AFF0 .. +0x178 bytes.
extern "C" __declspec(naked) void FUN_0052aff0_0052AFF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x52b019
        __asm _emit 0x75
        __asm _emit 0x14
        push 241h
        push 5c8fcch
        ; Exact mapped bytes E8 EC 99 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52b019
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x52affc
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52b044
        __asm _emit 0x75
        __asm _emit 0x14
        push 242h
        push 5c8fcch
        ; Exact mapped bytes E8 C1 99 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52b044
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x52b01f
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x52b064
        __asm _emit 0x75
        __asm _emit 0x14
        push 243h
        push 5c8fcch
        ; Exact mapped bytes E8 A1 99 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52b064
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x52b04a
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 14: jne 0x52b086
        __asm _emit 0x75
        __asm _emit 0x14
        push 244h
        push 5c8fcch
        ; Exact mapped bytes E8 7F 99 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52b086
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x52b06a
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 53 02 FD FF: call 0x4fb2e9
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 1C: jne 0x52b0bb
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        push edx
        push 5c9068h
        ; Exact mapped bytes E8 64 4B FA FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x4b
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x52b15f
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 582b80h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C8 FF FC FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52b0e0
        __asm _emit 0x75
        __asm _emit 0x14
        push 24eh
        push 5c8fcch
        ; Exact mapped bytes E8 25 99 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52b0e0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x52b0bb
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 0
        push 0
        push 0
        push 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 5D AC 00 00: call 0x535d5f
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 50800000h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x52b131
        __asm _emit 0x75
        __asm _emit 0x16
        push 5c909ch
        push 5c90c8h
        ; Exact mapped bytes E8 EB 4A FA FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x4a
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 2E: jmp 0x52b15f
        __asm _emit 0xeb
        __asm _emit 0x2e
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 22: je 0x52b15c
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 23 3D FC FF: call 0x4eee65
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 200h
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x52b15c
        __asm _emit 0x74
        __asm _emit 0x11
        push 20h
        push 0
        push 200h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F1 3D FC FF: call 0x4eef4d
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
