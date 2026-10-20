// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B6780 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_004b6780_004B6780() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes A1 54 02 5E 00: mov eax, dword ptr [0x5e0254]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 44 02 5E 00: cmp eax, dword ptr [0x5e0244]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 75 4A: jne 0x4b67db
        __asm _emit 0x75
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 44 02 5E 00: mov ecx, dword ptr [0x5e0244]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        add ecx, 10h
        imul ecx, ecx, 14h
        push ecx
        ; Exact mapped bytes 8B 15 58 02 5E 00: mov edx, dword ptr [0x5e0258]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push edx
        push 0
        ; Exact mapped bytes A1 5C 02 5E 00: mov eax, dword ptr [0x5e025c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 78 22 5E 00: call dword ptr [0x5e2278]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x4b67c3
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x4b688b
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 89 0D 58 02 5E 00: mov dword ptr [0x5e0258], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 44 02 5E 00: mov edx, dword ptr [0x5e0244]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        add edx, 10h
        ; Exact mapped bytes 89 15 44 02 5E 00: mov dword ptr [0x5e0244], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A1 54 02 5E 00: mov eax, dword ptr [0x5e0254]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        imul eax, eax, 14h
        ; Exact mapped bytes 8B 0D 58 02 5E 00: mov ecx, dword ptr [0x5e0258]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        add ecx, eax
        mov dword ptr [ebp - 4], ecx
        push 41c4h
        push 8
        ; Exact mapped bytes 8B 15 5C 02 5E 00: mov edx, dword ptr [0x5e025c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 7C 22 5E 00: call dword ptr [0x5e227c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 75 04: jne 0x4b6815
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 76: jmp 0x4b688b
        __asm _emit 0xeb
        __asm _emit 0x76
        push 4
        push 2000h
        push 100000h
        push 0
        ; Exact mapped bytes FF 15 64 22 5E 00: call dword ptr [0x5e2264]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 75 1A: jne 0x4b6852
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        push 0
        ; Exact mapped bytes 8B 15 5C 02 5E 00: mov edx, dword ptr [0x5e025c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 74 22 5E 00: call dword ptr [0x5e2274]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 39: jmp 0x4b688b
        __asm _emit 0xeb
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 0ffffffffh
        ; Exact mapped bytes A1 54 02 5E 00: mov eax, dword ptr [0x5e0254]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        ; Exact mapped bytes A3 54 02 5E 00: mov dword ptr [0x5e0254], eax
        __asm _emit 0xa3
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [edx], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
