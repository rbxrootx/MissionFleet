// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FF340 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_587ff340() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 8B 46 34: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x34
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 86 3C 1F 02 00: mov dword ptr [esi + 0x21f3c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes F6 C1 02: test cl, 2
        __asm _emit 0xf6
        __asm _emit 0xc1
        __asm _emit 0x02
        ; Exact mapped bytes 74 7F: je 0x587ff3d5
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes 8B 46 3C: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 7C 24 0C: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 24: je 0x587ff385
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 8B 40 34: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x34
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 16: je 0x587ff37e
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 8B C8: mov ecx, eax
        __asm _emit 0x8b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 42 10: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x10
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 4E 3C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x3c
        ; Exact mapped bytes 3B 41 34: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3b
        __asm _emit 0x41
        __asm _emit 0x34
        ; Exact mapped bytes 74 0B: je 0x587ff385
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 EA: jne 0x587ff368
        __asm _emit 0x75
        __asm _emit 0xea
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 47 04: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x04
        ; Exact mapped bytes 3D 05 02 00 00: cmp eax, 0x205
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 77 32: ja 0x587ff3c1
        __asm _emit 0x77
        __asm _emit 0x32
        ; Exact mapped bytes 3D 04 02 00 00: cmp eax, 0x204
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 37: jae 0x587ff3cd
        __asm _emit 0x73
        __asm _emit 0x37
        ; Exact mapped bytes 3D 02 02 00 00: cmp eax, 0x202
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 77 38: ja 0x587ff3d5
        __asm _emit 0x77
        __asm _emit 0x38
        ; Exact mapped bytes 3D 00 02 00 00: cmp eax, 0x200
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 29: jae 0x587ff3cd
        __asm _emit 0x73
        __asm _emit 0x29
        ; Exact mapped bytes 05 00 FF FF FF: add eax, 0xffffff00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 77 27: ja 0x587ff3d5
        __asm _emit 0x77
        __asm _emit 0x27
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 9A FD FF FF: call 0x587ff150
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 3C 1F 02 00: mov eax, dword ptr [esi + 0x21f3c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 2D 07 02 00 00: sub eax, 0x207
        __asm _emit 0x2d
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 05: je 0x587ff3cd
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 83 E8 03: sub eax, 3
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x03
        ; Exact mapped bytes 75 08: jne 0x587ff3d5
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 3B E4 FF FF: call 0x587fd810
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 3C 1F 02 00: mov eax, dword ptr [esi + 0x21f3c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x3c
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
