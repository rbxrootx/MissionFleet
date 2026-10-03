// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 5707 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878E2D0 .. +0x102D bytes.
extern "C" __declspec(naked) void FUN_5878e2d0_segment_00() {
    __asm {
        sub esp, 11ch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 118h], eax
        push edi
        mov edi, ecx
        ; Exact mapped bytes E8 04 C9 FF FF: call 0x5878abf0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 14 16 00 00: jne 0x5878f908
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 48 A2 58: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 0A: je 0x5878e308
        __asm _emit 0x74
        __asm _emit 0x0a
        push 58997740h
        ; Exact mapped bytes E8 88 CD FC FF: call 0x5875b090
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xcd
        __asm _emit 0xfc
        __asm _emit 0xff
        push ebx
        ; Exact mapped bytes 8B 1D 38 C4 98 58: mov ebx, dword ptr [0x5898c438]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x38
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        push ebp
        ; Exact mapped bytes 89 3D 80 45 A2 58: mov dword ptr [0x58a24580], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 58997730h
        mov dword ptr [edi + 28h], 0
        mov dword ptr [edi + 58h], 100h
        mov dword ptr [edi + 24ch], 20h
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 2D 34 C4 98 58: mov ebp, dword ptr [0x5898c434]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x34
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e346
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e350
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 252h]
        mov edx, eax
        push esi
        mov esi, 100h
        sub edx, ecx
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878e37b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [edx + ecx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878e37b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e360
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878e37f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878e380
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 58997720h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e395
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e39f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 352h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878e3cb
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878e3cb
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e3b0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878e3cf
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878e3d0
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 58997710h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e3e5
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e3ef
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 452h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878e41b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878e41b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e400
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878e41f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878e420
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 58997700h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e435
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e43f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 552h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878e46b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878e46b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e450
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878e46f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878e470
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 589976ech
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e485
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e48f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 652h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878e4bb
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878e4bb
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e4a0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878e4bf
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878e4c0
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 589976dch
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e4d5
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e4df
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 752h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878e50b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878e50b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e4f0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878e50f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878e510
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 589976c8h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e525
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e52f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 852h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878e55b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878e55b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e540
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878e55f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878e560
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 589976b8h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e575
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e57f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 952h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878e5ab
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878e5ab
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e590
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878e5af
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878e5b0
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 589976a8h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e5c5
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e5cf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 0a52h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878e5fb
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878e5fb
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e5e0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878e5ff
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878e600
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 58997698h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e615
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e61f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 0b52h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878e64b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878e64b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e630
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878e64f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878e650
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 58997688h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e665
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e66f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 0c52h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878e69b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878e69b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e680
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878e69f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878e6a0
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 58997674h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e6b5
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e6bf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 0d52h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878e6eb
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878e6eb
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e6d0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878e6ef
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878e6f0
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 58997664h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e705
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e70f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 0e52h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878e73b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878e73b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e720
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878e73f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878e740
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 58997650h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e755
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e75f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 0f52h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878e78b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878e78b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e770
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878e78f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878e790
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 58997640h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e7a5
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e7af
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 1052h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878e7db
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878e7db
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e7c0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878e7df
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878e7e0
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 58997630h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e7f5
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e7ff
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 1152h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878e82b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878e82b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e810
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878e82f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878e830
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 5899761ch
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e845
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e84f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 1252h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878e87b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878e87b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e860
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878e87f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878e880
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 5899760ch
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e895
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e89f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 1352h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878e8cb
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878e8cb
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e8b0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878e8cf
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878e8d0
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 589975f8h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e8e5
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e8ef
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 1452h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878e91b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878e91b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e900
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878e91f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878e920
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 589975e8h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e935
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e93f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 1552h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878e96b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878e96b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e950
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878e96f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878e970
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 589975d4h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e985
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e98f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 1652h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878e9bb
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [edx + ecx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878e9bb
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e9a0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878e9bf
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878e9c0
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 589975c0h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878e9d5
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878e9df
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 1752h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878ea0b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [edx + ecx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878ea0b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878e9f0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878ea0f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878ea10
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 589975ach
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878ea25
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878ea2f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 1852h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878ea5b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [edx + ecx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878ea5b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878ea40
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878ea5f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878ea60
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 58997598h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878ea75
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878ea7f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 1952h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878eaab
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [edx + ecx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878eaab
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878ea90
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878eaaf
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878eab0
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 58997584h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878eac5
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878eacf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 1a52h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878eafb
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [edx + ecx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878eafb
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878eae0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878eaff
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878eb00
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 58997570h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878eb15
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878eb1f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 1b52h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878eb4b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [edx + ecx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878eb4b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878eb30
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878eb4f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878eb50
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 5899755ch
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878eb65
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878eb6f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 1c52h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878eb9b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [edx + ecx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878eb9b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878eb80
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878eb9f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878eba0
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 58997548h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878ebb5
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878ebbf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 1d52h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878ebeb
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878ebeb
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878ebd0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878ebef
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878ebf0
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 58997534h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878ec05
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878ec0f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 1e52h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878ec3b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878ec3b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878ec20
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878ec3f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878ec40
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 58997520h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878ec55
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878ec5f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 1f52h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878ec8b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878ec8b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878ec70
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878ec8f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878ec90
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 58997510h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878eca5
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878ecaf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 2052h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878ecdb
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [edx + ecx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878ecdb
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878ecc0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878ecdf
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878ece0
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 589974fch
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5878ecf5
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5898c922h
        ; Exact mapped bytes EB 0A: jmp 0x5878ecff
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        lea ecx, [edi + 2152h]
        mov edx, eax
        mov esi, 100h
        sub edx, ecx
        mov edi, edi
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878ed2b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [edx + ecx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878ed2b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x5878ed10
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878ed2f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x5878ed30
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        ; Exact mapped bytes 8B 35 30 C0 98 58: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push 589974e8h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea ecx, [edi + 8754h]
        mov edx, eax
        add esp, 4
        mov ebx, 20h
        sub edx, ecx
        lea eax, [ebx + 7fffffdeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878ed6d
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [edx + ecx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878ed6d
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub ebx, 1
        ; Exact mapped bytes 75 E7: jne 0x5878ed52
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878ed71
        __asm _emit 0xeb
        __asm _emit 0x04
        test ebx, ebx
        ; Exact mapped bytes 75 01: jne 0x5878ed72
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 589974d4h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea ecx, [edi + 8774h]
        mov edx, eax
        add esp, 4
        mov ebx, 20h
        sub edx, ecx
        mov edi, edi
        lea eax, [ebx + 7fffffdeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878edab
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [edx + ecx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878edab
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub ebx, 1
        ; Exact mapped bytes 75 E7: jne 0x5878ed90
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878edaf
        __asm _emit 0xeb
        __asm _emit 0x04
        test ebx, ebx
        ; Exact mapped bytes 75 01: jne 0x5878edb0
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 589974c0h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea ecx, [edi + 8794h]
        mov edx, eax
        add esp, 4
        mov ebx, 20h
        sub edx, ecx
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        lea eax, [ebx + 7fffffdeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878edeb
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [edx + ecx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878edeb
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub ebx, 1
        ; Exact mapped bytes 75 E7: jne 0x5878edd0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878edef
        __asm _emit 0xeb
        __asm _emit 0x04
        test ebx, ebx
        ; Exact mapped bytes 75 01: jne 0x5878edf0
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 589974b0h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea ecx, [edi + 87b4h]
        mov edx, eax
        add esp, 4
        mov ebx, 20h
        sub edx, ecx
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        lea eax, [ebx + 7fffffdeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878ee2b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [edx + ecx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878ee2b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub ebx, 1
        ; Exact mapped bytes 75 E7: jne 0x5878ee10
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878ee2f
        __asm _emit 0xeb
        __asm _emit 0x04
        test ebx, ebx
        ; Exact mapped bytes 75 01: jne 0x5878ee30
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 5899749ch
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea ecx, [edi + 87d4h]
        mov edx, eax
        add esp, 4
        mov ebx, 20h
        sub edx, ecx
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        lea eax, [ebx + 7fffffdeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878ee6b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [edx + ecx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878ee6b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub ebx, 1
        ; Exact mapped bytes 75 E7: jne 0x5878ee50
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878ee6f
        __asm _emit 0xeb
        __asm _emit 0x04
        test ebx, ebx
        ; Exact mapped bytes 75 01: jne 0x5878ee70
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 58997488h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea ecx, [edi + 87f4h]
        mov edx, eax
        add esp, 4
        mov ebx, 20h
        sub edx, ecx
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        lea eax, [ebx + 7fffffdeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878eeab
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [edx + ecx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878eeab
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub ebx, 1
        ; Exact mapped bytes 75 E7: jne 0x5878ee90
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878eeaf
        __asm _emit 0xeb
        __asm _emit 0x04
        test ebx, ebx
        ; Exact mapped bytes 75 01: jne 0x5878eeb0
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 58997474h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea ecx, [edi + 8814h]
        mov edx, eax
        add esp, 4
        mov ebx, 20h
        sub edx, ecx
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        lea eax, [ebx + 7fffffdeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878eeeb
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [edx + ecx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878eeeb
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub ebx, 1
        ; Exact mapped bytes 75 E7: jne 0x5878eed0
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878eeef
        __asm _emit 0xeb
        __asm _emit 0x04
        test ebx, ebx
        ; Exact mapped bytes 75 01: jne 0x5878eef0
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 58997460h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea ecx, [edi + 8834h]
        mov edx, eax
        add esp, 4
        mov ebx, 20h
        sub edx, ecx
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        lea eax, [ebx + 7fffffdeh]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x5878ef2b
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [ecx + edx]
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5878ef2b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [ecx], al
        inc ecx
        sub ebx, 1
        ; Exact mapped bytes 75 E7: jne 0x5878ef10
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5878ef2f
        __asm _emit 0xeb
        __asm _emit 0x04
        test ebx, ebx
        ; Exact mapped bytes 75 01: jne 0x5878ef30
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push 58997448h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea ecx, [edi + 8854h]
        push ecx
        ; Exact mapped bytes E8 14 2C FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x2c
        __asm _emit 0xfa
        __asm _emit 0xff
        push 58997438h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea edx, [edi + 8874h]
        push edx
        ; Exact mapped bytes E8 FB 2B FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0xff
        push 58997424h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea eax, [edi + 8894h]
        push eax
        ; Exact mapped bytes E8 E2 2B FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0xff
        push 58997410h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea ecx, [edi + 88b4h]
        push ecx
        ; Exact mapped bytes E8 C9 2B FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0xff
        push 58997400h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea edx, [edi + 88d4h]
        push edx
        ; Exact mapped bytes E8 B0 2B FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0xff
        push 589973ech
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea eax, [edi + 88f4h]
        push eax
        ; Exact mapped bytes E8 97 2B FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0xff
        push 589973dch
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea ecx, [edi + 8914h]
        push ecx
        ; Exact mapped bytes E8 7E 2B FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0xff
        push 589973c8h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea edx, [edi + 8934h]
        push edx
        ; Exact mapped bytes E8 65 2B FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0xff
        push 589973b4h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea eax, [edi + 8954h]
        push eax
        ; Exact mapped bytes E8 4C 2B FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0xff
        push 589973a4h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea ecx, [edi + 8974h]
        push ecx
        ; Exact mapped bytes E8 33 2B FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0xff
        push 58997390h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea edx, [edi + 8994h]
        push edx
        ; Exact mapped bytes E8 1A 2B FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0xff
        push 58997378h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea eax, [edi + 89b4h]
        push eax
        ; Exact mapped bytes E8 01 2B FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0xff
        push 58997364h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea ecx, [edi + 89d4h]
        push ecx
        ; Exact mapped bytes E8 E8 2A FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xfa
        __asm _emit 0xff
        push 58997350h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea edx, [edi + 89f4h]
        push edx
        ; Exact mapped bytes E8 CF 2A FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x2a
        __asm _emit 0xfa
        __asm _emit 0xff
        push 5899733ch
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea eax, [edi + 8a14h]
        push eax
        ; Exact mapped bytes E8 B6 2A FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x2a
        __asm _emit 0xfa
        __asm _emit 0xff
        push 5899732ch
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea ecx, [edi + 8a34h]
        push ecx
        ; Exact mapped bytes E8 9D 2A FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x2a
        __asm _emit 0xfa
        __asm _emit 0xff
        push 58997314h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea edx, [edi + 8a54h]
        push edx
        ; Exact mapped bytes E8 84 2A FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0xfa
        __asm _emit 0xff
        push 589972f8h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea eax, [edi + 8a74h]
        push eax
        ; Exact mapped bytes E8 6B 2A FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x2a
        __asm _emit 0xfa
        __asm _emit 0xff
        push 589972e8h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea ecx, [edi + 8a94h]
        push ecx
        ; Exact mapped bytes E8 52 2A FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x2a
        __asm _emit 0xfa
        __asm _emit 0xff
        push 589972d0h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea edx, [edi + 8ab4h]
        push edx
        ; Exact mapped bytes E8 39 2A FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x2a
        __asm _emit 0xfa
        __asm _emit 0xff
        push 589972bch
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea eax, [edi + 8ad4h]
        push eax
        ; Exact mapped bytes E8 20 2A FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x2a
        __asm _emit 0xfa
        __asm _emit 0xff
        push 589972a4h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea ecx, [edi + 8af4h]
        push ecx
        ; Exact mapped bytes E8 07 2A FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x2a
        __asm _emit 0xfa
        __asm _emit 0xff
        push 58997290h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea edx, [edi + 8b14h]
        push edx
        ; Exact mapped bytes E8 EE 29 FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x29
        __asm _emit 0xfa
        __asm _emit 0xff
        push 58997280h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        add esp, 4
        push eax
        push 20h
        lea eax, [edi + 8b34h]
        push eax
        ; Exact mapped bytes E8 D5 29 FA FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x29
        __asm _emit 0xfa
        __asm _emit 0xff
        xor eax, eax
        cmp dword ptr [edi + 24ch], eax
        ; Exact mapped bytes 7E 42: jle 0x5878f1d7
        __asm _emit 0x7e
        __asm _emit 0x42
        lea esi, [edi + 8454h]
        lea ecx, [edi + 8352h]
        mov edx, 1f41h
        ; Exact mapped bytes 66 89 91 00 FF FF FF: mov word ptr [ecx - 0x100], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        cmp eax, 20h
        setl dl
        add esi, 4
        add ecx, 2
        ; Exact mapped bytes 66 89 51 FE: mov word ptr [ecx - 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0xfe
        lea edx, [eax + 4]
        mov dword ptr [esi - 4], edx
        xor edx, edx
        ; Exact mapped bytes 66 89 91 00 03 00 00: mov word ptr [ecx + 0x300], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        inc eax
        cmp eax, dword ptr [edi + 24ch]
        ; Exact mapped bytes 7C CA: jl 0x5878f1a1
        __asm _emit 0x7c
        __asm _emit 0xca
        xor ebp, ebp
        cmp dword ptr [edi + 24ch], ebp
        mov dword ptr [edi + 8468h], 9
        mov dword ptr [edi + 846ch], 0ah
        mov dword ptr [edi + 8470h], 0bh
        mov dword ptr [edi + 8474h], 0ch
        mov dword ptr [edi + 8478h], 0dh
        mov dword ptr [edi + 847ch], 0eh
        mov dword ptr [edi + 8480h], 12h
        mov dword ptr [edi + 8484h], 13h
        mov dword ptr [edi + 8488h], 14h
        mov dword ptr [edi + 848ch], 15h
        mov dword ptr [edi + 8490h], 16h
        mov dword ptr [edi + 8494h], 17h
        mov dword ptr [edi + 8498h], 18h
        mov dword ptr [edi + 849ch], 19h
        mov dword ptr [edi + 84a0h], 1ah
        mov dword ptr [edi + 84a4h], 1bh
        mov dword ptr [edi + 84a8h], 1ch
        mov dword ptr [edi + 84ach], 1dh
        mov dword ptr [edi + 84b0h], 1eh
        mov dword ptr [edi + 84b4h], 1fh
        mov dword ptr [edi + 84b8h], 20h
        mov dword ptr [edi + 84bch], 21h
        mov dword ptr [edi + 84c0h], 22h
        mov dword ptr [edi + 84c4h], 23h
        mov dword ptr [edi + 84c8h], 24h
        mov dword ptr [edi + 84cch], 25h
        mov dword ptr [edi + 84d0h], 26h
        ; Exact mapped bytes 7E 39: jle 0x5878f328
        __asm _emit 0x7e
        __asm _emit 0x39
        lea ebx, [edi + 11a58h]
        lea esi, [edi + 9a58h]
        ; Exact mapped bytes EB 03: jmp 0x5878f300
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878F300 .. +0x61E bytes.
extern "C" __declspec(naked) void FUN_5878e2d0_segment_01() {
    __asm {
        lea eax, [esi - 9806h]
        push eax
        push esi
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, 4db0h
        ; Exact mapped bytes 66 89 0B: mov word ptr [ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0b
        inc ebp
        add ebx, 2
        add esi, 100h
        cmp ebp, dword ptr [edi + 24ch]
        ; Exact mapped bytes 7C D8: jl 0x5878f300
        __asm _emit 0x7c
        __asm _emit 0xd8
        lea eax, [edi + 9754h]
        mov ecx, 10h
        mov byte ptr [eax], 0
        add eax, 20h
        sub ecx, 1
        ; Exact mapped bytes 75 F5: jne 0x5878f333
        __asm _emit 0x75
        __asm _emit 0xf5
        lea eax, [esp + 10h]
        push eax
        push 0f003fh
        xor edx, edx
        push edx
        push 58997258h
        push 80000002h
        ; Exact mapped bytes 66 89 97 50 02 00 00: mov word ptr [edi + 0x250], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x97
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 2ch], 80h
        mov dword ptr [esp + 38h], 1
        mov dword ptr [esp + 30h], 0a9h
        ; Exact mapped bytes FF 15 08 C0 98 58: call dword ptr [0x5898c008]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 2D 10 C0 98 58: mov ebp, dword ptr [0x5898c010]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x5878f3aa
        __asm _emit 0x74
        __asm _emit 0x26
        lea ecx, [esp + 14h]
        push ecx
        lea edx, [esp + 14h]
        push edx
        push 0
        push 0f003fh
        push 0
        push 5898c922h
        push 0
        push 58997258h
        push 80000002h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        cmp dword ptr [edi + 24ch], 0
        ; Exact mapped bytes 8B 35 0C C0 98 58: mov esi, dword ptr [0x5898c00c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x0c
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 1D A8 C1 98 58: mov ebx, dword ptr [0x5898c1a8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 75 16: jne 0x5878f3d5
        __asm _emit 0x75
        __asm _emit 0x16
        lea eax, [edi + 252h]
        push eax
        lea eax, [edi + 144h]
        push eax
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes EB 5F: jmp 0x5878f434
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov eax, dword ptr [esp + 10h]
        lea ecx, [esp + 18h]
        push ecx
        push 0
        lea edx, [esp + 1ch]
        push edx
        push 0
        push 58997250h
        push eax
        ; Exact mapped bytes FF 15 04 C0 98 58: call dword ptr [0x5898c004]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x5878f434
        __asm _emit 0x74
        __asm _emit 0x3d
        lea ecx, [esp + 14h]
        push ecx
        lea edx, [esp + 14h]
        push edx
        push 0
        push 0f003fh
        push 0
        push 58997250h
        push 0
        push 58997258h
        push 80000002h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        push 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        mov eax, dword ptr [esp + 14h]
        push 0
        push 1
        push 0
        push 58997250h
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        cmp dword ptr [edi + 24ch], 0
        ; Exact mapped bytes 75 16: jne 0x5878f453
        __asm _emit 0x75
        __asm _emit 0x16
        lea ecx, [edi + 9a58h]
        push ecx
        lea edx, [edi + 9954h]
        push edx
        ; Exact mapped bytes FF 15 98 C1 98 58: call dword ptr [0x5898c198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes EB 5F: jmp 0x5878f4b2
        __asm _emit 0xeb
        __asm _emit 0x5f
        mov edx, dword ptr [esp + 10h]
        lea eax, [esp + 18h]
        push eax
        push 0
        lea ecx, [esp + 1ch]
        push ecx
        push 0
        push 58997244h
        push edx
        ; Exact mapped bytes FF 15 04 C0 98 58: call dword ptr [0x5898c004]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x5878f4b2
        __asm _emit 0x74
        __asm _emit 0x3d
        lea eax, [esp + 14h]
        push eax
        lea ecx, [esp + 14h]
        push ecx
        push 0
        push 0f003fh
        push 0
        push 58997244h
        push 0
        push 58997258h
        push 80000002h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        push 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov edx, dword ptr [esp + 10h]
        push eax
        push 0
        push 1
        push 0
        push 58997244h
        push edx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edx, dword ptr [esp + 10h]
        lea eax, [esp + 18h]
        push eax
        lea ebx, [edi + 244h]
        push ebx
        lea ecx, [esp + 1ch]
        push ecx
        push 0
        push 5899723ch
        push edx
        ; Exact mapped bytes FF 15 04 C0 98 58: call dword ptr [0x5898c004]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x5878f4de
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes 66 39 03: cmp word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x03
        ; Exact mapped bytes 75 43: jne 0x5878f521
        __asm _emit 0x75
        __asm _emit 0x43
        ; Exact mapped bytes 66 8B 87 52 82 00 00: mov ax, word ptr [edi + 0x8252]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x52
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 14h]
        push ecx
        lea edx, [esp + 14h]
        push edx
        push 0
        push 0f003fh
        push 0
        push 5899723ch
        push 0
        push 58997258h
        push 80000002h
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esp + 10h]
        push 4
        push ebx
        push 4
        push 0
        push 5899723ch
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        cmp dword ptr [edi + 24ch], 0
        ; Exact mapped bytes 75 0F: jne 0x5878f539
        __asm _emit 0x75
        __asm _emit 0x0f
        movzx ecx, word ptr [edi + 11a58h]
        mov dword ptr [edi + 9a54h], ecx
        ; Exact mapped bytes EB 69: jmp 0x5878f5a2
        __asm _emit 0xeb
        __asm _emit 0x69
        mov ecx, dword ptr [esp + 10h]
        lea edx, [esp + 18h]
        push edx
        lea ebx, [edi + 9a54h]
        push ebx
        lea eax, [esp + 1ch]
        push eax
        push 0
        push 5899722ch
        push ecx
        ; Exact mapped bytes FF 15 04 C0 98 58: call dword ptr [0x5898c004]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x5878f5a2
        __asm _emit 0x74
        __asm _emit 0x42
        movzx edx, word ptr [edi + 11a58h]
        lea eax, [esp + 14h]
        push eax
        lea ecx, [esp + 14h]
        push ecx
        push 0
        push 0f003fh
        push 0
        push 5899722ch
        push 0
        push 58997258h
        push 80000002h
        mov dword ptr [ebx], edx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esp + 10h]
        push 4
        push ebx
        push 4
        push 0
        push 5899722ch
        push edx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 1D 04 C0 98 58: mov ebx, dword ptr [0x5898c004]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        lea eax, [esp + 18h]
        push eax
        mov eax, dword ptr [esp + 14h]
        lea ecx, [esp + 28h]
        push ecx
        lea edx, [esp + 1ch]
        push edx
        push 0
        push 58997228h
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x5878f606
        __asm _emit 0x74
        __asm _emit 0x3d
        lea ecx, [esp + 14h]
        push ecx
        lea edx, [esp + 14h]
        push edx
        push 0
        push 0f003fh
        push 0
        push 58997228h
        push 0
        push 58997258h
        push 80000002h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esp + 10h]
        push 4
        lea eax, [esp + 28h]
        push eax
        push 4
        push 0
        push 58997228h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea edx, [esp + 18h]
        push edx
        mov edx, dword ptr [esp + 14h]
        lea eax, [esp + 24h]
        push eax
        lea ecx, [esp + 1ch]
        push ecx
        push 0
        push 58997220h
        push edx
        mov dword ptr [esp + 38h], 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x5878f66c
        __asm _emit 0x74
        __asm _emit 0x3d
        lea eax, [esp + 14h]
        push eax
        lea ecx, [esp + 14h]
        push ecx
        push 0
        push 0f003fh
        push 0
        push 58997220h
        push 0
        push 58997258h
        push 80000002h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esp + 10h]
        push 4
        lea edx, [esp + 24h]
        push edx
        push 4
        push 0
        push 58997220h
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, 20090917h
        cmp dword ptr [esp + 20h], eax
        ; Exact mapped bytes 74 55: je 0x5878f6cc
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [esp + 10h]
        push 4
        lea ecx, [esp + 24h]
        push ecx
        push 4
        push 0
        push 58997220h
        push edx
        mov dword ptr [esp + 38h], eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 1D A8 C1 98 58: mov ebx, dword ptr [0x5898c1a8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        mov eax, dword ptr [esp + 14h]
        push 0
        push 1
        push 0
        push 58997250h
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        mov ecx, dword ptr [esp + 10h]
        push eax
        push 0
        push 1
        push 0
        push 58997244h
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 1D 04 C0 98 58: mov ebx, dword ptr [0x5898c004]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        lea edx, [esp + 18h]
        push edx
        mov edx, dword ptr [esp + 14h]
        lea eax, [esp + 20h]
        push eax
        lea ecx, [esp + 1ch]
        push ecx
        push 0
        push 58997218h
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        xor ebx, ebx
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x5878f728
        __asm _emit 0x74
        __asm _emit 0x39
        lea eax, [esp + 14h]
        push eax
        lea ecx, [esp + 14h]
        push ecx
        push ebx
        push 0f003fh
        push ebx
        push 58997218h
        push ebx
        push 58997258h
        push 80000002h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov eax, dword ptr [esp + 10h]
        push 4
        lea edx, [esp + 20h]
        push edx
        push 4
        push ebx
        push 58997218h
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 1ch]
        cmp eax, 0a9h
        ; Exact mapped bytes 74 5A: je 0x5878f78d
        __asm _emit 0x74
        __asm _emit 0x5a
        cmp eax, 1b1h
        ; Exact mapped bytes 74 53: je 0x5878f78d
        __asm _emit 0x74
        __asm _emit 0x53
        cmp eax, 281h
        ; Exact mapped bytes 74 4C: je 0x5878f78d
        __asm _emit 0x74
        __asm _emit 0x4c
        cmp eax, 379h
        ; Exact mapped bytes 74 45: je 0x5878f78d
        __asm _emit 0x74
        __asm _emit 0x45
        cmp eax, 411h
        ; Exact mapped bytes 74 3E: je 0x5878f78d
        __asm _emit 0x74
        __asm _emit 0x3e
        cmp eax, 551h
        ; Exact mapped bytes 74 37: je 0x5878f78d
        __asm _emit 0x74
        __asm _emit 0x37
        cmp eax, 609h
        ; Exact mapped bytes 74 30: je 0x5878f78d
        __asm _emit 0x74
        __asm _emit 0x30
        cmp eax, 719h
        ; Exact mapped bytes 74 29: je 0x5878f78d
        __asm _emit 0x74
        __asm _emit 0x29
        cmp eax, 829h
        ; Exact mapped bytes 74 22: je 0x5878f78d
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [esp + 10h]
        push 4
        lea ecx, [esp + 20h]
        push ecx
        push 4
        push ebx
        push 58997218h
        push edx
        mov dword ptr [esp + 34h], 0a9h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [esp + 1ch]
        push 0ffh
        ; Exact mapped bytes 66 89 87 9C 21 01 00: mov word ptr [edi + 0x1219c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x9c
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [esp + 2dh]
        push ebx
        push eax
        mov byte ptr [esp + 34h], 0
        ; Exact mapped bytes E8 9F D4 1E 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 30h]
        add esp, 0ch
        ; Exact mapped bytes 89 0D D8 8E 9C 58: mov dword ptr [0x589c8ed8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x58
        mov dword ptr [esp + 18h], 100h
        pop esi
        cmp dword ptr [edi + 12190h], ebx
        ; Exact mapped bytes 0F 84 2F 01 00 00: je 0x5878f8fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 57 24: mov dx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x24
        mov eax, 0e1ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 100h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 57 24: mov word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x24
        mov dword ptr [edi + 12138h], 8
        ; Exact mapped bytes 66 83 4F 24 01: or word ptr [edi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4f
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 12 1E 00: call 0x58970ae0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x12
        __asm _emit 0x1e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, ebx
        ; Exact mapped bytes 74 0F: je 0x5878f816
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 1D 88 45 A2 58: mov dword ptr [0x58a24588], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF 12 1E 00: call 0x58970ae0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x12
        __asm _emit 0x1e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, ebx
        ; Exact mapped bytes 74 0F: je 0x5878f83a
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 1D 8C 45 A2 58: mov dword ptr [0x58a2458c], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [edi + 12108h], ebx
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 35h
        ; Exact mapped bytes 7E 15: jle 0x5878f863
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 0D: je 0x5878f863
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0d40h
        ; Exact mapped bytes EB 02: jmp 0x5878f865
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 12114h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 28: je 0x5878f89a
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 1cah
        ; Exact mapped bytes 7E 16: jle 0x5878f8c1
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x5878f8c1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 728h]
        ; Exact mapped bytes EB 02: jmp 0x5878f8c3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edi + 12118h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 31: je 0x5878f901
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5878f901
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, edi
        ; Exact mapped bytes E8 8F D3 FF FF: call 0x5878cc90
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 4F 24 04: or word ptr [edi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4f
        __asm _emit 0x24
        __asm _emit 0x04
        pop ebp
        pop ebx
        mov ecx, dword ptr [esp + 11ch]
        pop edi
        xor ecx, esp
        ; Exact mapped bytes E8 C3 D2 1E 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xd2
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 11ch
        ret
    }
}
