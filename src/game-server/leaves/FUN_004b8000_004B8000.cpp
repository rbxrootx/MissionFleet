// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B8000 .. +0x1F8 bytes.
extern "C" __declspec(naked) void FUN_004b8000_004B8000() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 0F 85 CC 00 00 00: jne 0x4b80dc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        and eax, 3
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x4b8029
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx*4 + 5d1e7ch]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 0D: jmp 0x4b8036
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax*4 + 5d1eb0h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 46h
        imul eax, eax, 16dh
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov edx, dword ptr [ebp + 10h]
        sub edx, 1
        sar edx, 2
        lea eax, [ecx + edx - 0dh]
        cdq
        mov ecx, 7
        idiv ecx
        mov dword ptr [ebp - 4], edx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 7D 19: jge 0x4b8089
        __asm _emit 0x7d
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 1ch]
        sub eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 18h]
        sub ecx, 1
        imul ecx, ecx, 7
        add ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 14: jmp 0x4b809d
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 1ch]
        sub edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 18h]
        imul eax, eax, 7
        add eax, dword ptr [ebp - 8]
        add eax, edx
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 18h], 5
        ; Exact mapped bytes 75 37: jne 0x4b80da
        __asm _emit 0x75
        __asm _emit 0x37
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 3
        test ecx, ecx
        ; Exact mapped bytes 75 0F: jne 0x4b80bc
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx*4 + 5d1e80h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 0D: jmp 0x4b80c9
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx*4 + 5d1eb4h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7E 09: jle 0x4b80da
        __asm _emit 0x7e
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 7
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 35: jmp 0x4b8111
        __asm _emit 0xeb
        __asm _emit 0x35
        mov edx, dword ptr [ebp + 10h]
        and edx, 3
        test edx, edx
        ; Exact mapped bytes 75 0F: jne 0x4b80f5
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax*4 + 5d1e7ch]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 0D: jmp 0x4b8102
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx*4 + 5d1eb0h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 3A: jne 0x4b8151
        __asm _emit 0x75
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes A3 2C 1B 5D 00: mov dword ptr [0x5d1b2c], eax
        __asm _emit 0xa3
        __asm _emit 0x2c
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 24h]
        imul ecx, ecx, 3ch
        mov edx, dword ptr [ebp + 28h]
        add edx, ecx
        imul edx, edx, 3ch
        mov eax, dword ptr [ebp + 2ch]
        add eax, edx
        imul eax, eax, 3e8h
        mov ecx, dword ptr [ebp + 30h]
        add ecx, eax
        ; Exact mapped bytes 89 0D 30 1B 5D 00: mov dword ptr [0x5d1b30], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 89 15 28 1B 5D 00: mov dword ptr [0x5d1b28], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x4b81f4
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes A3 3C 1B 5D 00: mov dword ptr [0x5d1b3c], eax
        __asm _emit 0xa3
        __asm _emit 0x3c
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 24h]
        imul ecx, ecx, 3ch
        mov edx, dword ptr [ebp + 28h]
        add edx, ecx
        imul edx, edx, 3ch
        mov eax, dword ptr [ebp + 2ch]
        add eax, edx
        imul eax, eax, 3e8h
        mov ecx, dword ptr [ebp + 30h]
        add ecx, eax
        ; Exact mapped bytes 89 0D 40 1B 5D 00: mov dword ptr [0x5d1b40], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 1A 5D 00: mov edx, dword ptr [0x5d1a9c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        imul edx, edx, 3e8h
        ; Exact mapped bytes A1 40 1B 5D 00: mov eax, dword ptr [0x5d1b40]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        add eax, edx
        ; Exact mapped bytes A3 40 1B 5D 00: mov dword ptr [0x5d1b40], eax
        __asm _emit 0xa3
        __asm _emit 0x40
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 40 1B 5D 00 00: cmp dword ptr [0x5d1b40], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7D 23: jge 0x4b81c1
        __asm _emit 0x7d
        __asm _emit 0x23
        ; Exact mapped bytes 8B 0D 40 1B 5D 00: mov ecx, dword ptr [0x5d1b40]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, 5265c00h
        ; Exact mapped bytes 89 0D 40 1B 5D 00: mov dword ptr [0x5d1b40], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 3C 1B 5D 00: mov edx, dword ptr [0x5d1b3c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        sub edx, 1
        ; Exact mapped bytes 89 15 3C 1B 5D 00: mov dword ptr [0x5d1b3c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 2A: jmp 0x4b81eb
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes 81 3D 40 1B 5D 00 00 5C 26 05: cmp dword ptr [0x5d1b40], 0x5265c00
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5c
        __asm _emit 0x26
        __asm _emit 0x05
        ; Exact mapped bytes 7C 1E: jl 0x4b81eb
        __asm _emit 0x7c
        __asm _emit 0x1e
        ; Exact mapped bytes A1 40 1B 5D 00: mov eax, dword ptr [0x5d1b40]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        sub eax, 5265c00h
        ; Exact mapped bytes A3 40 1B 5D 00: mov dword ptr [0x5d1b40], eax
        __asm _emit 0xa3
        __asm _emit 0x40
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 3C 1B 5D 00: mov ecx, dword ptr [0x5d1b3c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, 1
        ; Exact mapped bytes 89 0D 3C 1B 5D 00: mov dword ptr [0x5d1b3c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 89 15 38 1B 5D 00: mov dword ptr [0x5d1b38], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x1b
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
