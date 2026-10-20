// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58746E90 .. +0x773 bytes.
extern "C" __declspec(naked) void FUN_58746e90_58746E90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 70h]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DA F0 D3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xf0
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 10h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x58746f54
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58746edf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 7D 1A: jge 0x58746eff
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 70h]
        mov dword ptr [ebp - 14h], edx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 44 89 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x58746ed6
        __asm _emit 0xeb
        __asm _emit 0xd7
        push 0c4h
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        push ecx
        ; Exact mapped bytes E8 FE 5E 10 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x5e
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 0ch
        push 50h
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        push eax
        ; Exact mapped bytes E8 EB 5E 10 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x5e
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov eax, 1
        ; Exact mapped bytes 66 89 42 38: mov word ptr [edx + 0x38], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x38
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 70h]
        mov dword ptr [ebp - 18h], eax
        push 5
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 ED 88 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x88
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        movzx eax, word ptr [edx + 38h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 0F 87 AA 05 00 00: ja 0x58747515
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xaa
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 8D 04 76 74 58: jmp dword ptr [ecx*4 + 0x58747604]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x76
        __asm _emit 0x74
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 30h], 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 34h], 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 38h], 32h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 3ch], 0eh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 40h], 7dh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 44h], 7dh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 48h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 4ch], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dl, byte ptr [ecx + 32h]
        and dl, 0f0h
        or dl, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 32h], dl
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov cl, byte ptr [eax + 31h]
        and cl, 80h
        or cl, 1eh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov byte ptr [eax + 31h], cl
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 47h], 7dh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 46h], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [eax + 80h], 0fa0h
        push 588b4c80h
        ; Exact mapped bytes E8 B5 AF DD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xaf
        __asm _emit 0xdd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        add edx, 0a6h
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 B1 04 00 00: jmp 0x58747515
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 30h], 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 34h], 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 38h], 14h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 3ch], 8
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 40h], 7dh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 44h], 7dh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 48h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 4ch], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dl, byte ptr [ecx + 32h]
        and dl, 0f0h
        or dl, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 32h], dl
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov cl, byte ptr [eax + 31h]
        and cl, 80h
        or cl, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov byte ptr [eax + 31h], cl
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 47h], 7dh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 46h], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [eax + 80h], 0fa0h
        push 588b4c90h
        ; Exact mapped bytes E8 C6 AE DD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xae
        __asm _emit 0xdd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        add edx, 0a6h
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 C2 03 00 00: jmp 0x58747515
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 30h], 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 34h], 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 38h], 50h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 3ch], 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 40h], 1eh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 44h], 1eh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 48h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 4ch], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dl, byte ptr [ecx + 32h]
        and dl, 0f0h
        or dl, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 32h], dl
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov cl, byte ptr [eax + 31h]
        and cl, 80h
        or cl, 1eh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov byte ptr [eax + 31h], cl
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 47h], 1eh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 46h], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [eax + 80h], 0fa2h
        push 588b4ca0h
        ; Exact mapped bytes E8 D7 AD DD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xad
        __asm _emit 0xdd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        add edx, 0a6h
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 D3 02 00 00: jmp 0x58747515
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 30h], 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 34h], 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 38h], 40h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 3ch], 10h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 40h], 55h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 44h], 55h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 48h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 4ch], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dl, byte ptr [ecx + 32h]
        and dl, 0f0h
        or dl, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 32h], dl
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov cl, byte ptr [eax + 31h]
        and cl, 80h
        or cl, 20h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov byte ptr [eax + 31h], cl
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 47h], 55h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 46h], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [eax + 80h], 0fa3h
        push 588b4cb0h
        ; Exact mapped bytes E8 E8 AC DD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xdd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        add edx, 0a6h
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 E4 01 00 00: jmp 0x58747515
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 30h], 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 34h], 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 38h], 1eh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 3ch], 1eh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 40h], 7dh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 44h], 7dh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 48h], 50h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 4ch], 50h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dl, byte ptr [ecx + 32h]
        and dl, 0f0h
        or dl, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 32h], dl
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov cl, byte ptr [eax + 31h]
        and cl, 80h
        or cl, 1eh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov byte ptr [eax + 31h], cl
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 47h], 7dh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 46h], 50h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [eax + 80h], 0fa0h
        push 588b4cc0h
        ; Exact mapped bytes E8 F9 AB DD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xab
        __asm _emit 0xdd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        add edx, 0a6h
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 F5 00 00 00: jmp 0x58747515
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 10h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 30h], 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 34h], 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 38h], 1eh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 3ch], 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 40h], 7dh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 44h], 7dh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 48h], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 4ch], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov cl, byte ptr [eax + 32h]
        and cl, 0f0h
        or cl, 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov byte ptr [eax + 32h], cl
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov al, byte ptr [edx + 31h]
        and al, 80h
        or al, 1eh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 31h], al
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 47h], 7dh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov byte ptr [eax + 46h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [edx + 80h], 0eh
        push 588b4cd0h
        ; Exact mapped bytes E8 FF AA DD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xaa
        __asm _emit 0xdd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        add ecx, 0a6h
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 0ch], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 20h], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, 0bh
        ; Exact mapped bytes 66 89 88 84 00 00 00: mov word ptr [eax + 0x84], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, 0bh
        ; Exact mapped bytes 66 89 48 36: mov word ptr [eax + 0x36], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [eax + 3ch]
        and ecx, 0fffffffdh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [eax + 3ch], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx + 3ch]
        and eax, 0fffffffeh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [edx + 3ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ecx + 3ch]
        or edx, 4
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ecx + 3ch], edx
        push 588b4ce8h
        ; Exact mapped bytes E8 57 AA DD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xaa
        __asm _emit 0xdd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        push 30h
        mov edx, dword ptr [ebp - 50h]
        push edx
        ; Exact mapped bytes E8 C9 CB 06 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xcb
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes 8B 0D B8 07 96 58: mov ecx, dword ptr [0x589607b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A D5 D3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd5
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E3 F3 D3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf3
        __asm _emit 0xd3
        __asm _emit 0xff
        lea eax, [esi + eax + 2ch]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 A0 77 D7 FF: call 0x584bed90
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x77
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 5ch]
        ; Exact mapped bytes E8 D5 4F DA FF: call 0x584ec5d0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x4f
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
