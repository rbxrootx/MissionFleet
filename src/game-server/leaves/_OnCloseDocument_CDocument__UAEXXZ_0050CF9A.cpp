// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050CF9A .. +0xD7 bytes.
extern "C" __declspec(naked) void _OnCloseDocument_CDocument__UAEXXZ_0050CF9A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 48h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 48h], 0
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 28h
        ; Exact mapped bytes E8 C0 5B 02 00: call 0x532b81
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 60: jne 0x50d025
        __asm _emit 0x75
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 28h
        ; Exact mapped bytes E8 CA 5B 02 00: call 0x532b9a
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        push 319h
        push 5cba5ch
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 78 E1 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 52 7B FE FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 31bh
        push 5cba5ch
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 5A E1 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 92 9C 00 00 00: call dword ptr [edx + 0x9c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        ; Exact mapped bytes EB 91: jmp 0x50cfb6
        __asm _emit 0xeb
        __asm _emit 0x91
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 48h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 50 74: call dword ptr [eax + 0x74]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 48h], 0
        ; Exact mapped bytes 74 2B: je 0x50d06d
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 12: je 0x50d066
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x50d06d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
