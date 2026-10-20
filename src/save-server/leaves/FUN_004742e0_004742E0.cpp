// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004742E0 .. +0x130 bytes.
extern "C" __declspec(naked) void FUN_004742e0_004742E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 78 89 68 00 00: cmp dword ptr [0x688978], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 1B 01 00 00: je 0x47440c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 6C 89 68 00: mov eax, dword ptr [0x68896c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        shl eax, 0fh
        ; Exact mapped bytes 8B 0D 78 89 68 00: mov ecx, dword ptr [0x688978]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 0ch]
        add edx, eax
        mov dword ptr [ebp - 4], edx
        push 4000h
        push 8000h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 64 B8 68 00: call dword ptr [0x68b864]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, 80000000h
        ; Exact mapped bytes 8B 0D 6C 89 68 00: mov ecx, dword ptr [0x68896c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        shr edx, cl
        ; Exact mapped bytes A1 78 89 68 00: mov eax, dword ptr [0x688978]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 8]
        or ecx, edx
        ; Exact mapped bytes 8B 15 78 89 68 00: mov edx, dword ptr [0x688978]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes A1 78 89 68 00: mov eax, dword ptr [0x688978]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 8B 15 6C 89 68 00: mov edx, dword ptr [0x68896c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ecx + edx*4 + 0c4h], 0
        ; Exact mapped bytes A1 78 89 68 00: mov eax, dword ptr [0x688978]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 10h]
        mov dl, byte ptr [ecx + 43h]
        sub dl, 1
        ; Exact mapped bytes A1 78 89 68 00: mov eax, dword ptr [0x688978]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 10h]
        mov byte ptr [ecx + 43h], dl
        ; Exact mapped bytes 8B 15 78 89 68 00: mov edx, dword ptr [0x688978]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 0F BE 48 43: movsx ecx, byte ptr [eax + 0x43]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x43
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x474392
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 78 89 68 00: mov edx, dword ptr [0x688978]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [edx + 4]
        and al, 0feh
        ; Exact mapped bytes 8B 0D 78 89 68 00: mov ecx, dword ptr [0x688978]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes 8B 15 78 89 68 00: mov edx, dword ptr [0x688978]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [edx + 8], -1
        ; Exact mapped bytes 75 64: jne 0x474402
        __asm _emit 0x75
        __asm _emit 0x64
        ; Exact mapped bytes 83 3D 7C 89 68 00 01: cmp dword ptr [0x68897c], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x7c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 5B: jle 0x474402
        __asm _emit 0x7e
        __asm _emit 0x5b
        ; Exact mapped bytes A1 78 89 68 00: mov eax, dword ptr [0x688978]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 10h]
        push ecx
        push 0
        ; Exact mapped bytes 8B 15 88 89 68 00: mov edx, dword ptr [0x688988]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 68 B8 68 00: call dword ptr [0x68b868]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 7C 89 68 00: mov eax, dword ptr [0x68897c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        imul eax, eax, 14h
        ; Exact mapped bytes 8B 0D 80 89 68 00: mov ecx, dword ptr [0x688980]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        add ecx, eax
        ; Exact mapped bytes 8B 15 78 89 68 00: mov edx, dword ptr [0x688978]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        add edx, 14h
        sub ecx, edx
        push ecx
        ; Exact mapped bytes A1 78 89 68 00: mov eax, dword ptr [0x688978]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 14h
        push eax
        ; Exact mapped bytes 8B 0D 78 89 68 00: mov ecx, dword ptr [0x688978]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 70 18 FF FF: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes 8B 15 7C 89 68 00: mov edx, dword ptr [0x68897c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        sub edx, 1
        ; Exact mapped bytes 89 15 7C 89 68 00: mov dword ptr [0x68897c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 78 89 68 00 00 00 00 00: mov dword ptr [0x688978], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
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
