// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D2309 .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_004d2309_004D2309() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e6e9h
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
        ; Exact mapped bytes E8 D5 16 06 00: call 0x533a06
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x16
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 587134h
        push 24h
        push 0
        mov edx, dword ptr [ebp - 10h]
        add edx, 5ch
        push edx
        ; Exact mapped bytes E8 1F 70 FD FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 3ch], 7007h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 5ch], 24h
        ; Exact mapped bytes E8 8B 01 00 00: call 0x4d24f8
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 6ch], eax
        mov eax, dword ptr [ebp + 0ch]
        or al, 10h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 70h], eax
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 17: jne 0x4d239e
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes E8 E1 E7 01 00: call 0x4f0b6d
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x4d239e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        or al, 8
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 70h], eax
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 78h], 4cfec0h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 68h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0E: je 0x4d23c5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 70h]
        or al, 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 70h], eax
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
