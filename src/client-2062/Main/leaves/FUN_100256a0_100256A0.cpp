// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100256A0 .. +0x2A5 bytes.
extern "C" __declspec(naked) void FUN_100256a0_100256A0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0e14h]
        test eax, eax
        ; Exact mapped bytes 0F 84 8D 02 00 00: je 0x1002593e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 8]
        push 0ceh
        lea ecx, [esi + 14h]
        push eax
        lea edx, [esi + 154h]
        push ecx
        push edx
        push 0
        push 10181640h
        push 1017f490h
        mov ecx, esi
        ; Exact mapped bytes E8 58 FF FF FF: call 0x10025630
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 0d54h], eax
        ; Exact mapped bytes 74 0F: je 0x100256ef
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E9 3B 02 00 00: jmp 0x1002592a
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 1ch]
        push 368h
        lea ecx, [esi + 28h]
        push eax
        lea edx, [esi + 214h]
        push ecx
        push edx
        push 1
        push 10181618h
        push 1017f4a0h
        mov ecx, esi
        ; Exact mapped bytes E8 1A FF FF FF: call 0x10025630
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 0d58h], eax
        ; Exact mapped bytes 74 0F: je 0x1002572d
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0
        push 0
        push 0
        push 0
        push 1
        ; Exact mapped bytes E9 FD 01 00 00: jmp 0x1002592a
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 30h]
        push 0ach
        lea ecx, [esi + 3ch]
        push eax
        lea edx, [esi + 2d4h]
        push ecx
        push edx
        push 0
        push 101815f0h
        push 1017f484h
        mov ecx, esi
        ; Exact mapped bytes E8 DC FE FF FF: call 0x10025630
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 0d5ch], eax
        ; Exact mapped bytes 74 0F: je 0x1002576b
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0
        push 0
        push 0
        push 0
        push 2
        ; Exact mapped bytes E9 BF 01 00 00: jmp 0x1002592a
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 44h]
        push 0a4h
        lea ecx, [esi + 50h]
        push eax
        lea edx, [esi + 394h]
        push ecx
        push edx
        push 0
        push 101815c8h
        push 1017f478h
        mov ecx, esi
        ; Exact mapped bytes E8 9E FE FF FF: call 0x10025630
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 0d60h], eax
        ; Exact mapped bytes 74 0F: je 0x100257a9
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0
        push 0
        push 0
        push 0
        push 3
        ; Exact mapped bytes E9 81 01 00 00: jmp 0x1002592a
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 6ch]
        push 0b4h
        lea ecx, [esi + 78h]
        push eax
        lea edx, [esi + 454h]
        push ecx
        push edx
        push 0
        push 101815a0h
        push 1017f46ch
        mov ecx, esi
        ; Exact mapped bytes E8 60 FE FF FF: call 0x10025630
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 0d64h], eax
        ; Exact mapped bytes 74 0F: je 0x100257e7
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0
        push 0
        push 0
        push 0
        push 4
        ; Exact mapped bytes E9 43 01 00 00: jmp 0x1002592a
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 80h]
        push 0a8h
        lea ecx, [esi + 8ch]
        push eax
        lea edx, [esi + 514h]
        push ecx
        push edx
        push 0
        push 10181578h
        push 1017f45ch
        mov ecx, esi
        ; Exact mapped bytes E8 1C FE FF FF: call 0x10025630
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 0d68h], eax
        ; Exact mapped bytes 74 0F: je 0x1002582b
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0
        push 0
        push 0
        push 0
        push 5
        ; Exact mapped bytes E9 FF 00 00 00: jmp 0x1002592a
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 0e4h]
        push 0ach
        lea ecx, [esi + 0f0h]
        push eax
        lea edx, [esi + 5d4h]
        push ecx
        push edx
        push 0
        push 10181550h
        push 1017f44ch
        mov ecx, esi
        ; Exact mapped bytes E8 D8 FD FF FF: call 0x10025630
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 0d6ch], eax
        ; Exact mapped bytes 74 0F: je 0x1002586f
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0
        push 0
        push 0
        push 0
        push 6
        ; Exact mapped bytes E9 BB 00 00 00: jmp 0x1002592a
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 0f8h]
        push 0b4h
        lea ecx, [esi + 104h]
        push eax
        lea edx, [esi + 694h]
        push ecx
        push edx
        push 0
        push 10181528h
        push 1017f43ch
        mov ecx, esi
        ; Exact mapped bytes E8 94 FD FF FF: call 0x10025630
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 0d70h], eax
        ; Exact mapped bytes 74 0C: je 0x100258b0
        __asm _emit 0x74
        __asm _emit 0x0c
        push 0
        push 0
        push 0
        push 0
        push 7
        ; Exact mapped bytes EB 7A: jmp 0x1002592a
        __asm _emit 0xeb
        __asm _emit 0x7a
        lea eax, [esi + 10ch]
        push 0d4h
        lea ecx, [esi + 118h]
        push eax
        lea edx, [esi + 754h]
        push ecx
        push edx
        push 0
        push 10181500h
        push 1017f42ch
        mov ecx, esi
        ; Exact mapped bytes E8 53 FD FF FF: call 0x10025630
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 0d74h], eax
        ; Exact mapped bytes 74 0C: je 0x100258f1
        __asm _emit 0x74
        __asm _emit 0x0c
        push 0
        push 0
        push 0
        push 0
        push 8
        ; Exact mapped bytes EB 39: jmp 0x1002592a
        __asm _emit 0xeb
        __asm _emit 0x39
        lea eax, [esi + 58h]
        push 9ch
        lea ecx, [esi + 64h]
        push eax
        lea edx, [esi + 814h]
        push ecx
        push edx
        push 0
        push 101814d8h
        push 1017f420h
        mov ecx, esi
        ; Exact mapped bytes E8 18 FD FF FF: call 0x10025630
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 0d78h], eax
        ; Exact mapped bytes 74 1E: je 0x1002593e
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 0
        push 9
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 80025001h
        ; Exact mapped bytes E8 16 66 14 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x66
        __asm _emit 0x14
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ret
        mov eax, 1
        pop esi
        ret
    }
}
