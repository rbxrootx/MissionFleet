// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00441F20 .. +0x1A3 bytes.
extern "C" __declspec(naked) void FUN_00441f20_00441F20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ad57h
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
        mov dword ptr [ebp - 4], 12h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3b8h
        ; Exact mapped bytes E8 64 FC 0D 00: call 0x521bbc
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0x0d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 11h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 37ch
        ; Exact mapped bytes E8 5C 23 09 00: call 0x4d42c6
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x23
        __asm _emit 0x09
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 10h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 340h
        ; Exact mapped bytes E8 4A 23 09 00: call 0x4d42c6
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x23
        __asm _emit 0x09
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0fh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 304h
        ; Exact mapped bytes E8 4A 00 0E 00: call 0x521fd8
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x0e
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0eh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 2c8h
        ; Exact mapped bytes E8 38 00 0E 00: call 0x521fd8
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x0e
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0dh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28ch
        ; Exact mapped bytes E8 26 00 0E 00: call 0x521fd8
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x0e
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 250h
        ; Exact mapped bytes E8 14 00 0E 00: call 0x521fd8
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x0e
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0bh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 214h
        ; Exact mapped bytes E8 02 00 0E 00: call 0x521fd8
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x0e
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0ah
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1d8h
        ; Exact mapped bytes E8 F0 FF 0D 00: call 0x521fd8
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 9
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 19ch
        ; Exact mapped bytes E8 DE FF 0D 00: call 0x521fd8
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 8
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 160h
        ; Exact mapped bytes E8 0F 3C 09 00: call 0x4d5c1b
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x3c
        __asm _emit 0x09
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 7
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 15ch
        ; Exact mapped bytes E8 2E B8 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 6
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 158h
        ; Exact mapped bytes E8 1C B8 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 5
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 154h
        ; Exact mapped bytes E8 0A B8 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 150h
        ; Exact mapped bytes E8 F8 B7 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 14ch
        ; Exact mapped bytes E8 E6 B7 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xb7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 148h
        ; Exact mapped bytes E8 D4 B7 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 144h
        ; Exact mapped bytes E8 C2 B7 0A 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xb7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0a4h
        ; Exact mapped bytes E8 34 00 00 00: call 0x4420d0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7F DB 0A 00: call 0x4efc2a
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xdb
        __asm _emit 0x0a
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
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 21 67 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x67
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
