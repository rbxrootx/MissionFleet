// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004284A0 .. +0x2B1 bytes.
extern "C" __declspec(naked) void FUN_004284a0_004284A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5b8h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 5b8h]
        mov ecx, 16eh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 0ah
        mov dword ptr [ebp - 8], 0ah
        mov dword ptr [ebp - 14h], 0ah
        mov dword ptr [ebp - 10h], 0ah
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 AC 4B 0A 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x4b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, esp
        push eax
        push 63310ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 E5 C8 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [eax + 18h], 1312d00h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 1ch], 1312d00h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov byte ptr [ecx + 4ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov byte ptr [eax + 4dh], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 66 C7 42 4E 00 00: mov word ptr [edx + 0x4e], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 24h], 190h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [eax + 28h], 190h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 2ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [edx + 30h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 34h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 38h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [eax + 40h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 44h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 66 C7 41 50 00 00: mov word ptr [ecx + 0x50], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 2ch]
        push edx
        ; Exact mapped bytes E8 F8 9F 07 00: call 0x4a25b7
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x9f
        __asm _emit 0x07
        __asm _emit 0x00
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 4B CF 0F 00: call 0x525512
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xcf
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        push eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 25 CF 0F 00: call 0x5254f7
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xcf
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 FF CE 0F 00: call 0x5254da
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xce
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        push 6343b4h
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 14h
        cmp esi, esp
        ; Exact mapped bytes E8 FB C7 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xc7
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 D2 D9 03 00: call 0x465fd0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xd9
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ch]
        mov dword ptr [ecx + 48h], eax
        push 24h
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        add eax, 54h
        push eax
        ; Exact mapped bytes E8 A3 D2 03 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xd2
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 30h], 0ffffffffh
        push 78h
        push 0
        lea ecx, [ebp - 0a8h]
        push ecx
        ; Exact mapped bytes E8 89 D2 03 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xd2
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 4b1h
        push 0
        lea edx, [ebp - 55ch]
        push edx
        ; Exact mapped bytes E8 73 D2 03 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xd2
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 578h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 8A FD FF: call 0x401118
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x8a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 0ch]
        mov ecx, 1eh
        lea edi, [ebp - 0a8h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        push 78h
        lea edx, [ebp - 0a8h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 10 4A 0A 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x4a
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 ED 93 FD FF: call 0x401a87
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], -1
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x42873b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 63315ch
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 08 8F FD FF: call 0x4015cd
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        push 0
        push 63315ch
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 EA 8E FD FF: call 0x4015cd
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0xff
        push 4b1h
        lea edx, [ebp - 55ch]
        push edx
        push 63315ch
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 C4 8E FD FF: call 0x4015cd
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0xff
        push 1ch
        lea eax, [ebp - 578h]
        push eax
        push 63315ch
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 A1 8E FD FF: call 0x4015cd
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D 92 FD FF: call 0x401951
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x92
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x42873d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 5b8h
        cmp ebp, esp
        ; Exact mapped bytes E8 A3 C6 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xc6
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
