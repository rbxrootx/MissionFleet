// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C2250 .. +0x58F bytes.
extern "C" __declspec(naked) void FUN_004c2250_004C2250() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0
        xor eax, eax
        ; Exact mapped bytes 66 A1 9A F0 5D 00: mov ax, word ptr [0x5df09a]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x9a
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D 9C F0 5D 00: mov cx, word ptr [0x5df09c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 08: jne 0x4c2282
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 59 05 00 00: jmp 0x4c27db
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        add edx, 4
        push edx
        push 31h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 EA 44 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 8
        push edx
        push 32h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 CB 44 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 0ch
        push edx
        push 33h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 AC 44 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 10h
        push edx
        push 34h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 8D 44 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 14h
        push edx
        push 35h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 6E 44 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 18h
        push edx
        push 36h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 4F 44 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 37h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 33 44 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 20h
        push edx
        push 2ah
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 14 44 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 24h
        push edx
        push 2bh
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 F5 43 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 28h
        push edx
        push 2ch
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 D6 43 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 2ch
        push edx
        push 2dh
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 B7 43 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 30h
        push edx
        push 2eh
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 98 43 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 34h
        push edx
        push 2fh
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 79 43 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 1ch
        push edx
        push 30h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 5A 43 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 38h
        push edx
        push 44h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 3B 43 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 3ch
        push edx
        push 45h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 1C 43 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 40h
        push edx
        push 46h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 FD 42 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 44h
        push edx
        push 47h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 DE 42 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 48h
        push edx
        push 48h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 BF 42 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 4ch
        push edx
        push 49h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 A0 42 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 50h
        push edx
        push 4ah
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 81 42 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 54h
        push edx
        push 4bh
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 62 42 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 58h
        push edx
        push 4ch
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 43 42 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 5ch
        push edx
        push 4dh
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 24 42 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 60h
        push edx
        push 4eh
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 05 42 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 64h
        push edx
        push 4fh
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 E6 41 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 68h
        push edx
        push 38h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 C7 41 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 6ch
        push edx
        push 39h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 A8 41 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 70h
        push edx
        push 3ah
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 89 41 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 74h
        push edx
        push 3bh
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 6A 41 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 78h
        push edx
        push 3ch
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 4B 41 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 7ch
        push edx
        push 3dh
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 2C 41 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 80h
        push edx
        push 3eh
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 0A 41 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 84h
        push edx
        push 3fh
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 E8 40 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 88h
        push edx
        push 40h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 C6 40 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 8ch
        push edx
        push 41h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 A4 40 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 90h
        push edx
        push 42h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 82 40 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 94h
        push edx
        push 43h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 60 40 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 98h
        push edx
        push 28h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 3E 40 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 9ch
        push edx
        push 29h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 1C 40 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 0a0h
        push edx
        push 1fh
        mov eax, dword ptr [ebp - 8]
        push eax
        push 1
        ; Exact mapped bytes E8 FA 3F 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 0a4h
        push edx
        push 20h
        mov eax, dword ptr [ebp - 8]
        push eax
        push 1
        ; Exact mapped bytes E8 D8 3F 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 0a8h
        push edx
        push 1003h
        mov eax, dword ptr [ebp - 8]
        push eax
        push 1
        ; Exact mapped bytes E8 B3 3F 00 00: call 0x4c6780
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        or ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
