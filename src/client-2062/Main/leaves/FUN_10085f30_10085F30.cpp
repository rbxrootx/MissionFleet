// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10085F30 .. +0x181 bytes.
extern "C" __declspec(naked) void FUN_10085f30_10085F30() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, eax
        and ecx, 1f00h
        cmp ecx, 500h
        ; Exact mapped bytes 0F 85 62 01 00 00: jne 0x100860ae
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0e1ffh
        ; Exact mapped bytes 8B 3D B0 50 17 10: mov edi, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        or eax, 105h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [esi + 6ch]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x10085f77
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, 101ace48h
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x10085f77
        __asm _emit 0x74
        __asm _emit 0x04
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 70h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x10085f8e
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 101ace48h
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x10085f8e
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 74h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x10085fa5
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, 101ace48h
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x10085fa5
        __asm _emit 0x74
        __asm _emit 0x04
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 78h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x10085fbc
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 101ace48h
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x10085fbc
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes A1 3C D1 1A 10: mov eax, dword ptr [0x101ad13c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 71: je 0x10086036
        __asm _emit 0x74
        __asm _emit 0x71
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push eax
        ; Exact mapped bytes E8 1D D0 F8 FF: call 0x10012ff0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xd0
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        push 0
        ; Exact mapped bytes 74 4B: je 0x10086024
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 15 3C D1 1A 10: mov edx, dword ptr [0x101ad13c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 35 C9 F8 FF: call 0x10012920
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xc9
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 6ch]
        mov ecx, dword ptr [ecx + 6ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10085ffd
        __asm _emit 0x74
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x10085ffd
        __asm _emit 0x74
        __asm _emit 0x04
        push eax
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes A1 3C D1 1A 10: mov eax, dword ptr [0x101ad13c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push eax
        ; Exact mapped bytes E8 A0 C8 F8 FF: call 0x100128b0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xc8
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 70h]
        mov ecx, dword ptr [ecx + 6ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1C: je 0x10086036
        __asm _emit 0x74
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x10086036
        __asm _emit 0x74
        __asm _emit 0x18
        push eax
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes EB 12: jmp 0x10086036
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 8B 0D 3C D1 1A 10: mov ecx, dword ptr [0x101ad13c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 4A 6C FC FF: call 0x1004cc80
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes A1 40 D1 1A 10: mov eax, dword ptr [0x101ad140]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 6F: je 0x100860ae
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 101ad13ch
        ; Exact mapped bytes E8 71 CF F8 FF: call 0x10012fc0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xcf
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x1008609a
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 101ad13ch
        ; Exact mapped bytes E8 7D C8 F8 FF: call 0x100128e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xc8
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 74h]
        mov ecx, dword ptr [ecx + 6ch]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10086075
        __asm _emit 0x74
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x10086075
        __asm _emit 0x74
        __asm _emit 0x04
        push eax
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 101ad13ch
        ; Exact mapped bytes E8 EB C7 F8 FF: call 0x10012870
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xc7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov esi, dword ptr [esi + 78h]
        mov ecx, dword ptr [esi + 6ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1F: je 0x100860ae
        __asm _emit 0x74
        __asm _emit 0x1f
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x100860ae
        __asm _emit 0x74
        __asm _emit 0x1b
        push eax
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        pop edi
        pop esi
        ret
        ; Exact mapped bytes 8B 15 40 D1 1A 10: mov edx, dword ptr [0x101ad140]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push 0
        ; Exact mapped bytes E8 D2 6B FC FF: call 0x1004cc80
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x6b
        __asm _emit 0xfc
        __asm _emit 0xff
        pop edi
        pop esi
        ret
    }
}
