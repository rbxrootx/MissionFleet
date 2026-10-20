// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B7070 .. +0x130 bytes.
extern "C" __declspec(naked) void FUN_004b7070_004B7070() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 50 02 5E 00 00: cmp dword ptr [0x5e0250], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 1B 01 00 00: je 0x4b719c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 48 02 5E 00: mov eax, dword ptr [0x5e0248]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        shl eax, 0fh
        ; Exact mapped bytes 8B 0D 50 02 5E 00: mov ecx, dword ptr [0x5e0250]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 0ch]
        add edx, eax
        mov dword ptr [ebp - 4], edx
        push 4000h
        push 8000h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 68 22 5E 00: call dword ptr [0x5e2268]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, 80000000h
        ; Exact mapped bytes 8B 0D 48 02 5E 00: mov ecx, dword ptr [0x5e0248]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        shr edx, cl
        ; Exact mapped bytes A1 50 02 5E 00: mov eax, dword ptr [0x5e0250]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 8]
        or ecx, edx
        ; Exact mapped bytes 8B 15 50 02 5E 00: mov edx, dword ptr [0x5e0250]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes A1 50 02 5E 00: mov eax, dword ptr [0x5e0250]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 8B 15 48 02 5E 00: mov edx, dword ptr [0x5e0248]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ecx + edx*4 + 0c4h], 0
        ; Exact mapped bytes A1 50 02 5E 00: mov eax, dword ptr [0x5e0250]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 10h]
        mov dl, byte ptr [ecx + 43h]
        sub dl, 1
        ; Exact mapped bytes A1 50 02 5E 00: mov eax, dword ptr [0x5e0250]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 10h]
        mov byte ptr [ecx + 43h], dl
        ; Exact mapped bytes 8B 15 50 02 5E 00: mov edx, dword ptr [0x5e0250]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 0F BE 48 43: movsx ecx, byte ptr [eax + 0x43]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x43
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x4b7122
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 50 02 5E 00: mov edx, dword ptr [0x5e0250]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [edx + 4]
        and al, 0feh
        ; Exact mapped bytes 8B 0D 50 02 5E 00: mov ecx, dword ptr [0x5e0250]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes 8B 15 50 02 5E 00: mov edx, dword ptr [0x5e0250]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [edx + 8], -1
        ; Exact mapped bytes 75 64: jne 0x4b7192
        __asm _emit 0x75
        __asm _emit 0x64
        ; Exact mapped bytes 83 3D 54 02 5E 00 01: cmp dword ptr [0x5e0254], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 5B: jle 0x4b7192
        __asm _emit 0x7e
        __asm _emit 0x5b
        ; Exact mapped bytes A1 50 02 5E 00: mov eax, dword ptr [0x5e0250]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
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
        ; Exact mapped bytes 8B 15 50 02 5E 00: mov edx, dword ptr [0x5e0250]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        add edx, 14h
        sub ecx, edx
        push ecx
        ; Exact mapped bytes A1 50 02 5E 00: mov eax, dword ptr [0x5e0250]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 14h
        push eax
        ; Exact mapped bytes 8B 0D 50 02 5E 00: mov ecx, dword ptr [0x5e0250]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 10 57 FF FF: call 0x4ac890
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes 8B 15 54 02 5E 00: mov edx, dword ptr [0x5e0254]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        sub edx, 1
        ; Exact mapped bytes 89 15 54 02 5E 00: mov dword ptr [0x5e0254], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 50 02 5E 00 00 00 00 00: mov dword ptr [0x5e0250], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
