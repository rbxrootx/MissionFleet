// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040C4AA .. +0x1BA bytes.
extern "C" __declspec(naked) void FUN_0040c4aa_0040C4AA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439ec1h
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
        sub esp, 14h
        mov dword ptr [ebp - 1ch], ecx
        push -1
        push -1
        push 0
        push 28h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1C 51 00 00: call 0x411600
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 0ccch
        ; Exact mapped bytes E8 E7 0E 00 00: call 0x40d3e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 0cf4h
        ; Exact mapped bytes E8 65 23 00 00: call 0x40e870
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 0cfch
        ; Exact mapped bytes E8 33 0F 00 00: call 0x40d450
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 40cfch
        ; Exact mapped bytes E8 21 10 00 00: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax], 43cf1ch
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 0cb4h], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 0cbch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 0ca0h], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 0ca4h], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 0ca8h], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 0cach], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 0cc0h], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 0cc4h], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 0cc8h], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 0cb0h], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 0ce8h], 0
        ; Exact mapped bytes FF 15 80 C5 43 00: call dword ptr [0x43c580]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 0cf0h], eax
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 0cech], 1388h
        push 0
        push 0
        push 1
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6D 0F 00 00: call 0x40d560
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 40cfch
        ; Exact mapped bytes E8 8E 0F 00 00: call 0x40d590
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        push 1a4h
        ; Exact mapped bytes E8 E0 12 02 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 11: je 0x40c62d
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D8 49 FF FF: call 0x401000
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x40c634
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], ecx
        mov byte ptr [ebp - 4], 3
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 40d00h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
