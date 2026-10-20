// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B2410 .. +0x288 bytes.
extern "C" __declspec(naked) void FUN_586b2410_586B2410() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 60h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b0bcch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a4h], 0
        ; Exact mapped bytes 74 25: je 0x586b2453
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 08 EC 17 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xec
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a4h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 74 3D: je 0x586b249c
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x586b2488
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b248f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 84h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586b24ae
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8D AF 00 00 00: jge 0x586b2567
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 88h], 0
        ; Exact mapped bytes 74 45: je 0x586b250d
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 88h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x586b24f5
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 34h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 CC: call dword ptr [ebp - 0x34]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xcc
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b24fc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 88h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 90h], 0
        ; Exact mapped bytes 74 45: je 0x586b2562
        __asm _emit 0x74
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 90h]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x586b254a
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 3ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 C4: call dword ptr [ebp - 0x3c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc4
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b2551
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 90h], 0
        ; Exact mapped bytes E9 3E FF FF FF: jmp 0x586b24a5
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 98h], 0
        ; Exact mapped bytes 74 3D: je 0x586b25b0
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x586b259c
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 44h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 BC: call dword ptr [ebp - 0x44]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xbc
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b25a3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 98h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 9ch], 0
        ; Exact mapped bytes 74 3D: je 0x586b25f9
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 17: je 0x586b25e5
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 B4: call dword ptr [ebp - 0x4c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb4
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b25ec
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 9ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0a0h], 0
        ; Exact mapped bytes 74 3D: je 0x586b2642
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 17: je 0x586b262e
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 54h], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 AC: call dword ptr [ebp - 0x54]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xac
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b2635
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a0h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 3D: je 0x586b268b
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 17: je 0x586b2677
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 5ch], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 A4: call dword ptr [ebp - 0x5c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa4
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 07: jmp 0x586b267e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ach], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2D 91 EB FF: call 0x5856b7c0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x91
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
