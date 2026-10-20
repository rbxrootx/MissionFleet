// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004910E0 .. +0x1DB bytes.
extern "C" __declspec(naked) void FUN_004910e0_004910E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e284h
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
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DC 6B 06 00: call 0x4f7ce0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x6b
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 1ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 24h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 28h], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 2ch
        ; Exact mapped bytes E8 1E 4C 0A 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x4c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 50h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 54h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 58h
        ; Exact mapped bytes E8 37 4D 0E 00: call 0x575e93
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x4d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 64h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 70h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 84h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 88h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 90h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 94h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 98h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 9ch
        ; Exact mapped bytes E8 2D FD 09 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfd
        __asm _emit 0x09
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0a4h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0b8h
        ; Exact mapped bytes E8 3A 78 00 00: call 0x498a40
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0bch
        ; Exact mapped bytes E8 4C 78 00 00: call 0x498a60
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0c0h
        ; Exact mapped bytes E8 5E 78 00 00: call 0x498a80
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0c4h
        ; Exact mapped bytes E8 70 78 00 00: call 0x498aa0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0c8h
        ; Exact mapped bytes E8 82 78 00 00: call 0x498ac0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0cch
        ; Exact mapped bytes E8 94 78 00 00: call 0x498ae0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0d0h
        ; Exact mapped bytes E8 A6 78 00 00: call 0x498b00
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0d4h
        ; Exact mapped bytes E8 B8 78 00 00: call 0x498b20
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0d8h
        ; Exact mapped bytes E8 CA 78 00 00: call 0x498b40
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 586d84h
        push 10h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0a8h
        push ecx
        ; Exact mapped bytes E8 DE 80 01 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 C7 82 A8 00 00 00 00 00: mov word ptr [edx + 0xa8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
