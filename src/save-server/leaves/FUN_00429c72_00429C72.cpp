// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429C72 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_00429c72_00429C72() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax], 6343d4h
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 4], -1
        ; Exact mapped bytes 74 43: je 0x429ce6
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9B 02 00 00: call 0x429f46
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 48h], 0
        ; Exact mapped bytes 74 12: je 0x429cc6
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 78 3B 00 00: call 0x42d83e
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 84 C1 68 00: call dword ptr [0x68c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 14 B1 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 4], 0ffffffffh
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 74 1F: je 0x429d0e
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 A8 27 0A 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x27
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 34h], 0
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 1F: je 0x429d36
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 80 27 0A 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x27
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 1ch], 0
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 AF B0 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
