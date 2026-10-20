// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045E5F1 .. +0x273 bytes.
extern "C" __declspec(naked) void FUN_0045e5f1_0045E5F1() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58eb3eh
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
        sub esp, 44h
        push ebx
        push esi
        push edi
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 01 D7 0E 00: call 0x54bd18
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xd7
        __asm _emit 0x0e
        __asm _emit 0x00
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 7F 79 00 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], esp
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 C2 09 00 00: call 0x45effc
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        and ch, 0dfh
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 4ch]
        sub edx, 2
        mov dword ptr [ebp - 4ch], edx
        cmp dword ptr [ebp - 4ch], 11h
        ; Exact mapped bytes 0F 87 D2 01 00 00: ja 0x45e82d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 24 85 64 E8 45 00: jmp dword ptr [eax*4 + 0x45e864]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 11: movsx edx, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x11
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 23 A4 0C 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa4
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E9 D7 01 00 00: jmp 0x45e850
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0F A4 0C 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xa4
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E9 C3 01 00 00: jmp 0x45e850
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 02: movsx eax, word ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x02
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB A3 0C 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E9 AF 01 00 00: jmp 0x45e850
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 80 A3 0C 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E9 9C 01 00 00: jmp 0x45e850
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov cl, byte ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C7 A2 0C 00: call 0x528989
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xa2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E9 89 01 00 00: jmp 0x45e850
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EC A2 0C 00: call 0x5289c2
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xa2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E9 75 01 00 00: jmp 0x45e850
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7A A3 0C 00: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E9 62 01 00 00: jmp 0x45e850
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 14 AB 0C 00: call 0x529210
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xab
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E9 4F 01 00 00: jmp 0x45e850
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [edx]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 32 AB 0C 00: call 0x529245
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xab
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E9 38 01 00 00: jmp 0x45e850
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 E3 C8 0E 00: call 0x54b003
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xc8
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 66 C7 45 E0 06 00: mov word ptr [ebp - 0x20], 6
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe0
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], ecx
        push 0
        push 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 50 B1 FF FF: call 0x459897
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 A5 0C 00: call 0x528cc5
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa5
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 B8 C8 0E 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xc8
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes E9 E9 00 00 00: jmp 0x45e850
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 94 C8 0E 00: call 0x54b003
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xc8
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes 66 C7 45 D0 07 00: mov word ptr [ebp - 0x30], 7
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 24h], edx
        push 0
        push 8
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 01 B1 FF FF: call 0x459897
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 23 A5 0C 00: call 0x528cc5
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa5
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 69 C8 0E 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xc8
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 06 A5 0C 00: call 0x528cc5
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xa5
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x45e850
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5D A2 0C 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xa2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 7C: jmp 0x45e850
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 42 A3 0C 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 6C: jmp 0x45e850
        __asm _emit 0xeb
        __asm _emit 0x6c
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 17 C8 0E 00: call 0x54b003
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xc8
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 23 B4 FF FF: call 0x459c22
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        sub esp, 10h
        mov ecx, esp
        mov dword ptr [ebp - 44h], esp
        lea edx, [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 B0 AC FF FF: call 0x4594c0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A3 B8 FF FF: call 0x45a0bf
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 EF C7 0E 00: call 0x54b01a
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xc7
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x45e850
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x45e84a
        __asm _emit 0x74
        __asm _emit 0x14
        push 0a94h
        push 678664h
        ; Exact mapped bytes E8 FB A4 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xa4
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45e84a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x45e82d
        __asm _emit 0x75
        __asm _emit 0xdd
        lea esp, [ebp - 5ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
