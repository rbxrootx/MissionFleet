// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046EE70 .. +0x26D bytes.
extern "C" __declspec(naked) void FUN_0046ee70_0046EE70() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 63ed20h
        push 46d504h
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
        add esp, -0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], esp
        mov eax, dword ptr [ebp + 10h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 17: je 0x46eeb6
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 0F BE 42 08: movsx eax, byte ptr [edx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x46eeb6
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 10h]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 75 05: jne 0x46eebb
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 1F 02 00 00: jmp 0x46f0da
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [ecx + eax + 0ch]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 58: je 0x46ef36
        __asm _emit 0x74
        __asm _emit 0x58
        push 1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 18h]
        push eax
        ; Exact mapped bytes E8 04 C6 00 00: call 0x47b4f0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x46ef2c
        __asm _emit 0x74
        __asm _emit 0x39
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 22 C6 00 00: call 0x47b520
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x46ef2c
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp + 14h]
        add edx, 8
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 5E 02 00 00: call 0x46f180
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx], eax
        ; Exact mapped bytes EB 05: jmp 0x46ef31
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 4F 06 00 00: call 0x46f580
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8D 01 00 00: jmp 0x46f0c3
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 78: je 0x46efba
        __asm _emit 0x74
        __asm _emit 0x78
        push 1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 18h]
        push eax
        ; Exact mapped bytes E8 A0 C5 00 00: call 0x47b4f0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 59: je 0x46efb0
        __asm _emit 0x74
        __asm _emit 0x59
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 BE C5 00 00: call 0x47b520
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x46efb0
        __asm _emit 0x74
        __asm _emit 0x47
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx + 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 E0 6C FF FF: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 14h]
        cmp dword ptr [ecx + 14h], 4
        ; Exact mapped bytes 75 22: jne 0x46efae
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 1A: je 0x46efae
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 14h]
        add eax, 8
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 DA 01 00 00: call 0x46f180
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 05: jmp 0x46efb5
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 CB 05 00 00: call 0x46f580
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 09 01 00 00: jmp 0x46f0c3
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        cmp dword ptr [edx + 18h], 0
        ; Exact mapped bytes 75 5D: jne 0x46f020
        __asm _emit 0x75
        __asm _emit 0x5d
        push 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        ; Exact mapped bytes E8 1F C5 00 00: call 0x47b4f0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x46f016
        __asm _emit 0x74
        __asm _emit 0x3e
        push 1
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 3D C5 00 00: call 0x47b520
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x46f016
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        add edx, 8
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        ; Exact mapped bytes E8 7C 01 00 00: call 0x46f180
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        push eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 4F 6C FF FF: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 05: jmp 0x46f01b
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 65 05 00 00: call 0x46f580
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x46f0c3
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        ; Exact mapped bytes E8 C2 C4 00 00: call 0x47b4f0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x46f0be
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 DC C4 00 00: call 0x47b520
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 73: je 0x46f0be
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        ; Exact mapped bytes E8 F9 C4 00 00: call 0x47b550
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 60: je 0x46f0be
        __asm _emit 0x74
        __asm _emit 0x60
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x46f095
        __asm _emit 0x74
        __asm _emit 0x2b
        push 1
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 8
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 18h]
        push eax
        ; Exact mapped bytes E8 01 01 00 00: call 0x46f180
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        push eax
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 FD 5D FF FF: call 0x464e90
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 27: jmp 0x46f0bc
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 8
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 18h]
        push eax
        ; Exact mapped bytes E8 D8 00 00 00: call 0x46f180
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        push eax
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx + 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 C4 5D FF FF: call 0x464e80
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x46f0c3
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 BD 04 00 00: call 0x46f580
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes EB 0E: jmp 0x46f0da
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, 1
        ret
        mov esp, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F6 03 00 00: call 0x46f4d0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
    }
}
