// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F7180 .. +0x1F7 bytes.
extern "C" __declspec(naked) void FUN_586f7180_586F7180() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 0e5h
        ; Exact mapped bytes 0F 85 94 01 00 00: jne 0x586f7334
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 0ff0000h
        sar edx, 10h
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 10h
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 29h
        ; Exact mapped bytes 0F 87 67 01 00 00: ja 0x586f7332
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 95 78 73 6F 58: jmp dword ptr [edx*4 + 0x586f7378]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0x73
        __asm _emit 0x6f
        __asm _emit 0x58
        mov dword ptr [ebp - 4], 41h
        ; Exact mapped bytes E9 51 01 00 00: jmp 0x586f7332
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 42h
        ; Exact mapped bytes E9 45 01 00 00: jmp 0x586f7332
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 43h
        ; Exact mapped bytes E9 39 01 00 00: jmp 0x586f7332
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 44h
        ; Exact mapped bytes E9 2D 01 00 00: jmp 0x586f7332
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 45h
        ; Exact mapped bytes E9 21 01 00 00: jmp 0x586f7332
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 46h
        ; Exact mapped bytes E9 15 01 00 00: jmp 0x586f7332
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 47h
        ; Exact mapped bytes E9 09 01 00 00: jmp 0x586f7332
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 48h
        ; Exact mapped bytes E9 FD 00 00 00: jmp 0x586f7332
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 49h
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x586f7332
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 4ah
        ; Exact mapped bytes E9 E5 00 00 00: jmp 0x586f7332
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 4bh
        ; Exact mapped bytes E9 D9 00 00 00: jmp 0x586f7332
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 4ch
        ; Exact mapped bytes E9 CD 00 00 00: jmp 0x586f7332
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 4dh
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x586f7332
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 4eh
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x586f7332
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 4fh
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x586f7332
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 50h
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x586f7332
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 51h
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x586f7332
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 52h
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x586f7332
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 53h
        ; Exact mapped bytes EB 7C: jmp 0x586f7332
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov dword ptr [ebp - 4], 54h
        ; Exact mapped bytes EB 73: jmp 0x586f7332
        __asm _emit 0xeb
        __asm _emit 0x73
        mov dword ptr [ebp - 4], 55h
        ; Exact mapped bytes EB 6A: jmp 0x586f7332
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov dword ptr [ebp - 4], 56h
        ; Exact mapped bytes EB 61: jmp 0x586f7332
        __asm _emit 0xeb
        __asm _emit 0x61
        mov dword ptr [ebp - 4], 57h
        ; Exact mapped bytes EB 58: jmp 0x586f7332
        __asm _emit 0xeb
        __asm _emit 0x58
        mov dword ptr [ebp - 4], 58h
        ; Exact mapped bytes EB 4F: jmp 0x586f7332
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov dword ptr [ebp - 4], 59h
        ; Exact mapped bytes EB 46: jmp 0x586f7332
        __asm _emit 0xeb
        __asm _emit 0x46
        mov dword ptr [ebp - 4], 5ah
        ; Exact mapped bytes EB 3D: jmp 0x586f7332
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov dword ptr [ebp - 4], 20h
        ; Exact mapped bytes EB 34: jmp 0x586f7332
        __asm _emit 0xeb
        __asm _emit 0x34
        mov dword ptr [ebp - 4], 0dch
        ; Exact mapped bytes EB 2B: jmp 0x586f7332
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov dword ptr [ebp - 4], 0bah
        ; Exact mapped bytes EB 22: jmp 0x586f7332
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 4], 0deh
        ; Exact mapped bytes EB 19: jmp 0x586f7332
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 4], 0bch
        ; Exact mapped bytes EB 10: jmp 0x586f7332
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 4], 0beh
        ; Exact mapped bytes EB 07: jmp 0x586f7332
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0bfh
        ; Exact mapped bytes EB 09: jmp 0x586f733d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586f734f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 1fh
        ; Exact mapped bytes 7D 19: jge 0x586f736e
        __asm _emit 0x7d
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + eax*4 + 150h]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 05: jne 0x586f736c
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 05: jmp 0x586f7371
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB D8: jmp 0x586f7346
        __asm _emit 0xeb
        __asm _emit 0xd8
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
