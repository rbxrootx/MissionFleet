// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00550241 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_00550241_00550241() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2F 17 FA FF: call 0x4f1984
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x17
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x550260
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x5502eb
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 7D: je 0x5502e6
        __asm _emit 0x74
        __asm _emit 0x7d
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 75 74: jne 0x5502e6
        __asm _emit 0x75
        __asm _emit 0x74
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 74 1C: je 0x550297
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 78h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 78h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 78h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x550272
        __asm _emit 0x75
        __asm _emit 0xd5
        lea edx, [ebp - 8]
        push edx
        push 0
        push 4011012h
        push 0
        ; Exact mapped bytes FF 15 1C C2 68 00: call dword ptr [0x68c21c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 04: je 0x5502bd
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2E: jmp 0x5502eb
        __asm _emit 0xeb
        __asm _emit 0x2e
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x5502d7
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c5h
        push 67bf90h
        ; Exact mapped bytes E8 6E 8A FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x8a
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5502d7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5502bd
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 78h], edx
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
