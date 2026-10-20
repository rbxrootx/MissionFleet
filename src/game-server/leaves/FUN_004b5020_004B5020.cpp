// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B5020 .. +0xEE bytes.
extern "C" __declspec(naked) void FUN_004b5020_004B5020() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov eax, dword ptr [ebp + 8]
        sub eax, 76ch
        mov dword ptr [ebp + 8], eax
        cmp dword ptr [ebp + 8], 46h
        ; Exact mapped bytes 7C 09: jl 0x4b5040
        __asm _emit 0x7c
        __asm _emit 0x09
        cmp dword ptr [ebp + 8], 8ah
        ; Exact mapped bytes 7E 08: jle 0x4b5048
        __asm _emit 0x7e
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 C2 00 00 00: jmp 0x4b510a
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 10h]
        add edx, dword ptr [ecx*4 + 5d1eb0h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp + 8]
        and eax, 3
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x4b5071
        __asm _emit 0x75
        __asm _emit 0x0f
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 7E 09: jle 0x4b5071
        __asm _emit 0x7e
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 1
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp + 8]
        sub edx, 46h
        imul edx, edx, 16dh
        mov eax, dword ptr [ebp + 8]
        sub eax, 1
        sar eax, 2
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, edx
        lea edx, [eax + ecx - 11h]
        imul edx, edx, 18h
        add edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 3ch
        add eax, dword ptr [ebp + 18h]
        imul eax, eax, 3ch
        add eax, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 11 28 00 00: call 0x4b78c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 03 0D 94 1A 5D 00: add ecx, dword ptr [0x5d1a94]
        __asm _emit 0x03
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp + 20h], 1
        ; Exact mapped bytes 74 1F: je 0x4b50fb
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp dword ptr [ebp + 20h], -1
        ; Exact mapped bytes 75 25: jne 0x4b5107
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes 83 3D 98 1A 5D 00 00: cmp dword ptr [0x5d1a98], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1C: je 0x4b5107
        __asm _emit 0x74
        __asm _emit 0x1c
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 DC 2B 00 00: call 0x4b7cd0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x4b5107
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 03 0D 9C 1A 5D 00: add ecx, dword ptr [0x5d1a9c]
        __asm _emit 0x03
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
