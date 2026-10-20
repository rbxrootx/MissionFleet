// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047D180 .. +0x58F bytes.
extern "C" __declspec(naked) void FUN_0047d180_0047D180() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0
        xor eax, eax
        ; Exact mapped bytes 66 A1 AE 75 68 00: mov ax, word ptr [0x6875ae]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xae
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D B0 75 68 00: mov cx, word ptr [0x6875b0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 08: jne 0x47d1b2
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 59 05 00 00: jmp 0x47d70b
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
        ; Exact mapped bytes E8 BA 46 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x46
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
        ; Exact mapped bytes E8 9B 46 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x46
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
        ; Exact mapped bytes E8 7C 46 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x46
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
        ; Exact mapped bytes E8 5D 46 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x46
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
        ; Exact mapped bytes E8 3E 46 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x46
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
        ; Exact mapped bytes E8 1F 46 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x46
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
        ; Exact mapped bytes E8 03 46 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x46
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
        ; Exact mapped bytes E8 E4 45 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x45
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
        ; Exact mapped bytes E8 C5 45 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x45
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
        ; Exact mapped bytes E8 A6 45 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x45
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
        ; Exact mapped bytes E8 87 45 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x45
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
        ; Exact mapped bytes E8 68 45 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x45
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
        ; Exact mapped bytes E8 49 45 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x45
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
        ; Exact mapped bytes E8 2A 45 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x45
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
        ; Exact mapped bytes E8 0B 45 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x45
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
        ; Exact mapped bytes E8 EC 44 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x44
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
        ; Exact mapped bytes E8 CD 44 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x44
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
        ; Exact mapped bytes E8 AE 44 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x44
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
        ; Exact mapped bytes E8 8F 44 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x44
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
        ; Exact mapped bytes E8 70 44 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x44
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
        ; Exact mapped bytes E8 51 44 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x44
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
        ; Exact mapped bytes E8 32 44 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x44
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
        ; Exact mapped bytes E8 13 44 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x44
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
        ; Exact mapped bytes E8 F4 43 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x43
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
        ; Exact mapped bytes E8 D5 43 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x43
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
        ; Exact mapped bytes E8 B6 43 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x43
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
        ; Exact mapped bytes E8 97 43 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x43
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
        ; Exact mapped bytes E8 78 43 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x43
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
        ; Exact mapped bytes E8 59 43 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x43
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
        ; Exact mapped bytes E8 3A 43 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x43
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
        ; Exact mapped bytes E8 1B 43 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x43
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
        ; Exact mapped bytes E8 FC 42 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x42
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
        ; Exact mapped bytes E8 DA 42 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x42
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
        ; Exact mapped bytes E8 B8 42 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x42
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
        ; Exact mapped bytes E8 96 42 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x42
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
        ; Exact mapped bytes E8 74 42 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x42
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
        ; Exact mapped bytes E8 52 42 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x42
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
        ; Exact mapped bytes E8 30 42 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x42
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
        ; Exact mapped bytes E8 0E 42 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x42
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
        ; Exact mapped bytes E8 EC 41 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x41
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
        ; Exact mapped bytes E8 CA 41 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x41
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
        ; Exact mapped bytes E8 A8 41 00 00: call 0x481880
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
        add edx, 0a8h
        push edx
        push 1003h
        mov eax, dword ptr [ebp - 8]
        push eax
        push 1
        ; Exact mapped bytes E8 83 41 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x41
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
