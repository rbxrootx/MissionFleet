// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D2C20 .. +0x125 bytes.
extern "C" __declspec(naked) void FUN_004d2c20_004D2C20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58035ch
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
        ; Exact mapped bytes E8 BE 0D 06 00: call 0x533a06
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x0d
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 60h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 5ch], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58b840h
        push 42h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 60h
        push ecx
        ; Exact mapped bytes E8 FC 66 FD FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x66
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [eax], 42h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 14h], eax
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 38: jne 0x4d2cd0
        __asm _emit 0x75
        __asm _emit 0x38
        ; Exact mapped bytes E8 D0 DE 01 00: call 0x4f0b6d
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x4d2cd0
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [edx + 14h]
        or ah, 38h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [edx + 14h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ecx + 2ah], 4cfec0h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [eax + 2eh], 4cfec0h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 21: je 0x4d2cf7
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
        ; Exact mapped bytes EB 1F: jmp 0x4d2d16
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
