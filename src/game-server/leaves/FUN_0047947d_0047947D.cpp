// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047947D .. +0x43A bytes.
extern "C" __declspec(naked) void FUN_0047947d_0047947D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c17eh
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
        sub esp, 68h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 74h]
        mov ecx, 1ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 54h], ecx
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 0F 85 56 02 00 00: jne 0x47970e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 54h]
        cmp dword ptr [eax + 14h], 0
        ; Exact mapped bytes 0F 84 92 01 00 00: je 0x479657
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 54h]
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 0F 84 85 01 00 00: je 0x479657
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 93 A4 F8 FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa4
        __asm _emit 0xf8
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 16 17 00 00: call 0x47ac00
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 0F 8E 46 01 00 00: jle 0x479638
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 54h]
        cmp dword ptr [ecx + 14h], 0
        ; Exact mapped bytes 74 40: je 0x47953b
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1A: je 0x47952a
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 BB F2 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf2
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x479531
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ecx + 14h], 0
        mov edx, dword ptr [ebp - 54h]
        cmp dword ptr [edx + 18h], 0
        ; Exact mapped bytes 74 40: je 0x479584
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1A: je 0x479573
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 72 F2 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf2
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x47957a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [eax + 18h], 0
        push 4eh
        push 5c4250h
        push 1ch
        ; Exact mapped bytes E8 A1 3A 07 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x3a
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 1B: je 0x4795c0
        __asm _emit 0x74
        __asm _emit 0x1b
        push 18h
        mov ecx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 BE A3 F8 FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 25 17 00 00: call 0x47ace0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x4795c7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + 14h], ecx
        push 4fh
        push 5c4250h
        push 1ch
        ; Exact mapped bytes E8 48 3A 07 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x3a
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 1B: je 0x479619
        __asm _emit 0x74
        __asm _emit 0x1b
        push 18h
        mov edx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 65 A3 F8 FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 BC 19 00 00: call 0x47afd0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x479620
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 18h], edx
        ; Exact mapped bytes EB 1A: jmp 0x479652
        __asm _emit 0xeb
        __asm _emit 0x1a
        push -1
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 6B 17 00 00: call 0x47adb0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        mov ecx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ecx + 18h]
        ; Exact mapped bytes E8 4E 1A 00 00: call 0x47b0a0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x479709
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 59h
        push 5c4250h
        push 1ch
        ; Exact mapped bytes E8 CE 39 07 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 1B: je 0x479693
        __asm _emit 0x74
        __asm _emit 0x1b
        push 18h
        mov edx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 EB A2 F8 FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xa2
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 52 16 00 00: call 0x47ace0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x47969a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov eax, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ecx + 14h], edx
        push 5ah
        push 5c4250h
        push 1ch
        ; Exact mapped bytes E8 75 39 07 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 1B: je 0x4796ec
        __asm _emit 0x74
        __asm _emit 0x1b
        push 18h
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 92 A2 F8 FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xa2
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 E9 18 00 00: call 0x47afd0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4796f3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 3ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [edx + 18h], eax
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x4797b0
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5fh
        push 5c4250h
        push 1ch
        ; Exact mapped bytes E8 17 39 07 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x39
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 48h], eax
        mov dword ptr [ebp - 4], 4
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 13: je 0x479742
        __asm _emit 0x74
        __asm _emit 0x13
        push 18h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 A3 15 00 00: call 0x47ace0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 07: jmp 0x479749
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 44h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [eax + 14h], ecx
        push 60h
        push 5c4250h
        push 1ch
        ; Exact mapped bytes E8 C6 38 07 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 50h], eax
        mov dword ptr [ebp - 4], 5
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 13: je 0x479793
        __asm _emit 0x74
        __asm _emit 0x13
        push 18h
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 42 18 00 00: call 0x47afd0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 07: jmp 0x47979a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 4ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ecx + 18h], edx
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [eax + 0c28h], 0
        mov ecx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 38 7B F8 FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x7b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 0B: jmp 0x4797d8
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0B 7B F8 FF: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x7b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x479887
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 83 A1 F8 FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 54h]
        cmp dword ptr [ecx + 0c28h], eax
        ; Exact mapped bytes 0F 8F 8B 00 00 00: jg 0x479887
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 0c28h]
        mov dword ptr [edx + 190h], ecx
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx + 0c28h]
        add eax, 1
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ecx + 0c28h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 190h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes E8 E8 13 00 00: call 0x47ac20
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 190h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ecx + 18h]
        ; Exact mapped bytes E8 33 14 00 00: call 0x47ac80
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        add edx, 150h
        mov esi, esp
        push edx
        push 5c42b0h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 190h]
        imul ecx, ecx, 18h
        mov edx, dword ptr [ebp - 54h]
        lea eax, [edx + ecx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 5E EF 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 46 FF FF FF: jmp 0x4797cd
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 DE A0 F8 FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xa0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [edx + 0c24h], eax
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
        add esp, 74h
        cmp ebp, esp
        ; Exact mapped bytes E8 2F EF 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
