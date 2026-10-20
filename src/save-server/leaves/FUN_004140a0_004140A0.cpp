// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004140A0 .. +0x376 bytes.
extern "C" __declspec(naked) void FUN_004140a0_004140A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b094h
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
        sub esp, 78h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 84h]
        mov ecx, 1eh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        push 0
        push -1
        push -1
        push -1
        push 0
        push 10060000h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 30 59 01 00: call 0x429a20
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0e4h
        ; Exact mapped bytes E8 53 13 11 00: call 0x525458
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x13
        __asm _emit 0x11
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0f4h
        ; Exact mapped bytes E8 F4 0B 11 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0b
        __asm _emit 0x11
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0fch
        ; Exact mapped bytes E8 E2 0B 11 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x0b
        __asm _emit 0x11
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 100h
        ; Exact mapped bytes E8 D0 0B 11 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x0b
        __asm _emit 0x11
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 104h
        ; Exact mapped bytes E8 BE 0B 11 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x0b
        __asm _emit 0x11
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 11ch
        ; Exact mapped bytes E8 AC 0B 11 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x0b
        __asm _emit 0x11
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 5
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 120h
        ; Exact mapped bytes E8 9A 0B 11 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x0b
        __asm _emit 0x11
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 6
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 124h
        ; Exact mapped bytes E8 88 0B 11 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x0b
        __asm _emit 0x11
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 7
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 128h
        ; Exact mapped bytes E8 DB D5 FE FF: call 0x40176c
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 8
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 13ch
        ; Exact mapped bytes E8 C9 D5 FE FF: call 0x40176c
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xd5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 9
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 633fd4h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0f0h], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0f8h], 0
        push 633fc8h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0f4h
        ; Exact mapped bytes E8 C0 89 0B 00: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x89
        __asm _emit 0x0b
        __asm _emit 0x00
        push 633fc0h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0fch
        ; Exact mapped bytes E8 AD 89 0B 00: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x89
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 168h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 16ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 108h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 10ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 110h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 114h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 118h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 160h], 0
        mov dword ptr [edx + 164h], 0
        ; Exact mapped bytes 0F BF 05 10 04 67 00: movsx eax, word ptr [0x670410]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x00
        add eax, 14h
        push eax
        push 670388h
        push 1ch
        ; Exact mapped bytes E8 5A 7E 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x7e
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 0ah
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 12: je 0x41429b
        __asm _emit 0x74
        __asm _emit 0x12
        push 400h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 01 D7 FE FF: call 0x401997
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x4142a2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 14h], ecx
        mov byte ptr [ebp - 4], 9
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 154h], eax
        ; Exact mapped bytes 0F BF 0D 10 04 67 00: movsx ecx, word ptr [0x670410]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x00
        add ecx, 15h
        push ecx
        push 670388h
        push 1ch
        ; Exact mapped bytes E8 04 7E 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x7e
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 0bh
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 12: je 0x4142f1
        __asm _emit 0x74
        __asm _emit 0x12
        push 400h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 AB D6 FE FF: call 0x401997
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4142f8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 1ch], edx
        mov byte ptr [ebp - 4], 9
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 158h], ecx
        ; Exact mapped bytes 0F BF 15 10 04 67 00: movsx edx, word ptr [0x670410]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x00
        add edx, 17h
        push edx
        push 670388h
        push 1ch
        ; Exact mapped bytes E8 AE 7D 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x7d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 0ch
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 12: je 0x414347
        __asm _emit 0x74
        __asm _emit 0x12
        push 400h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 53 CE FE FF: call 0x401195
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xce
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x41434e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 9
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 15ch], edx
        ; Exact mapped bytes 0F BF 05 10 04 67 00: movsx eax, word ptr [0x670410]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x00
        add eax, 18h
        push eax
        push 670388h
        push 24h
        ; Exact mapped bytes E8 58 7D 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x7d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 0dh
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 12: je 0x41439d
        __asm _emit 0x74
        __asm _emit 0x12
        push 0ffffh
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 55 D5 FE FF: call 0x4018ed
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xd5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x4143a4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 2ch], ecx
        mov byte ptr [ebp - 4], 9
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 150h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ech], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 170h], 1
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 DA E1 08 00: call 0x4a25b7
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xe1
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0e4h
        ; Exact mapped bytes E8 AC 10 11 00: call 0x525498
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x10
        __asm _emit 0x11
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
        pop edi
        pop esi
        pop ebx
        add esp, 84h
        cmp ebp, esp
        ; Exact mapped bytes E8 E0 09 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x09
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
