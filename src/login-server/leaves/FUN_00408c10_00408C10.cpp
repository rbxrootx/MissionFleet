// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00408C10 .. +0x195 bytes.
extern "C" __declspec(naked) void FUN_00408c10_00408C10() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439a91h
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
        mov dword ptr [ebp - 4], 16h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 74h
        ; Exact mapped bytes E8 6D 4F 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 15h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 70h
        ; Exact mapped bytes E8 5E 4F 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 14h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 6ch
        ; Exact mapped bytes E8 4F 4F 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 13h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 68h
        ; Exact mapped bytes E8 40 4F 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 12h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 60h
        ; Exact mapped bytes E8 31 4F 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 11h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 58h
        ; Exact mapped bytes E8 22 4F 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 10h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 54h
        ; Exact mapped bytes E8 13 4F 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0fh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 50h
        ; Exact mapped bytes E8 04 4F 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0eh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4ch
        ; Exact mapped bytes E8 F5 4E 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0dh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 48h
        ; Exact mapped bytes E8 E6 4E 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 44h
        ; Exact mapped bytes E8 D7 4E 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0bh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 40h
        ; Exact mapped bytes E8 C8 4E 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0ah
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ch
        ; Exact mapped bytes E8 B9 4E 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 9
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 38h
        ; Exact mapped bytes E8 AA 4E 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 8
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34h
        ; Exact mapped bytes E8 9B 4E 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 7
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 30h
        ; Exact mapped bytes E8 8C 4E 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 6
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 7D 4E 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 5
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1ch
        ; Exact mapped bytes E8 6E 4E 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 18h
        ; Exact mapped bytes E8 5F 4E 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10h
        ; Exact mapped bytes E8 50 4E 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0ch
        ; Exact mapped bytes E8 41 4E 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8
        ; Exact mapped bytes E8 32 4E 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        ; Exact mapped bytes E8 23 4E 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 14 4E 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
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
        ret
    }
}
