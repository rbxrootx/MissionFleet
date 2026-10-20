// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EC4BC .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_004ec4bc_004EC4BC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 3dh
        push 5c7e38h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 88 EC 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 11: je 0x4ec4f2
        __asm _emit 0x74
        __asm _emit 0x11
        push 3eh
        push 5c7e38h
        ; Exact mapped bytes E8 13 85 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ec4f2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4ec4d8
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 77 11: ja 0x4ec50f
        __asm _emit 0x77
        __asm _emit 0x11
        push 3fh
        push 5c7e38h
        ; Exact mapped bytes E8 F6 84 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ec50f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4ec4f8
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 1F: je 0x4ec53d
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 D9 0E 00 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 4], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 3A: je 0x4ec57d
        __asm _emit 0x74
        __asm _emit 0x3a
        push 4ah
        push 5c7e38h
        mov eax, dword ptr [ebp + 8]
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 DD 0A 00 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp + 8]
        shl eax, 2
        push eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes E8 F6 CD FB FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xcd
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
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
