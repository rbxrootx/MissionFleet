// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 4528 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58756F80 .. +0x11B0 bytes.
extern "C" __declspec(naked) void FUN_58756f80_segment_00() {
    __asm {
        push -1
        push 5897e9a2h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 5b4h
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 5c8h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 14h], esi
        mov eax, dword ptr [esp + 5ech]
        mov ecx, dword ptr [esp + 5e8h]
        mov edx, dword ptr [esp + 5e4h]
        push eax
        mov eax, dword ptr [esp + 5e4h]
        push ecx
        mov ecx, dword ptr [esp + 5e4h]
        push edx
        mov edx, dword ptr [esp + 5e4h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 B6 C1 1A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xc1
        __asm _emit 0x1a
        __asm _emit 0x00
        xor ebx, ebx
        or edx, 0ffffffffh
        mov eax, 2
        or ecx, 0ffffffffh
        ; Exact mapped bytes 66 89 54 24 72: mov word ptr [esp + 0x72], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x72
        or edx, edx
        mov dword ptr [esi], 5898d744h
        ; Exact mapped bytes 66 89 44 24 2A: mov word ptr [esp + 0x2a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2a
        mov byte ptr [esp + 4ch], al
        mov eax, 52h
        ; Exact mapped bytes 66 89 4C 24 4E: mov word ptr [esp + 0x4e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x4e
        mov ecx, 80h
        ; Exact mapped bytes 66 89 94 24 96 00 00 00: mov word ptr [esp + 0x96], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, 1
        mov esi, 330h
        or edx, 0ffffffffh
        mov dword ptr [esp + 5d0h], ebx
        mov dword ptr [esp + 24h], ebp
        mov byte ptr [esp + 28h], 1
        mov byte ptr [esp + 29h], bl
        mov dword ptr [esp + 2ch], ebx
        mov dword ptr [esp + 30h], ebx
        mov dword ptr [esp + 34h], ebx
        mov dword ptr [esp + 38h], ebx
        mov dword ptr [esp + 3ch], ebx
        mov dword ptr [esp + 40h], 38h
        mov dword ptr [esp + 44h], ebx
        mov dword ptr [esp + 48h], ebx
        mov byte ptr [esp + 4dh], 7
        mov dword ptr [esp + 50h], esi
        mov dword ptr [esp + 54h], 2beh
        mov dword ptr [esp + 58h], 540h
        mov dword ptr [esp + 5ch], 430h
        mov dword ptr [esp + 60h], ecx
        mov dword ptr [esp + 64h], eax
        mov dword ptr [esp + 68h], ebx
        mov dword ptr [esp + 6ch], ebx
        mov byte ptr [esp + 70h], 2
        mov byte ptr [esp + 71h], 7
        mov dword ptr [esp + 74h], 292h
        mov dword ptr [esp + 78h], 1f4h
        mov dword ptr [esp + 7ch], 510h
        mov dword ptr [esp + 80h], 46h
        mov dword ptr [esp + 84h], ecx
        mov dword ptr [esp + 88h], eax
        mov dword ptr [esp + 8ch], ebx
        mov dword ptr [esp + 90h], ebx
        mov byte ptr [esp + 94h], 2
        mov byte ptr [esp + 95h], 7
        mov dword ptr [esp + 98h], 132h
        mov dword ptr [esp + 9ch], 226h
        mov dword ptr [esp + 0a0h], 0fffffe9eh
        mov dword ptr [esp + 0a4h], 38eh
        mov dword ptr [esp + 0a8h], ecx
        mov dword ptr [esp + 0ach], eax
        mov dword ptr [esp + 0b0h], ebx
        mov dword ptr [esp + 0b4h], ebx
        mov byte ptr [esp + 0b8h], 2
        mov byte ptr [esp + 0b9h], 6
        ; Exact mapped bytes 66 89 94 24 BA 00 00 00: mov word ptr [esp + 0xba], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 0bch], 134h
        mov dword ptr [esp + 0c0h], 316h
        mov dword ptr [esp + 0c4h], 154h
        mov dword ptr [esp + 0c8h], 544h
        mov dword ptr [esp + 0cch], ecx
        mov dword ptr [esp + 0d0h], eax
        or edi, 0ffffffffh
        ; Exact mapped bytes 66 89 BC 24 02 01 00 00: mov word ptr [esp + 0x102], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        or edi, edi
        or edx, edx
        mov dword ptr [esp + 0f0h], ecx
        mov dword ptr [esp + 114h], ecx
        ; Exact mapped bytes 66 89 BC 24 26 01 00 00: mov word ptr [esp + 0x126], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 138h], ecx
        mov dword ptr [esp + 15ch], ecx
        or edi, 0ffffffffh
        mov ecx, ebp
        ; Exact mapped bytes 66 89 94 24 DE 00 00 00: mov word ptr [esp + 0xde], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 16ah
        ; Exact mapped bytes 66 89 BC 24 4A 01 00 00: mov word ptr [esp + 0x14a], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 8C 24 6E 01 00 00: mov word ptr [esp + 0x16e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 100h
        mov edi, ebp
        mov dword ptr [esp + 0d4h], ebx
        mov dword ptr [esp + 0d8h], ebx
        mov byte ptr [esp + 0dch], 2
        mov byte ptr [esp + 0ddh], 6
        mov dword ptr [esp + 0e0h], 2c0h
        mov dword ptr [esp + 0e4h], edx
        mov dword ptr [esp + 0e8h], 41ch
        mov dword ptr [esp + 0ech], 0ffffff68h
        mov dword ptr [esp + 0f4h], eax
        mov dword ptr [esp + 0f8h], ebx
        mov dword ptr [esp + 0fch], ebx
        mov byte ptr [esp + 100h], 2
        mov byte ptr [esp + 101h], 7
        mov dword ptr [esp + 104h], 2a0h
        mov dword ptr [esp + 108h], 276h
        mov dword ptr [esp + 10ch], 558h
        mov dword ptr [esp + 110h], 248h
        mov dword ptr [esp + 118h], eax
        mov dword ptr [esp + 11ch], ebx
        mov dword ptr [esp + 120h], ebx
        mov byte ptr [esp + 124h], 2
        mov byte ptr [esp + 125h], 6
        mov dword ptr [esp + 128h], edx
        mov dword ptr [esp + 12ch], 1a0h
        mov dword ptr [esp + 130h], 0fffffe3eh
        mov dword ptr [esp + 134h], 19eh
        mov dword ptr [esp + 13ch], eax
        mov dword ptr [esp + 140h], ebx
        mov dword ptr [esp + 144h], ebx
        mov byte ptr [esp + 148h], 2
        mov byte ptr [esp + 149h], 6
        mov dword ptr [esp + 14ch], 106h
        mov dword ptr [esp + 150h], 130h
        mov dword ptr [esp + 154h], 0ffffff7ch
        mov dword ptr [esp + 158h], 0ffffffech
        mov dword ptr [esp + 160h], eax
        mov dword ptr [esp + 164h], ebx
        mov dword ptr [esp + 168h], ebp
        mov byte ptr [esp + 16ch], 3
        mov byte ptr [esp + 16dh], 1
        mov dword ptr [esp + 170h], esi
        mov dword ptr [esp + 174h], 21ah
        mov dword ptr [esp + 178h], 540h
        mov dword ptr [esp + 17ch], 38ch
        mov dword ptr [esp + 180h], ecx
        mov dword ptr [esp + 184h], eax
        mov dword ptr [esp + 188h], ebx
        mov dword ptr [esp + 18ch], ebp
        mov byte ptr [esp + 190h], 3
        mov byte ptr [esp + 191h], 1
        ; Exact mapped bytes 66 89 BC 24 92 01 00 00: mov word ptr [esp + 0x192], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 194h], 292h
        mov dword ptr [esp + 198h], 150h
        mov dword ptr [esp + 19ch], 510h
        mov dword ptr [esp + 1a0h], 0ffffffa2h
        mov dword ptr [esp + 1a4h], ecx
        mov dword ptr [esp + 1a8h], eax
        mov dword ptr [esp + 1ach], ebx
        mov dword ptr [esp + 1b0h], ebp
        mov byte ptr [esp + 1b4h], 3
        mov byte ptr [esp + 1b5h], 1
        ; Exact mapped bytes 66 89 BC 24 B6 01 00 00: mov word ptr [esp + 0x1b6], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 1b8h], 132h
        mov dword ptr [esp + 1bch], 182h
        mov dword ptr [esp + 248h], edx
        mov edx, ebp
        ; Exact mapped bytes 66 89 94 24 6A 02 00 00: mov word ptr [esp + 0x26a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 2
        ; Exact mapped bytes 66 89 BC 24 DA 01 00 00: mov word ptr [esp + 0x1da], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 BC 24 FE 01 00 00: mov word ptr [esp + 0x1fe], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 BC 24 22 02 00 00: mov word ptr [esp + 0x222], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 BC 24 46 02 00 00: mov word ptr [esp + 0x246], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 94 24 8E 02 00 00: mov word ptr [esp + 0x28e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, 5
        or edi, 0ffffffffh
        mov dword ptr [esp + 1c0h], 0fffffe9eh
        mov dword ptr [esp + 1c4h], 2eah
        mov dword ptr [esp + 1c8h], ecx
        mov dword ptr [esp + 1cch], eax
        mov dword ptr [esp + 1d0h], ebx
        mov dword ptr [esp + 1d4h], ebp
        mov byte ptr [esp + 1d8h], 3
        mov byte ptr [esp + 1d9h], bl
        mov dword ptr [esp + 1dch], 134h
        mov dword ptr [esp + 1e0h], 272h
        mov dword ptr [esp + 1e4h], 154h
        mov dword ptr [esp + 1e8h], 4a0h
        mov dword ptr [esp + 1ech], ecx
        mov dword ptr [esp + 1f0h], eax
        mov dword ptr [esp + 1f4h], ebx
        mov dword ptr [esp + 1f8h], ebp
        mov byte ptr [esp + 1fch], 3
        mov byte ptr [esp + 1fdh], bl
        mov dword ptr [esp + 200h], 2c0h
        mov dword ptr [esp + 204h], 0c6h
        mov dword ptr [esp + 208h], 41ch
        mov dword ptr [esp + 20ch], 0fffffec4h
        mov dword ptr [esp + 210h], ecx
        mov dword ptr [esp + 214h], eax
        mov dword ptr [esp + 218h], ebx
        mov dword ptr [esp + 21ch], ebp
        mov byte ptr [esp + 220h], 3
        mov byte ptr [esp + 221h], 1
        mov dword ptr [esp + 224h], 2a0h
        mov dword ptr [esp + 228h], 1d2h
        mov dword ptr [esp + 22ch], 558h
        mov dword ptr [esp + 230h], 1a4h
        mov dword ptr [esp + 234h], ecx
        mov dword ptr [esp + 238h], eax
        mov dword ptr [esp + 23ch], ebx
        mov dword ptr [esp + 240h], ebp
        mov byte ptr [esp + 244h], 3
        mov byte ptr [esp + 245h], bl
        mov dword ptr [esp + 24ch], 0fch
        mov dword ptr [esp + 250h], 0fffffe3eh
        mov dword ptr [esp + 254h], 0fah
        mov dword ptr [esp + 258h], ecx
        mov dword ptr [esp + 25ch], eax
        mov dword ptr [esp + 260h], ebx
        mov dword ptr [esp + 264h], ebp
        mov byte ptr [esp + 268h], 3
        mov byte ptr [esp + 269h], bl
        mov dword ptr [esp + 26ch], 106h
        mov dword ptr [esp + 270h], 8ch
        mov dword ptr [esp + 274h], 0ffffff7ch
        mov dword ptr [esp + 278h], 0ffffff48h
        mov dword ptr [esp + 27ch], ecx
        mov dword ptr [esp + 280h], eax
        mov dword ptr [esp + 284h], ebx
        mov dword ptr [esp + 288h], ebx
        mov byte ptr [esp + 28ch], 4
        mov byte ptr [esp + 28dh], bl
        mov dword ptr [esp + 290h], ebx
        mov dword ptr [esp + 294h], ebx
        mov dword ptr [esp + 298h], ebx
        mov dword ptr [esp + 29ch], ebx
        mov dword ptr [esp + 2a0h], ebx
        mov dword ptr [esp + 2a4h], 3bh
        mov dword ptr [esp + 2a8h], ebx
        mov dword ptr [esp + 2ach], ebx
        mov byte ptr [esp + 2b0h], dl
        mov byte ptr [esp + 2b1h], 7
        ; Exact mapped bytes 66 89 BC 24 B2 02 00 00: mov word ptr [esp + 0x2b2], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 2b4h], esi
        mov dword ptr [esp + 2b8h], 2beh
        or edi, edi
        ; Exact mapped bytes 66 89 BC 24 D6 02 00 00: mov word ptr [esp + 0x2d6], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xd6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        or edi, 0ffffffffh
        ; Exact mapped bytes 66 89 BC 24 FA 02 00 00: mov word ptr [esp + 0x2fa], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xfa
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        or edi, edi
        ; Exact mapped bytes 66 89 BC 24 1E 03 00 00: mov word ptr [esp + 0x31e], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x1e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        or edi, 0ffffffffh
        mov esi, 40h
        ; Exact mapped bytes 66 89 BC 24 42 03 00 00: mov word ptr [esp + 0x342], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x42
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        or edi, edi
        ; Exact mapped bytes 66 89 BC 24 66 03 00 00: mov word ptr [esp + 0x366], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        or edi, 0ffffffffh
        mov dword ptr [esp + 2bch], 8c2h
        mov dword ptr [esp + 2c0h], 5b4h
        mov dword ptr [esp + 2c4h], esi
        mov dword ptr [esp + 2c8h], eax
        mov dword ptr [esp + 2cch], ebx
        mov dword ptr [esp + 2d0h], ebx
        mov byte ptr [esp + 2d4h], dl
        mov byte ptr [esp + 2d5h], 0bh
        mov dword ptr [esp + 2d8h], 2cch
        mov dword ptr [esp + 2dch], 266h
        mov dword ptr [esp + 2e0h], 7a8h
        mov dword ptr [esp + 2e4h], 13ch
        mov dword ptr [esp + 2e8h], esi
        mov dword ptr [esp + 2ech], eax
        mov dword ptr [esp + 2f0h], ebx
        mov dword ptr [esp + 2f4h], ebx
        mov byte ptr [esp + 2f8h], dl
        mov byte ptr [esp + 2f9h], 0bh
        mov dword ptr [esp + 2fch], 0c5h
        mov dword ptr [esp + 300h], 144h
        mov dword ptr [esp + 304h], 0fffffb92h
        mov dword ptr [esp + 308h], 0ffffff90h
        mov dword ptr [esp + 30ch], esi
        mov dword ptr [esp + 310h], eax
        mov dword ptr [esp + 314h], ebx
        mov dword ptr [esp + 318h], ebx
        mov byte ptr [esp + 31ch], dl
        mov byte ptr [esp + 31dh], 0ah
        mov dword ptr [esp + 320h], 1fah
        mov dword ptr [esp + 324h], 0feh
        mov dword ptr [esp + 328h], 0ech
        mov dword ptr [esp + 32ch], 0fffffcaeh
        mov dword ptr [esp + 330h], esi
        mov dword ptr [esp + 334h], eax
        mov dword ptr [esp + 338h], ebx
        mov dword ptr [esp + 33ch], ebx
        mov byte ptr [esp + 340h], dl
        mov byte ptr [esp + 341h], 8
        mov dword ptr [esp + 344h], 0e0h
        mov dword ptr [esp + 348h], 272h
        mov dword ptr [esp + 34ch], 0fffffc26h
        mov dword ptr [esp + 350h], 656h
        mov dword ptr [esp + 354h], esi
        mov dword ptr [esp + 358h], eax
        mov dword ptr [esp + 35ch], ebx
        mov dword ptr [esp + 360h], ebx
        mov byte ptr [esp + 364h], dl
        mov byte ptr [esp + 365h], 9
        mov dword ptr [esp + 368h], 21ah
        mov dword ptr [esp + 36ch], 2a0h
        mov dword ptr [esp + 370h], 34ah
        mov dword ptr [esp + 374h], 450h
        mov dword ptr [esp + 378h], esi
        mov dword ptr [esp + 37ch], eax
        mov dword ptr [esp + 380h], ebx
        mov dword ptr [esp + 384h], ebx
        mov byte ptr [esp + 388h], dl
        mov byte ptr [esp + 389h], 9
        ; Exact mapped bytes 66 89 BC 24 8A 03 00 00: mov word ptr [esp + 0x38a], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x8a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 38ch], 130h
        mov dword ptr [esp + 390h], 1c6h
        mov dword ptr [esp + 394h], 0fffffabeh
        mov dword ptr [esp + 398h], 282h
        mov dword ptr [esp + 39ch], esi
        mov dword ptr [esp + 3a0h], eax
        mov dword ptr [esp + 3a4h], ebx
        mov dword ptr [esp + 3a8h], ebx
        mov byte ptr [esp + 3ach], dl
        mov byte ptr [esp + 3adh], 8
        or edi, edi
        ; Exact mapped bytes 66 89 BC 24 AE 03 00 00: mov word ptr [esp + 0x3ae], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        or edi, 0ffffffffh
        mov dword ptr [esp + 3c0h], esi
        ; Exact mapped bytes 66 89 BC 24 D2 03 00 00: mov word ptr [esp + 0x3d2], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xd2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 3e4h], esi
        mov dword ptr [esp + 408h], esi
        or edi, edi
        mov esi, ebp
        ; Exact mapped bytes 66 89 BC 24 F6 03 00 00: mov word ptr [esp + 0x3f6], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xf6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ebp
        ; Exact mapped bytes 66 89 B4 24 1A 04 00 00: mov word ptr [esp + 0x41a], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xb4
        __asm _emit 0x24
        __asm _emit 0x1a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, 21ah
        mov dword ptr [esp + 3b0h], 2a4h
        mov dword ptr [esp + 3b4h], 190h
        mov dword ptr [esp + 3b8h], 778h
        mov dword ptr [esp + 3bch], 0fffffdb2h
        mov dword ptr [esp + 3c4h], eax
        mov dword ptr [esp + 3c8h], ebx
        mov dword ptr [esp + 3cch], ebx
        mov byte ptr [esp + 3d0h], dl
        mov byte ptr [esp + 3d1h], 0ah
        mov dword ptr [esp + 3d4h], 1b8h
        mov dword ptr [esp + 3d8h], 270h
        mov dword ptr [esp + 3dch], 0ffffff08h
        mov dword ptr [esp + 3e0h], 7e4h
        mov dword ptr [esp + 3e8h], eax
        mov dword ptr [esp + 3ech], ebx
        mov dword ptr [esp + 3f0h], ebx
        mov byte ptr [esp + 3f4h], dl
        mov byte ptr [esp + 3f5h], 0bh
        mov dword ptr [esp + 3f8h], 282h
        mov dword ptr [esp + 3fch], 248h
        mov dword ptr [esp + 400h], 74eh
        mov dword ptr [esp + 404h], 7a4h
        mov dword ptr [esp + 40ch], eax
        mov dword ptr [esp + 410h], ebx
        mov dword ptr [esp + 414h], ebx
        mov byte ptr [esp + 418h], 6
        mov byte ptr [esp + 419h], 1
        mov dword ptr [esp + 41ch], 330h
        mov dword ptr [esp + 420h], esi
        mov dword ptr [esp + 424h], 8c2h
        mov dword ptr [esp + 428h], 510h
        mov dword ptr [esp + 42ch], ecx
        mov dword ptr [esp + 430h], eax
        mov dword ptr [esp + 434h], ebx
        mov dword ptr [esp + 438h], ebx
        mov byte ptr [esp + 43ch], 6
        mov byte ptr [esp + 43dh], dl
        ; Exact mapped bytes 66 89 BC 24 3E 04 00 00: mov word ptr [esp + 0x43e], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x3e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 440h], 2cch
        mov dword ptr [esp + 444h], 1c2h
        mov dword ptr [esp + 448h], 7a8h
        mov dword ptr [esp + 44ch], 98h
        mov dword ptr [esp + 450h], ecx
        mov dword ptr [esp + 454h], eax
        mov dword ptr [esp + 458h], ebx
        mov dword ptr [esp + 45ch], ebx
        mov byte ptr [esp + 460h], 6
        mov byte ptr [esp + 461h], dl
        ; Exact mapped bytes 66 89 BC 24 62 04 00 00: mov word ptr [esp + 0x462], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 464h], 0c5h
        mov dword ptr [esp + 468h], 0a0h
        mov dword ptr [esp + 46ch], 0fffffb92h
        mov dword ptr [esp + 470h], 0fffffeech
        mov dword ptr [esp + 474h], ecx
        mov dword ptr [esp + 478h], eax
        mov dword ptr [esp + 47ch], ebx
        mov dword ptr [esp + 480h], ebx
        mov byte ptr [esp + 484h], 6
        mov byte ptr [esp + 485h], 4
        ; Exact mapped bytes 66 89 BC 24 86 04 00 00: mov word ptr [esp + 0x486], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 488h], 1fah
        mov dword ptr [esp + 48ch], 5ah
        mov dword ptr [esp + 490h], 0ech
        mov dword ptr [esp + 494h], 0fffffc0ah
        mov dword ptr [esp + 498h], ecx
        mov dword ptr [esp + 49ch], eax
        mov dword ptr [esp + 4a0h], ebx
        mov dword ptr [esp + 4a4h], ebx
        mov dword ptr [esp + 4c0h], eax
        mov dword ptr [esp + 4e4h], eax
        mov dword ptr [esp + 508h], eax
        mov eax, ebp
        ; Exact mapped bytes 66 89 84 24 16 05 00 00: mov word ptr [esp + 0x516], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x16
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 84 24 3A 05 00 00: mov word ptr [esp + 0x53a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x3a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 55h
        mov dword ptr [esp + 550h], eax
        mov dword ptr [esp + 574h], eax
        mov eax, ebp
        mov dword ptr [esp + 4d0h], esi
        mov byte ptr [esp + 55dh], dl
        ; Exact mapped bytes 66 89 84 24 82 05 00 00: mov word ptr [esp + 0x582], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ebp
        mov edx, ebp
        mov eax, 38h
        mov byte ptr [esp + 4a8h], 6
        mov byte ptr [esp + 4a9h], 2
        ; Exact mapped bytes 66 89 BC 24 AA 04 00 00: mov word ptr [esp + 0x4aa], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 4ach], 0e0h
        mov dword ptr [esp + 4b0h], 1ceh
        mov dword ptr [esp + 4b4h], 0fffffc26h
        mov dword ptr [esp + 4b8h], 5b2h
        mov dword ptr [esp + 4bch], ecx
        mov dword ptr [esp + 4c4h], ebx
        mov dword ptr [esp + 4c8h], ebx
        mov byte ptr [esp + 4cch], 6
        mov byte ptr [esp + 4cdh], 3
        ; Exact mapped bytes 66 89 BC 24 CE 04 00 00: mov word ptr [esp + 0x4ce], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0xce
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 4d4h], 1fch
        mov dword ptr [esp + 4d8h], 34ah
        mov dword ptr [esp + 4dch], 3ach
        mov dword ptr [esp + 4e0h], ecx
        mov dword ptr [esp + 4e8h], ebx
        mov dword ptr [esp + 4ech], ebx
        mov byte ptr [esp + 4f0h], 6
        mov byte ptr [esp + 4f1h], 3
        ; Exact mapped bytes 66 89 B4 24 F2 04 00 00: mov word ptr [esp + 0x4f2], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xb4
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 4f4h], 130h
        mov dword ptr [esp + 4f8h], 122h
        mov dword ptr [esp + 4fch], 0fffffabeh
        mov dword ptr [esp + 500h], 1deh
        mov dword ptr [esp + 504h], ecx
        mov dword ptr [esp + 50ch], ebx
        mov dword ptr [esp + 510h], ebp
        mov byte ptr [esp + 514h], 6
        mov byte ptr [esp + 515h], 4
        mov dword ptr [esp + 518h], 2a4h
        mov dword ptr [esp + 51ch], 0ech
        mov dword ptr [esp + 520h], 0ffffff9ch
        mov dword ptr [esp + 524h], 384h
        mov dword ptr [esp + 528h], ecx
        mov dword ptr [esp + 52ch], 45h
        mov dword ptr [esp + 530h], ebx
        mov dword ptr [esp + 534h], ebp
        mov byte ptr [esp + 538h], 6
        mov byte ptr [esp + 539h], 4
        mov dword ptr [esp + 53ch], 1b8h
        mov dword ptr [esp + 540h], 136h
        mov dword ptr [esp + 544h], 596h
        mov dword ptr [esp + 548h], 0f5h
        mov dword ptr [esp + 54ch], ecx
        mov dword ptr [esp + 554h], ebx
        mov dword ptr [esp + 558h], ebp
        mov byte ptr [esp + 55ch], 6
        ; Exact mapped bytes 66 89 94 24 5E 05 00 00: mov word ptr [esp + 0x55e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 560h], 2bah
        mov dword ptr [esp + 564h], 170h
        mov dword ptr [esp + 568h], 0fffffe3eh
        mov dword ptr [esp + 56ch], 151h
        mov dword ptr [esp + 570h], ecx
        mov dword ptr [esp + 578h], ebx
        mov dword ptr [esp + 57ch], ebp
        mov byte ptr [esp + 580h], 6
        mov byte ptr [esp + 581h], 3
        mov dword ptr [esp + 584h], 1f1h
        mov dword ptr [esp + 588h], 154h
        mov dword ptr [esp + 58ch], 29ch
        mov dword ptr [esp + 590h], 398h
        mov dword ptr [esp + 594h], ecx
        mov dword ptr [esp + 598h], eax
        mov edi, dword ptr [esp + 14h]
        push 5a0h
        add edi, 50h
        push ebx
        push edi
        mov dword ptr [esp + 5a8h], ebx
        mov dword ptr [esp + 5ach], ebp
        mov byte ptr [esp + 5b0h], 6
        mov byte ptr [esp + 5b1h], 4
        ; Exact mapped bytes 66 89 94 24 B2 05 00 00: mov word ptr [esp + 0x5b2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xb2
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 5b4h], 1afh
        mov dword ptr [esp + 5b8h], 168h
        mov dword ptr [esp + 5bch], 23dh
        mov dword ptr [esp + 5c0h], 0ffffffa7h
        mov dword ptr [esp + 5c4h], ecx
        mov dword ptr [esp + 5c8h], eax
        mov dword ptr [esp + 5cch], ebx
        ; Exact mapped bytes E8 5D 4D 22 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x4d
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, 168h
        lea esi, [esp + 30h]
        push 198h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes E8 4E 4D 22 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x4d
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [esp + 1ch], eax
        mov byte ptr [esp + 5d0h], 1
        cmp eax, ebx
        ; Exact mapped bytes 74 10: je 0x58757f23
        __asm _emit 0x74
        __asm _emit 0x10
        push ebp
        push ebx
        push 5898d75ch
        mov ecx, eax
        ; Exact mapped bytes E8 4F BE 19 00: call 0x588f3d70
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xbe
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58757f25
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edi, dword ptr [esp + 14h]
        mov byte ptr [esp + 5d0h], bl
        mov dword ptr [edi + 5f0h], eax
        mov dword ptr [edi + 5f4h], ebx
        mov dword ptr [esp + 20h], ebp
        lea esi, [edi + 5ch]
        mov dword ptr [esp + 1ch], 28h
        movzx eax, byte ptr [esi - 8]
        cmp eax, dword ptr [esp + 20h]
        ; Exact mapped bytes 0F 85 66 01 00 00: jne 0x587580bf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi - 6]
        ; Exact mapped bytes 66 3B C5: cmp ax, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc5
        ; Exact mapped bytes 74 7A: je 0x58757fdc
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes 66 83 F8 FF: cmp ax, -1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 74 74: je 0x58757fdc
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 3C 01 00 00: jne 0x587580ae
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 D5 4C 22 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x4c
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 18h], eax
        mov byte ptr [esp + 5d0h], 3
        cmp eax, ebx
        ; Exact mapped bytes 74 3F: je 0x58757fcb
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [edi + 5f0h]
        cmp dword ptr [edx + 164h], ebx
        ; Exact mapped bytes 7E 0E: jle 0x58757fa8
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov edx, dword ptr [edx + 18ch]
        cmp edx, ebx
        ; Exact mapped bytes 74 04: je 0x58757fa8
        __asm _emit 0x74
        __asm _emit 0x04
        mov edx, dword ptr [edx]
        ; Exact mapped bytes EB 02: jmp 0x58757faa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esi]
        push 40h
        push ecx
        mov ecx, dword ptr [esi - 4]
        push ecx
        push edx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 A4 9C FD FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x9c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [esp + 5d0h], bl
        mov dword ptr [esi + 14h], eax
        ; Exact mapped bytes E9 E3 00 00 00: jmp 0x587580ae
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov byte ptr [esp + 5d0h], bl
        mov dword ptr [esi + 14h], eax
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x587580ae
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 6B 4C 22 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x4c
        __asm _emit 0x22
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 5c4h], edi
        mov byte ptr [esp + 5d0h], 2
        cmp edi, ebx
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x58758082
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [esi - 7]
        ; Exact mapped bytes 8B 0D AC 46 A2 58: mov ecx, dword ptr [0x58a246ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 1B: jle 0x5875802c
        __asm _emit 0x7e
        __asm _emit 0x1b
        cmp eax, ebx
        ; Exact mapped bytes 7C 17: jl 0x5875802c
        __asm _emit 0x7c
        __asm _emit 0x17
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 0F: je 0x5875802c
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [edx + eax*4]
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes EB 04: jmp 0x58758030
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + 18h], ebx
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi - 4]
        push 40h
        push ebx
        push ebx
        push eax
        push ecx
        mov ecx, dword ptr [esp + 28h]
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 59 B1 1A 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xb1
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], eax
        cmp eax, ebx
        ; Exact mapped bytes 74 26: je 0x5875807e
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [edi + 0ch], edx
        mov ecx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], eax
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x58758084
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 0F BF 56 FA: movsx edx, word ptr [esi - 6]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x56
        __asm _emit 0xfa
        imul edx, edx, 101h
        push edx
        mov byte ptr [esp + 5d4h], bl
        mov dword ptr [esi + 14h], ecx
        ; Exact mapped bytes E8 82 AC 1A 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xac
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ch]
        mov ecx, dword ptr [esi + 14h]
        push eax
        ; Exact mapped bytes E8 36 AC 1A 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xac
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edi, dword ptr [esp + 14h]
        cmp dword ptr [esi - 0ch], ebx
        ; Exact mapped bytes 75 0C: jne 0x587580bf
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 14h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        add esi, 24h
        sub dword ptr [esp + 1ch], ebp
        ; Exact mapped bytes 0F 85 7F FE FF FF: jne 0x58757f4b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 20h]
        add eax, ebp
        cmp eax, 6
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 0F 8E 61 FE FF FF: jle 0x58757f40
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 57 24: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        mov eax, 0fffbh
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 57 24: mov dx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x24
        mov eax, 0e5ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 57 24: mov word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x24
        mov eax, edi
        mov ecx, dword ptr [esp + 5c8h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 5c0h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
