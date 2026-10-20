// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044D710 .. +0x1DB bytes.
extern "C" __declspec(naked) void FUN_0044d710_0044D710() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58dd24h
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
        ; Exact mapped bytes E8 4C 96 08 00: call 0x4d6d80
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x96
        __asm _emit 0x08
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
        ; Exact mapped bytes E8 64 4A 0E 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x4a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 50h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 54h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 58h
        ; Exact mapped bytes E8 E7 4D 13 00: call 0x582573
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x4d
        __asm _emit 0x13
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
        ; Exact mapped bytes E8 FD 74 0D 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x74
        __asm _emit 0x0d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0a0h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0a4h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0b8h
        ; Exact mapped bytes E8 2A 78 00 00: call 0x455060
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0bch
        ; Exact mapped bytes E8 3C 78 00 00: call 0x455080
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0c0h
        ; Exact mapped bytes E8 4E 78 00 00: call 0x4550a0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0c4h
        ; Exact mapped bytes E8 60 78 00 00: call 0x4550c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0c8h
        ; Exact mapped bytes E8 72 78 00 00: call 0x4550e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0cch
        ; Exact mapped bytes E8 84 78 00 00: call 0x455100
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0d0h
        ; Exact mapped bytes E8 96 78 00 00: call 0x455120
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0d4h
        ; Exact mapped bytes E8 A8 78 00 00: call 0x455140
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0d8h
        ; Exact mapped bytes E8 BA 78 00 00: call 0x455160
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 63939ch
        push 10h
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0a8h
        push ecx
        ; Exact mapped bytes E8 FE 7F 01 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x7f
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
