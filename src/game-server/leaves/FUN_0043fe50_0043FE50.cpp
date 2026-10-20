// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043FE50 .. +0x15E bytes.
extern "C" __declspec(naked) void FUN_0043fe50_0043FE50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a7dbh
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
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 18 F8 00 00: call 0x44f693
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 480h
        ; Exact mapped bytes E8 BE 0A 01 00: call 0x45094e
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8d0h
        ; Exact mapped bytes E8 23 2A 01 00: call 0x4528c5
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0d38h
        ; Exact mapped bytes E8 20 37 01 00: call 0x4535d4
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1178h
        ; Exact mapped bytes E8 3C 3B 01 00: call 0x453a02
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 15b8h
        ; Exact mapped bytes E8 F1 3F 01 00: call 0x453ec9
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 5
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 19f8h
        ; Exact mapped bytes E8 0D 44 01 00: call 0x4542f7
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 6
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1f28h
        ; Exact mapped bytes E8 04 66 01 00: call 0x456500
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 7
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 2368h
        ; Exact mapped bytes E8 B9 6A 01 00: call 0x4569c7
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 8
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 27a8h
        ; Exact mapped bytes E8 6E 6F 01 00: call 0x456e8e
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 9
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 2be8h
        ; Exact mapped bytes E8 23 74 01 00: call 0x457355
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0ah
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3028h
        ; Exact mapped bytes E8 69 79 01 00: call 0x4578ad
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0bh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3468h
        ; Exact mapped bytes E8 AF 7E 01 00: call 0x457e05
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 38a8h
        ; Exact mapped bytes E8 F5 83 01 00: call 0x45835d
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0dh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ce8h
        ; Exact mapped bytes E8 AA 88 01 00: call 0x458824
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0eh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4138h
        ; Exact mapped bytes E8 15 A8 01 00: call 0x45a7a1
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x01
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
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 36 88 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
