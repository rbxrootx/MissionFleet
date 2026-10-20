// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A5D30 .. +0x12B bytes.
extern "C" __declspec(naked) void FUN_004a5d30_004A5D30() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fe3ch
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
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 77 1A 08 00: call 0x5277cf
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x1a
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 60h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 5ch], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 63de68h
        push 42h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 60h
        push ecx
        ; Exact mapped bytes E8 3C FB FB FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfb
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [eax], 42h
        mov ecx, dword ptr [ebp + 0ch]
        or ch, 10h
        or ch, 20h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [eax + 14h], ecx
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1E: jne 0x4a5dcc
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes E8 EA 8C 02 00: call 0x4cea9d
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x4a5dcc
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [edx + 14h]
        or ah, 8
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [edx + 14h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ecx + 2ah], 4a34d0h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [eax + 2eh], 4a34d0h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 21: je 0x4a5e0d
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 3ch], 7009h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [eax + 14h]
        or ecx, 40h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [eax + 14h], ecx
        ; Exact mapped bytes EB 1F: jmp 0x4a5e2c
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 3ch], 7008h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [eax + 14h]
        or ch, 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [eax + 14h], ecx
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [edx + 14h]
        and ah, 0fdh
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [edx + 14h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
