// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C658C .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_004c658c_004C658C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 3bh
        push 67476ch
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 B8 3C 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 11: je 0x4c65c2
        __asm _emit 0x74
        __asm _emit 0x11
        push 3ch
        push 67476ch
        ; Exact mapped bytes E8 83 27 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x27
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c65c2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4c65a8
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 77 11: ja 0x4c65df
        __asm _emit 0x77
        __asm _emit 0x11
        push 3dh
        push 67476ch
        ; Exact mapped bytes E8 66 27 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x27
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c65df
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4c65c8
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 1F: je 0x4c660d
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 A9 5E 00 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 4], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 3A: je 0x4c664d
        __asm _emit 0x74
        __asm _emit 0x3a
        push 48h
        push 67476ch
        mov eax, dword ptr [ebp + 8]
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 AD 5A 00 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x5a
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
        ; Exact mapped bytes E8 76 F2 F9 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf2
        __asm _emit 0xf9
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
