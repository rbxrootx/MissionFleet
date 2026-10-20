// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00468130 .. +0x106 bytes.
extern "C" __declspec(naked) void __CrtIsMemoryBlock_00468130() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 63e710h
        push 46d504h
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
        add esp, -10h
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A4 FE FF FF: call 0x468000
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x46816a
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x468244
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 9
        ; Exact mapped bytes E8 3F 87 00 00: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 20h
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        cmp eax, 4
        ; Exact mapped bytes 74 22: je 0x4681b6
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 14h], 1
        ; Exact mapped bytes 74 19: je 0x4681b6
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        cmp eax, 2
        ; Exact mapped bytes 74 09: je 0x4681b6
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 14h], 3
        ; Exact mapped bytes 75 6B: jne 0x468221
        __asm _emit 0x75
        __asm _emit 0x6b
        push 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 EB FD FF FF: call 0x467fb0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x468221
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 10h]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 4A: jne 0x468221
        __asm _emit 0x75
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 18h]
        ; Exact mapped bytes 3B 0D 64 DA 67 00: cmp ecx, dword ptr [0x67da64]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 7F 3C: jg 0x468221
        __asm _emit 0x7f
        __asm _emit 0x3c
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0B: je 0x4681f6
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [edx], ecx
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 0B: je 0x468207
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx], ecx
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 0B: je 0x468218
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [edx], ecx
        mov dword ptr [ebp - 20h], 1
        ; Exact mapped bytes EB 07: jmp 0x468228
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 02 00 00 00: call 0x468236
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x468241
        __asm _emit 0xeb
        __asm _emit 0x0b
    }
}
