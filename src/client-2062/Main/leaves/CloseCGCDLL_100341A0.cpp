// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100341A0 .. +0x708 bytes.
extern "C" __declspec(naked) void CloseCGCDLL_100341A0() {
    __asm {
        ; Exact mapped bytes 8B 0D 98 56 1C 10: mov ecx, dword ptr [0x101c5698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push edi
        xor edi, edi
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100341ba
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D 98 56 1C 10: mov dword ptr [0x101c5698], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D A0 56 1C 10: mov ecx, dword ptr [0x101c56a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100341d0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D A0 56 1C 10: mov dword ptr [0x101c56a0], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 9C 56 1C 10: mov ecx, dword ptr [0x101c569c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100341e6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D 9C 56 1C 10: mov dword ptr [0x101c569c], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x9c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D A4 56 1C 10: mov ecx, dword ptr [0x101c56a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100341fc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D A4 56 1C 10: mov dword ptr [0x101c56a4], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D A8 56 1C 10: mov ecx, dword ptr [0x101c56a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034212
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D A8 56 1C 10: mov dword ptr [0x101c56a8], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D AC 56 1C 10: mov ecx, dword ptr [0x101c56ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034228
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D AC 56 1C 10: mov dword ptr [0x101c56ac], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xac
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D B0 56 1C 10: mov ecx, dword ptr [0x101c56b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1003423e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D B0 56 1C 10: mov dword ptr [0x101c56b0], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D B4 56 1C 10: mov ecx, dword ptr [0x101c56b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034254
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D B4 56 1C 10: mov dword ptr [0x101c56b4], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0D: je 0x1003426b
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 3D E8 56 1C 10: mov dword ptr [0x101c56e8], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 18 59 1C 10: mov ecx, dword ptr [0x101c5918]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 35 38 50 17 10: mov esi, dword ptr [0x10175038]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x38
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 15 14 59 1C 10: mov edx, dword ptr [0x101c5914]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes A1 10 59 1C 10: mov eax, dword ptr [0x101c5910]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 0D 0C 59 1C 10: mov ecx, dword ptr [0x101c590c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 0D E4 56 1C 10: mov ecx, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100342aa
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D E4 56 1C 10: mov dword ptr [0x101c56e4], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D EC 56 1C 10: mov ecx, dword ptr [0x101c56ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100342c0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D EC 56 1C 10: mov dword ptr [0x101c56ec], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D CC 58 1C 10: mov ecx, dword ptr [0x101c58cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100342d6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D CC 58 1C 10: mov dword ptr [0x101c58cc], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D D0 58 1C 10: mov ecx, dword ptr [0x101c58d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100342ec
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D D0 58 1C 10: mov dword ptr [0x101c58d0], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D D4 58 1C 10: mov ecx, dword ptr [0x101c58d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034302
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D D4 58 1C 10: mov dword ptr [0x101c58d4], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D C8 58 1C 10: mov ecx, dword ptr [0x101c58c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034318
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D C8 58 1C 10: mov dword ptr [0x101c58c8], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D D8 58 1C 10: mov ecx, dword ptr [0x101c58d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1003432e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D D8 58 1C 10: mov dword ptr [0x101c58d8], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xd8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 58 CE 1A 10: mov ecx, dword ptr [0x101ace58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034344
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D 58 CE 1A 10: mov dword ptr [0x101ace58], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 5C CE 1A 10: mov ecx, dword ptr [0x101ace5c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1003435a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D 5C CE 1A 10: mov dword ptr [0x101ace5c], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034370
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D F8 56 1C 10: mov dword ptr [0x101c56f8], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034386
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D FC 56 1C 10: mov dword ptr [0x101c56fc], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 10 57 1C 10: mov ecx, dword ptr [0x101c5710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1003439c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D 10 57 1C 10: mov dword ptr [0x101c5710], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100343b2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D F4 56 1C 10: mov dword ptr [0x101c56f4], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100343c8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D F0 56 1C 10: mov dword ptr [0x101c56f0], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 00 57 1C 10: mov ecx, dword ptr [0x101c5700]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100343de
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D 00 57 1C 10: mov dword ptr [0x101c5700], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100343f4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D 04 57 1C 10: mov dword ptr [0x101c5704], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1003440a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D 08 57 1C 10: mov dword ptr [0x101c5708], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 54 CE 1A 10: mov ecx, dword ptr [0x101ace54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034420
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D 54 CE 1A 10: mov dword ptr [0x101ace54], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 0C 57 1C 10: mov ecx, dword ptr [0x101c570c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034436
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D 0C 57 1C 10: mov dword ptr [0x101c570c], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1003444c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D 1C 57 1C 10: mov dword ptr [0x101c571c], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034462
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D 18 57 1C 10: mov dword ptr [0x101c5718], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034478
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D 14 57 1C 10: mov dword ptr [0x101c5714], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 30 57 1C 10: mov ecx, dword ptr [0x101c5730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1003448e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D 30 57 1C 10: mov dword ptr [0x101c5730], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D E0 58 1C 10: mov ecx, dword ptr [0x101c58e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100344a4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D E0 58 1C 10: mov dword ptr [0x101c58e0], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100344ba
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D E8 58 1C 10: mov dword ptr [0x101c58e8], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F0 58 1C 10: mov ecx, dword ptr [0x101c58f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100344d0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D F0 58 1C 10: mov dword ptr [0x101c58f0], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 44 57 1C 10: mov ecx, dword ptr [0x101c5744]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100344e6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D 44 57 1C 10: mov dword ptr [0x101c5744], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100344fc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D A4 57 1C 10: mov dword ptr [0x101c57a4], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D A8 57 1C 10: mov ecx, dword ptr [0x101c57a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034512
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D A8 57 1C 10: mov dword ptr [0x101c57a8], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 40 57 1C 10: mov ecx, dword ptr [0x101c5740]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034528
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D 40 57 1C 10: mov dword ptr [0x101c5740], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 48 57 1C 10: mov ecx, dword ptr [0x101c5748]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1003453e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D 48 57 1C 10: mov dword ptr [0x101c5748], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 98 57 1C 10: mov ecx, dword ptr [0x101c5798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034554
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D 98 57 1C 10: mov dword ptr [0x101c5798], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 9C 57 1C 10: mov ecx, dword ptr [0x101c579c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1003456a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D 9C 57 1C 10: mov dword ptr [0x101c579c], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034580
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D A0 57 1C 10: mov dword ptr [0x101c57a0], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034596
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D B8 57 1C 10: mov dword ptr [0x101c57b8], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D BC 57 1C 10: mov ecx, dword ptr [0x101c57bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100345ac
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D BC 57 1C 10: mov dword ptr [0x101c57bc], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 5C 57 1C 10: mov ecx, dword ptr [0x101c575c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100345c2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D 5C 57 1C 10: mov dword ptr [0x101c575c], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 60 57 1C 10: mov ecx, dword ptr [0x101c5760]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100345d8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D 60 57 1C 10: mov dword ptr [0x101c5760], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 64 57 1C 10: mov ecx, dword ptr [0x101c5764]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100345ee
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D 64 57 1C 10: mov dword ptr [0x101c5764], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 68 57 1C 10: mov ecx, dword ptr [0x101c5768]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034604
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D 68 57 1C 10: mov dword ptr [0x101c5768], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 84 57 1C 10: mov ecx, dword ptr [0x101c5784]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1003461a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D 84 57 1C 10: mov dword ptr [0x101c5784], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 88 57 1C 10: mov ecx, dword ptr [0x101c5788]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034630
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D 88 57 1C 10: mov dword ptr [0x101c5788], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 8C 57 1C 10: mov ecx, dword ptr [0x101c578c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034646
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D 8C 57 1C 10: mov dword ptr [0x101c578c], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 90 57 1C 10: mov ecx, dword ptr [0x101c5790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1003465c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D 90 57 1C 10: mov dword ptr [0x101c5790], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x90
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 94 57 1C 10: mov ecx, dword ptr [0x101c5794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034672
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D 94 57 1C 10: mov dword ptr [0x101c5794], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 7C 57 1C 10: mov ecx, dword ptr [0x101c577c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034688
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D 7C 57 1C 10: mov dword ptr [0x101c577c], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x7c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 80 57 1C 10: mov ecx, dword ptr [0x101c5780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1003469e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D 80 57 1C 10: mov dword ptr [0x101c5780], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 78 57 1C 10: mov ecx, dword ptr [0x101c5778]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100346b4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D 78 57 1C 10: mov dword ptr [0x101c5778], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D E8 57 1C 10: mov ecx, dword ptr [0x101c57e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100346ca
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D E8 57 1C 10: mov dword ptr [0x101c57e8], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D EC 57 1C 10: mov ecx, dword ptr [0x101c57ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100346e0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D EC 57 1C 10: mov dword ptr [0x101c57ec], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F4 57 1C 10: mov ecx, dword ptr [0x101c57f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100346f6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D F4 57 1C 10: mov dword ptr [0x101c57f4], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1003470c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D D4 57 1C 10: mov dword ptr [0x101c57d4], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D D8 57 1C 10: mov ecx, dword ptr [0x101c57d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034722
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D D8 57 1C 10: mov dword ptr [0x101c57d8], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xd8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D DC 57 1C 10: mov ecx, dword ptr [0x101c57dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034738
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D DC 57 1C 10: mov dword ptr [0x101c57dc], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D E0 57 1C 10: mov ecx, dword ptr [0x101c57e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1003474e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D E0 57 1C 10: mov dword ptr [0x101c57e0], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D CC 57 1C 10: mov ecx, dword ptr [0x101c57cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034764
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D CC 57 1C 10: mov dword ptr [0x101c57cc], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D D0 57 1C 10: mov ecx, dword ptr [0x101c57d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1003477a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D D0 57 1C 10: mov dword ptr [0x101c57d0], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D E4 57 1C 10: mov ecx, dword ptr [0x101c57e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034790
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D E4 57 1C 10: mov dword ptr [0x101c57e4], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 54 58 1C 10: mov ecx, dword ptr [0x101c5854]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100347a6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D 54 58 1C 10: mov dword ptr [0x101c5854], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 58 58 1C 10: mov ecx, dword ptr [0x101c5858]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100347bc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D 58 58 1C 10: mov dword ptr [0x101c5858], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 5C 58 1C 10: mov ecx, dword ptr [0x101c585c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100347d2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D 5C 58 1C 10: mov dword ptr [0x101c585c], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 60 58 1C 10: mov ecx, dword ptr [0x101c5860]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100347e8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D 60 58 1C 10: mov dword ptr [0x101c5860], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 64 58 1C 10: mov ecx, dword ptr [0x101c5864]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100347fe
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D 64 58 1C 10: mov dword ptr [0x101c5864], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 68 58 1C 10: mov ecx, dword ptr [0x101c5868]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034814
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D 68 58 1C 10: mov dword ptr [0x101c5868], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 6C 58 1C 10: mov ecx, dword ptr [0x101c586c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1003482a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D 6C 58 1C 10: mov dword ptr [0x101c586c], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 70 58 1C 10: mov ecx, dword ptr [0x101c5870]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034840
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D 70 58 1C 10: mov dword ptr [0x101c5870], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 04 58 1C 10: mov ecx, dword ptr [0x101c5804]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034856
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D 04 58 1C 10: mov dword ptr [0x101c5804], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 08 58 1C 10: mov ecx, dword ptr [0x101c5808]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1003486c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes 89 3D 08 58 1C 10: mov dword ptr [0x101c5808], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10034882
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        ; Exact mapped bytes 89 3D C4 58 1C 10: mov dword ptr [0x101c58c4], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, 101ace60h
        mov ecx, dword ptr [esi]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x10034895
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], edi
        add esi, 4
        cmp esi, 101ace80h
        ; Exact mapped bytes 7C E7: jl 0x10034887
        __asm _emit 0x7c
        __asm _emit 0xe7
        pop edi
        mov eax, 1
        pop esi
        ret
    }
}
