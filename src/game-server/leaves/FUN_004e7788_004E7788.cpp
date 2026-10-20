// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E7788 .. +0x109 bytes.
extern "C" __declspec(naked) void FUN_004e7788_004E7788() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 106h
        push 5c8f3ch
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 B9 39 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x4e77be
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 99 FB FF FF: call 0x4e7352
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x4e7888
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], edx
        push 1
        push 0ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 85 86 FE FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e77e9
        __asm _emit 0x75
        __asm _emit 0x14
        push 10dh
        push 5c8f3ch
        ; Exact mapped bytes E8 1C D2 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xd2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e77e9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4e77c4
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6A F9 FF FF: call 0x4e716b
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 3A: je 0x4e784f
        __asm _emit 0x74
        __asm _emit 0x3a
        push 1
        push 0ch
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 32 86 FE FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e783c
        __asm _emit 0x75
        __asm _emit 0x14
        push 113h
        push 5c8f3ch
        ; Exact mapped bytes E8 C9 D1 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xd1
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e783c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x4e7815
        __asm _emit 0x75
        __asm _emit 0xd3
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes EB 2E: jmp 0x4e787d
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 74 14: je 0x4e786e
        __asm _emit 0x74
        __asm _emit 0x14
        push 118h
        push 5c8f3ch
        ; Exact mapped bytes E8 97 D1 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd1
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e786e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x4e784f
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
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
