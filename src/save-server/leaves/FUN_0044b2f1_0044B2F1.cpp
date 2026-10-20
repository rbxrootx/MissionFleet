// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044B2F1 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_0044b2f1_0044B2F1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x44b317
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c2h
        push 67288ch
        ; Exact mapped bytes E8 2E DA 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xda
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44b317
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x44b2fd
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 75 14: jne 0x44b337
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c3h
        push 67288ch
        ; Exact mapped bytes E8 0E DA 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xda
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44b337
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x44b31d
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 25 AA 08 00: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xaa
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 09: je 0x44b35e
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 39: jne 0x44b397
        __asm _emit 0x75
        __asm _emit 0x39
        mov edx, dword ptr [ebp + 8]
        push edx
        push 672988h
        ; Exact mapped bytes E8 A9 52 05 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x52
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x44b38c
        __asm _emit 0x74
        __asm _emit 0x14
        push 2c8h
        push 67288ch
        ; Exact mapped bytes E8 B9 D9 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xd9
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44b38c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x44b36f
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E8 62 7B 05 00: call 0x4a2ef9
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [edx + 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp - 4]
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
