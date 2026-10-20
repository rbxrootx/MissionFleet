// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D550 .. +0x2CD bytes.
extern "C" __declspec(naked) void FUN_0041d550_0041D550() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 579f6dh
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
        sub esp, 28h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 34h]
        mov ecx, 0ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 30h], ecx
        push 0feh
        push 5a1404h
        push 10ch
        ; Exact mapped bytes E8 9E FA 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xfa
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0D: je 0x41d5b5
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C0 BC FF FF: call 0x419270
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x41d5bc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 98h
        mov esi, esp
        push edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 2ch
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F1 B1 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xb1
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 0b0h
        mov esi, esp
        push ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 44h
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D1 B1 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb1
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, 80h
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 14h
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B2 B1 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xb1
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [edx + 50h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 88 C4 00 00 00: mov cx, word ptr [eax + 0xc4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4A 58: mov word ptr [edx + 0x58], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 88 C0 00 00 00: mov cx, word ptr [eax + 0xc0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4A 54: mov word ptr [edx + 0x54], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 88 C2 00 00 00: mov cx, word ptr [eax + 0xc2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4A 56: mov word ptr [edx + 0x56], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0c8h]
        mov dword ptr [edx + 5ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0cch]
        mov dword ptr [edx + 60h], ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 C7 82 08 01 00 00 00 00: mov word ptr [edx + 0x108], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 90 8A 00 00 00: mov word ptr [eax + 0x8a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 8A 00 00 00: mov cx, word ptr [eax + 0x8a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 5
        ; Exact mapped bytes 7E 0C: jle 0x41d6c8
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 C7 82 8A 00 00 00 05 00: mov word ptr [edx + 0x8a], 5
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, 0d0h
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 64h
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F9 B0 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xb0
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 7ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 80h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 90 88 00 00 00: mov word ptr [eax + 0x88], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 89 90 84 00 00 00: mov word ptr [eax + 0x84], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        ; Exact mapped bytes 66 89 90 86 00 00 00: mov word ptr [eax + 0x86], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x41d744
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 7D 44: jge 0x41d78e
        __asm _emit 0x7d
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, ecx, 18h
        mov edx, dword ptr [ebp + 8]
        lea eax, [edx + ecx + 38h]
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, ecx, 1ch
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx + 0b4h]
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 68 B0 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xb0
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, ecx, 1ch
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 0cch], 0
        ; Exact mapped bytes EB AD: jmp 0x41d73b
        __asm _emit 0xeb
        __asm _emit 0xad
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x41d7a0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 5
        ; Exact mapped bytes 7D 30: jge 0x41d7d6
        __asm _emit 0x7d
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [esi + eax*8 + 10h]
        mov dword ptr [edx + ecx*8 + 8ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov esi, dword ptr [ebp + 8]
        mov eax, dword ptr [esi + eax*8 + 14h]
        mov dword ptr [edx + ecx*8 + 90h], eax
        ; Exact mapped bytes EB C1: jmp 0x41d797
        __asm _emit 0xeb
        __asm _emit 0xc1
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 80h
        push edx
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 34 15 00 00: call 0x41ed20
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 4
        ; Exact mapped bytes E8 14 13 00 00: call 0x41eb10
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
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
        add esp, 34h
        cmp ebp, esp
        ; Exact mapped bytes E8 C9 AF 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xaf
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
