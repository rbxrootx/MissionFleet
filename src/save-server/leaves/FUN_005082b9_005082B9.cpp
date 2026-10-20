// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005082B9 .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_005082b9_005082B9() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e640h
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
        sub esp, 70h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 7ch], ecx
        mov ecx, dword ptr [ebp - 7ch]
        add ecx, 4
        ; Exact mapped bytes E8 65 E6 01 00: call 0x52694a
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x50830e
        __asm _emit 0x74
        __asm _emit 0x25
        push 678118h
        push 678150h
        ; Exact mapped bytes E8 1D 83 F9 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        push -1
        push 0
        push 0f104h
        ; Exact mapped bytes E8 20 E8 FE FF: call 0x4f6b29
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x5083da
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7ch]
        add ecx, 4
        ; Exact mapped bytes E8 4A E6 01 00: call 0x526963
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 7ch]
        add ecx, 4
        ; Exact mapped bytes E8 10 E6 01 00: call 0x526939
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 7E 4F: jle 0x50837d
        __asm _emit 0x7e
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 7ch]
        add ecx, 4
        push ecx
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 33 02 00 00: call 0x508570
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 0C 63 FC FF: call 0x4ce658
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x63
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 75 08: jne 0x50835d
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 11: jmp 0x50836e
        __asm _emit 0xeb
        __asm _emit 0x11
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 44 02 00 00: call 0x5085b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 6C: jmp 0x5083da
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 33 02 00 00: call 0x5085b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x508397
        __asm _emit 0x75
        __asm _emit 0x14
        push 338h
        push 678024h
        ; Exact mapped bytes E8 AE 09 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x508397
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x50837d
        __asm _emit 0x75
        __asm _emit 0xe0
        push 639040h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E6 1D FD FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x1d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5083c2
        __asm _emit 0x75
        __asm _emit 0x14
        push 339h
        push 678024h
        ; Exact mapped bytes E8 83 09 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5083c2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x50839d
        __asm _emit 0x75
        __asm _emit 0xd5
        push 1
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 90 88 00 00 00: call dword ptr [eax + 0x88]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ret
    }
}
