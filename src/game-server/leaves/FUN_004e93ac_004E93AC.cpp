// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E93AC .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_004e93ac_004E93AC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 3dh
        push 5c4fd0h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 98 1D 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 11: je 0x4e93e2
        __asm _emit 0x74
        __asm _emit 0x11
        push 3eh
        push 5c4fd0h
        ; Exact mapped bytes E8 23 B6 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e93e2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4e93c8
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 77 11: ja 0x4e93ff
        __asm _emit 0x77
        __asm _emit 0x11
        push 3fh
        push 5c4fd0h
        ; Exact mapped bytes E8 06 B6 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e93ff
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4e93e8
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 1F: je 0x4e942d
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 E9 3F 00 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 4], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 3A: je 0x4e946d
        __asm _emit 0x74
        __asm _emit 0x3a
        push 4ah
        push 5c4fd0h
        mov eax, dword ptr [ebp + 8]
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 ED 3B 00 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x3b
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
        ; Exact mapped bytes E8 06 FF FB FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xff
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
