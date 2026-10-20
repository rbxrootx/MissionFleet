// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005526D1 .. +0x13B bytes.
extern "C" __declspec(naked) void FUN_005526d1_005526D1() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f46fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        push 213h
        push 67c1e0h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 5B 7B F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x7b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 14: je 0x552722
        __asm _emit 0x74
        __asm _emit 0x14
        push 214h
        push 67c1e0h
        ; Exact mapped bytes E8 23 66 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x66
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x552722
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x552705
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x552745
        __asm _emit 0x75
        __asm _emit 0x14
        push 215h
        push 67c1e0h
        ; Exact mapped bytes E8 00 66 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x66
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x552745
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x552728
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 25: je 0x552776
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 14h
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 08 0D F5 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x0d
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x552776
        __asm _emit 0x75
        __asm _emit 0x14
        push 217h
        push 67c1e0h
        ; Exact mapped bytes E8 CF 65 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x65
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x552776
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x55274b
        __asm _emit 0x75
        __asm _emit 0xcf
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 FC 71 01 00: call 0x569980
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 E6 7B 01 00: call 0x56a379
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x5527b2
        __asm _emit 0x75
        __asm _emit 0x1b
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 7B 42 00 00: call 0x556a28
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes EB 47: jmp 0x5527f9
        __asm _emit 0xeb
        __asm _emit 0x47
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 11 03 00 00: call 0x552adc
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        push 222h
        push 67c1e0h
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 7F 7A F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x7a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 32 42 00 00: call 0x556a28
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
