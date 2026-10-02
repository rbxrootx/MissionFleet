// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BF150 .. +0x14DB bytes.
extern "C" __declspec(naked) void FUN_584bf150() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e9d9h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 5fch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 5b4h], ecx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 5b4h]
        ; Exact mapped bytes E8 EB 57 2F 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x57
        __asm _emit 0x2f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 5b4h]
        mov dword ptr [eax], 58895a68h
        mov dword ptr [ebp - 5b0h], 1
        mov byte ptr [ebp - 5ach], 1
        mov byte ptr [ebp - 5abh], 0
        mov ecx, 2
        ; Exact mapped bytes 66 89 8D 56 FA FF FF: mov word ptr [ebp - 0x5aa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x56
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 5a8h], 0
        mov dword ptr [ebp - 5a4h], 0
        mov dword ptr [ebp - 5a0h], 0
        mov dword ptr [ebp - 59ch], 0
        mov dword ptr [ebp - 598h], 0
        mov dword ptr [ebp - 594h], 38h
        mov dword ptr [ebp - 590h], 0
        mov dword ptr [ebp - 58ch], 0
        mov byte ptr [ebp - 588h], 2
        mov byte ptr [ebp - 587h], 7
        or edx, 0ffffffffh
        ; Exact mapped bytes 66 89 95 7A FA FF FF: mov word ptr [ebp - 0x586], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x7a
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 584h], 330h
        mov dword ptr [ebp - 580h], 2beh
        mov dword ptr [ebp - 57ch], 540h
        mov dword ptr [ebp - 578h], 430h
        mov dword ptr [ebp - 574h], 80h
        mov dword ptr [ebp - 570h], 52h
        mov dword ptr [ebp - 56ch], 0
        mov dword ptr [ebp - 568h], 0
        mov byte ptr [ebp - 564h], 2
        mov byte ptr [ebp - 563h], 7
        or eax, 0ffffffffh
        ; Exact mapped bytes 66 89 85 9E FA FF FF: mov word ptr [ebp - 0x562], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 560h], 292h
        mov dword ptr [ebp - 55ch], 1f4h
        mov dword ptr [ebp - 558h], 510h
        mov dword ptr [ebp - 554h], 46h
        mov dword ptr [ebp - 550h], 80h
        mov dword ptr [ebp - 54ch], 52h
        mov dword ptr [ebp - 548h], 0
        mov dword ptr [ebp - 544h], 0
        mov byte ptr [ebp - 540h], 2
        mov byte ptr [ebp - 53fh], 7
        or ecx, 0ffffffffh
        ; Exact mapped bytes 66 89 8D C2 FA FF FF: mov word ptr [ebp - 0x53e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xc2
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 53ch], 132h
        mov dword ptr [ebp - 538h], 226h
        mov dword ptr [ebp - 534h], 0fffffe9eh
        mov dword ptr [ebp - 530h], 38eh
        mov dword ptr [ebp - 52ch], 80h
        mov dword ptr [ebp - 528h], 52h
        mov dword ptr [ebp - 524h], 0
        mov dword ptr [ebp - 520h], 0
        mov byte ptr [ebp - 51ch], 2
        mov byte ptr [ebp - 51bh], 6
        or edx, 0ffffffffh
        ; Exact mapped bytes 66 89 95 E6 FA FF FF: mov word ptr [ebp - 0x51a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xe6
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 518h], 134h
        mov dword ptr [ebp - 514h], 316h
        mov dword ptr [ebp - 510h], 154h
        mov dword ptr [ebp - 50ch], 544h
        mov dword ptr [ebp - 508h], 80h
        mov dword ptr [ebp - 504h], 52h
        mov dword ptr [ebp - 500h], 0
        mov dword ptr [ebp - 4fch], 0
        mov byte ptr [ebp - 4f8h], 2
        mov byte ptr [ebp - 4f7h], 6
        or eax, 0ffffffffh
        ; Exact mapped bytes 66 89 85 0A FB FF FF: mov word ptr [ebp - 0x4f6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4f4h], 2c0h
        mov dword ptr [ebp - 4f0h], 16ah
        mov dword ptr [ebp - 4ech], 41ch
        mov dword ptr [ebp - 4e8h], 0ffffff68h
        mov dword ptr [ebp - 4e4h], 80h
        mov dword ptr [ebp - 4e0h], 52h
        mov dword ptr [ebp - 4dch], 0
        mov dword ptr [ebp - 4d8h], 0
        mov byte ptr [ebp - 4d4h], 2
        mov byte ptr [ebp - 4d3h], 7
        or ecx, 0ffffffffh
        ; Exact mapped bytes 66 89 8D 2E FB FF FF: mov word ptr [ebp - 0x4d2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x2e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4d0h], 2a0h
        mov dword ptr [ebp - 4cch], 276h
        mov dword ptr [ebp - 4c8h], 558h
        mov dword ptr [ebp - 4c4h], 248h
        mov dword ptr [ebp - 4c0h], 80h
        mov dword ptr [ebp - 4bch], 52h
        mov dword ptr [ebp - 4b8h], 0
        mov dword ptr [ebp - 4b4h], 0
        mov byte ptr [ebp - 4b0h], 2
        mov byte ptr [ebp - 4afh], 6
        or edx, 0ffffffffh
        ; Exact mapped bytes 66 89 95 52 FB FF FF: mov word ptr [ebp - 0x4ae], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x52
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4ach], 16ah
        mov dword ptr [ebp - 4a8h], 1a0h
        mov dword ptr [ebp - 4a4h], 0fffffe3eh
        mov dword ptr [ebp - 4a0h], 19eh
        mov dword ptr [ebp - 49ch], 80h
        mov dword ptr [ebp - 498h], 52h
        mov dword ptr [ebp - 494h], 0
        mov dword ptr [ebp - 490h], 0
        mov byte ptr [ebp - 48ch], 2
        mov byte ptr [ebp - 48bh], 6
        or eax, 0ffffffffh
        ; Exact mapped bytes 66 89 85 76 FB FF FF: mov word ptr [ebp - 0x48a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 488h], 106h
        mov dword ptr [ebp - 484h], 130h
        mov dword ptr [ebp - 480h], 0ffffff7ch
        mov dword ptr [ebp - 47ch], 0ffffffech
        mov dword ptr [ebp - 478h], 80h
        mov dword ptr [ebp - 474h], 52h
        mov dword ptr [ebp - 470h], 0
        mov dword ptr [ebp - 46ch], 1
        mov byte ptr [ebp - 468h], 3
        mov byte ptr [ebp - 467h], 1
        mov ecx, 1
        ; Exact mapped bytes 66 89 8D 9A FB FF FF: mov word ptr [ebp - 0x466], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x9a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 464h], 330h
        mov dword ptr [ebp - 460h], 21ah
        mov dword ptr [ebp - 45ch], 540h
        mov dword ptr [ebp - 458h], 38ch
        mov dword ptr [ebp - 454h], 100h
        mov dword ptr [ebp - 450h], 52h
        mov dword ptr [ebp - 44ch], 0
        mov dword ptr [ebp - 448h], 1
        mov byte ptr [ebp - 444h], 3
        mov byte ptr [ebp - 443h], 1
        mov edx, 1
        ; Exact mapped bytes 66 89 95 BE FB FF FF: mov word ptr [ebp - 0x442], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xbe
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 440h], 292h
        mov dword ptr [ebp - 43ch], 150h
        mov dword ptr [ebp - 438h], 510h
        mov dword ptr [ebp - 434h], 0ffffffa2h
        mov dword ptr [ebp - 430h], 100h
        mov dword ptr [ebp - 42ch], 52h
        mov dword ptr [ebp - 428h], 0
        mov dword ptr [ebp - 424h], 1
        mov byte ptr [ebp - 420h], 3
        mov byte ptr [ebp - 41fh], 1
        mov eax, 1
        ; Exact mapped bytes 66 89 85 E2 FB FF FF: mov word ptr [ebp - 0x41e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 41ch], 132h
        mov dword ptr [ebp - 418h], 182h
        mov dword ptr [ebp - 414h], 0fffffe9eh
        mov dword ptr [ebp - 410h], 2eah
        mov dword ptr [ebp - 40ch], 100h
        mov dword ptr [ebp - 408h], 52h
        mov dword ptr [ebp - 404h], 0
        mov dword ptr [ebp - 400h], 1
        mov byte ptr [ebp - 3fch], 3
        mov byte ptr [ebp - 3fbh], 0
        mov ecx, 1
        ; Exact mapped bytes 66 89 8D 06 FC FF FF: mov word ptr [ebp - 0x3fa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x06
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3f8h], 134h
        mov dword ptr [ebp - 3f4h], 272h
        mov dword ptr [ebp - 3f0h], 154h
        mov dword ptr [ebp - 3ech], 4a0h
        mov dword ptr [ebp - 3e8h], 100h
        mov dword ptr [ebp - 3e4h], 52h
        mov dword ptr [ebp - 3e0h], 0
        mov dword ptr [ebp - 3dch], 1
        mov byte ptr [ebp - 3d8h], 3
        mov byte ptr [ebp - 3d7h], 0
        mov edx, 1
        ; Exact mapped bytes 66 89 95 2A FC FF FF: mov word ptr [ebp - 0x3d6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x2a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3d4h], 2c0h
        mov dword ptr [ebp - 3d0h], 0c6h
        mov dword ptr [ebp - 3cch], 41ch
        mov dword ptr [ebp - 3c8h], 0fffffec4h
        mov dword ptr [ebp - 3c4h], 100h
        mov dword ptr [ebp - 3c0h], 52h
        mov dword ptr [ebp - 3bch], 0
        mov dword ptr [ebp - 3b8h], 1
        mov byte ptr [ebp - 3b4h], 3
        mov byte ptr [ebp - 3b3h], 1
        mov eax, 1
        ; Exact mapped bytes 66 89 85 4E FC FF FF: mov word ptr [ebp - 0x3b2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3b0h], 2a0h
        mov dword ptr [ebp - 3ach], 1d2h
        mov dword ptr [ebp - 3a8h], 558h
        mov dword ptr [ebp - 3a4h], 1a4h
        mov dword ptr [ebp - 3a0h], 100h
        mov dword ptr [ebp - 39ch], 52h
        mov dword ptr [ebp - 398h], 0
        mov dword ptr [ebp - 394h], 1
        mov byte ptr [ebp - 390h], 3
        mov byte ptr [ebp - 38fh], 0
        mov ecx, 1
        ; Exact mapped bytes 66 89 8D 72 FC FF FF: mov word ptr [ebp - 0x38e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x72
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 38ch], 16ah
        mov dword ptr [ebp - 388h], 0fch
        mov dword ptr [ebp - 384h], 0fffffe3eh
        mov dword ptr [ebp - 380h], 0fah
        mov dword ptr [ebp - 37ch], 100h
        mov dword ptr [ebp - 378h], 52h
        mov dword ptr [ebp - 374h], 0
        mov dword ptr [ebp - 370h], 1
        mov byte ptr [ebp - 36ch], 3
        mov byte ptr [ebp - 36bh], 0
        mov edx, 1
        ; Exact mapped bytes 66 89 95 96 FC FF FF: mov word ptr [ebp - 0x36a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 368h], 106h
        mov dword ptr [ebp - 364h], 8ch
        mov dword ptr [ebp - 360h], 0ffffff7ch
        mov dword ptr [ebp - 35ch], 0ffffff48h
        mov dword ptr [ebp - 358h], 100h
        mov dword ptr [ebp - 354h], 52h
        mov dword ptr [ebp - 350h], 0
        mov dword ptr [ebp - 34ch], 0
        mov byte ptr [ebp - 348h], 4
        mov byte ptr [ebp - 347h], 0
        mov eax, 2
        ; Exact mapped bytes 66 89 85 BA FC FF FF: mov word ptr [ebp - 0x346], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 344h], 0
        mov dword ptr [ebp - 340h], 0
        mov dword ptr [ebp - 33ch], 0
        mov dword ptr [ebp - 338h], 0
        mov dword ptr [ebp - 334h], 0
        mov dword ptr [ebp - 330h], 3bh
        mov dword ptr [ebp - 32ch], 0
        mov dword ptr [ebp - 328h], 0
        mov byte ptr [ebp - 324h], 5
        mov byte ptr [ebp - 323h], 7
        or ecx, 0ffffffffh
        ; Exact mapped bytes 66 89 8D DE FC FF FF: mov word ptr [ebp - 0x322], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xde
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 320h], 330h
        mov dword ptr [ebp - 31ch], 2beh
        mov dword ptr [ebp - 318h], 8c2h
        mov dword ptr [ebp - 314h], 5b4h
        mov dword ptr [ebp - 310h], 40h
        mov dword ptr [ebp - 30ch], 52h
        mov dword ptr [ebp - 308h], 0
        mov dword ptr [ebp - 304h], 0
        mov byte ptr [ebp - 300h], 5
        mov byte ptr [ebp - 2ffh], 0bh
        or edx, 0ffffffffh
        ; Exact mapped bytes 66 89 95 02 FD FF FF: mov word ptr [ebp - 0x2fe], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2fch], 2cch
        mov dword ptr [ebp - 2f8h], 266h
        mov dword ptr [ebp - 2f4h], 7a8h
        mov dword ptr [ebp - 2f0h], 13ch
        mov dword ptr [ebp - 2ech], 40h
        mov dword ptr [ebp - 2e8h], 52h
        mov dword ptr [ebp - 2e4h], 0
        mov dword ptr [ebp - 2e0h], 0
        mov byte ptr [ebp - 2dch], 5
        mov byte ptr [ebp - 2dbh], 0bh
        or eax, 0ffffffffh
        ; Exact mapped bytes 66 89 85 26 FD FF FF: mov word ptr [ebp - 0x2da], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x26
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2d8h], 0c5h
        mov dword ptr [ebp - 2d4h], 144h
        mov dword ptr [ebp - 2d0h], 0fffffb92h
        mov dword ptr [ebp - 2cch], 0ffffff90h
        mov dword ptr [ebp - 2c8h], 40h
        mov dword ptr [ebp - 2c4h], 52h
        mov dword ptr [ebp - 2c0h], 0
        mov dword ptr [ebp - 2bch], 0
        mov byte ptr [ebp - 2b8h], 5
        mov byte ptr [ebp - 2b7h], 0ah
        or ecx, 0ffffffffh
        ; Exact mapped bytes 66 89 8D 4A FD FF FF: mov word ptr [ebp - 0x2b6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2b4h], 1fah
        mov dword ptr [ebp - 2b0h], 0feh
        mov dword ptr [ebp - 2ach], 0ech
        mov dword ptr [ebp - 2a8h], 0fffffcaeh
        mov dword ptr [ebp - 2a4h], 40h
        mov dword ptr [ebp - 2a0h], 52h
        mov dword ptr [ebp - 29ch], 0
        mov dword ptr [ebp - 298h], 0
        mov byte ptr [ebp - 294h], 5
        mov byte ptr [ebp - 293h], 8
        or edx, 0ffffffffh
        ; Exact mapped bytes 66 89 95 6E FD FF FF: mov word ptr [ebp - 0x292], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x6e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 290h], 0e0h
        mov dword ptr [ebp - 28ch], 272h
        mov dword ptr [ebp - 288h], 0fffffc26h
        mov dword ptr [ebp - 284h], 656h
        mov dword ptr [ebp - 280h], 40h
        mov dword ptr [ebp - 27ch], 52h
        mov dword ptr [ebp - 278h], 0
        mov dword ptr [ebp - 274h], 0
        mov byte ptr [ebp - 270h], 5
        mov byte ptr [ebp - 26fh], 9
        or eax, 0ffffffffh
        ; Exact mapped bytes 66 89 85 92 FD FF FF: mov word ptr [ebp - 0x26e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 26ch], 21ah
        mov dword ptr [ebp - 268h], 2a0h
        mov dword ptr [ebp - 264h], 34ah
        mov dword ptr [ebp - 260h], 450h
        mov dword ptr [ebp - 25ch], 40h
        mov dword ptr [ebp - 258h], 52h
        mov dword ptr [ebp - 254h], 0
        mov dword ptr [ebp - 250h], 0
        mov byte ptr [ebp - 24ch], 5
        mov byte ptr [ebp - 24bh], 9
        or ecx, 0ffffffffh
        ; Exact mapped bytes 66 89 8D B6 FD FF FF: mov word ptr [ebp - 0x24a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xb6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 248h], 130h
        mov dword ptr [ebp - 244h], 1c6h
        mov dword ptr [ebp - 240h], 0fffffabeh
        mov dword ptr [ebp - 23ch], 282h
        mov dword ptr [ebp - 238h], 40h
        mov dword ptr [ebp - 234h], 52h
        mov dword ptr [ebp - 230h], 0
        mov dword ptr [ebp - 22ch], 0
        mov byte ptr [ebp - 228h], 5
        mov byte ptr [ebp - 227h], 8
        or edx, 0ffffffffh
        ; Exact mapped bytes 66 89 95 DA FD FF FF: mov word ptr [ebp - 0x226], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xda
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 224h], 2a4h
        mov dword ptr [ebp - 220h], 190h
        mov dword ptr [ebp - 21ch], 778h
        mov dword ptr [ebp - 218h], 0fffffdb2h
        mov dword ptr [ebp - 214h], 40h
        mov dword ptr [ebp - 210h], 52h
        mov dword ptr [ebp - 20ch], 0
        mov dword ptr [ebp - 208h], 0
        mov byte ptr [ebp - 204h], 5
        mov byte ptr [ebp - 203h], 0ah
        or eax, 0ffffffffh
        ; Exact mapped bytes 66 89 85 FE FD FF FF: mov word ptr [ebp - 0x202], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 200h], 1b8h
        mov dword ptr [ebp - 1fch], 270h
        mov dword ptr [ebp - 1f8h], 0ffffff08h
        mov dword ptr [ebp - 1f4h], 7e4h
        mov dword ptr [ebp - 1f0h], 40h
        mov dword ptr [ebp - 1ech], 52h
        mov dword ptr [ebp - 1e8h], 0
        mov dword ptr [ebp - 1e4h], 0
        mov byte ptr [ebp - 1e0h], 5
        mov byte ptr [ebp - 1dfh], 0bh
        or ecx, 0ffffffffh
        ; Exact mapped bytes 66 89 8D 22 FE FF FF: mov word ptr [ebp - 0x1de], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1dch], 282h
        mov dword ptr [ebp - 1d8h], 248h
        mov dword ptr [ebp - 1d4h], 74eh
        mov dword ptr [ebp - 1d0h], 7a4h
        mov dword ptr [ebp - 1cch], 40h
        mov dword ptr [ebp - 1c8h], 52h
        mov dword ptr [ebp - 1c4h], 0
        mov dword ptr [ebp - 1c0h], 0
        mov byte ptr [ebp - 1bch], 6
        mov byte ptr [ebp - 1bbh], 1
        mov edx, 1
        ; Exact mapped bytes 66 89 95 46 FE FF FF: mov word ptr [ebp - 0x1ba], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x46
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1b8h], 330h
        mov dword ptr [ebp - 1b4h], 21ah
        mov dword ptr [ebp - 1b0h], 8c2h
        mov dword ptr [ebp - 1ach], 510h
        mov dword ptr [ebp - 1a8h], 100h
        mov dword ptr [ebp - 1a4h], 52h
        mov dword ptr [ebp - 1a0h], 0
        mov dword ptr [ebp - 19ch], 0
        mov byte ptr [ebp - 198h], 6
        mov byte ptr [ebp - 197h], 5
        mov eax, 1
        ; Exact mapped bytes 66 89 85 6A FE FF FF: mov word ptr [ebp - 0x196], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], 2cch
        mov dword ptr [ebp - 190h], 1c2h
        mov dword ptr [ebp - 18ch], 7a8h
        mov dword ptr [ebp - 188h], 98h
        mov dword ptr [ebp - 184h], 100h
        mov dword ptr [ebp - 180h], 52h
        mov dword ptr [ebp - 17ch], 0
        mov dword ptr [ebp - 178h], 0
        mov byte ptr [ebp - 174h], 6
        mov byte ptr [ebp - 173h], 5
        mov ecx, 1
        ; Exact mapped bytes 66 89 8D 8E FE FF FF: mov word ptr [ebp - 0x172], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], 0c5h
        mov dword ptr [ebp - 16ch], 0a0h
        mov dword ptr [ebp - 168h], 0fffffb92h
        mov dword ptr [ebp - 164h], 0fffffeech
        mov dword ptr [ebp - 160h], 100h
        mov dword ptr [ebp - 15ch], 52h
        mov dword ptr [ebp - 158h], 0
        mov dword ptr [ebp - 154h], 0
        mov byte ptr [ebp - 150h], 6
        mov byte ptr [ebp - 14fh], 4
        mov edx, 1
        ; Exact mapped bytes 66 89 95 B2 FE FF FF: mov word ptr [ebp - 0x14e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], 1fah
        mov dword ptr [ebp - 148h], 5ah
        mov dword ptr [ebp - 144h], 0ech
        mov dword ptr [ebp - 140h], 0fffffc0ah
        mov dword ptr [ebp - 13ch], 100h
        mov dword ptr [ebp - 138h], 52h
        mov dword ptr [ebp - 134h], 0
        mov dword ptr [ebp - 130h], 0
        mov byte ptr [ebp - 12ch], 6
        mov byte ptr [ebp - 12bh], 2
        mov eax, 1
        ; Exact mapped bytes 66 89 85 D6 FE FF FF: mov word ptr [ebp - 0x12a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], 0e0h
        mov dword ptr [ebp - 124h], 1ceh
        mov dword ptr [ebp - 120h], 0fffffc26h
        mov dword ptr [ebp - 11ch], 5b2h
        mov dword ptr [ebp - 118h], 100h
        mov dword ptr [ebp - 114h], 52h
        mov dword ptr [ebp - 110h], 0
        mov dword ptr [ebp - 10ch], 0
        mov byte ptr [ebp - 108h], 6
        mov byte ptr [ebp - 107h], 3
        mov ecx, 1
        ; Exact mapped bytes 66 89 8D FA FE FF FF: mov word ptr [ebp - 0x106], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xfa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], 21ah
        mov dword ptr [ebp - 100h], 1fch
        mov dword ptr [ebp - 0fch], 34ah
        mov dword ptr [ebp - 0f8h], 3ach
        mov dword ptr [ebp - 0f4h], 100h
        mov dword ptr [ebp - 0f0h], 52h
        mov dword ptr [ebp - 0ech], 0
        mov dword ptr [ebp - 0e8h], 0
        mov byte ptr [ebp - 0e4h], 6
        mov byte ptr [ebp - 0e3h], 3
        mov edx, 1
        ; Exact mapped bytes 66 89 95 1E FF FF FF: mov word ptr [ebp - 0xe2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x1e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], 130h
        mov dword ptr [ebp - 0dch], 122h
        mov dword ptr [ebp - 0d8h], 0fffffabeh
        mov dword ptr [ebp - 0d4h], 1deh
        mov dword ptr [ebp - 0d0h], 100h
        mov dword ptr [ebp - 0cch], 52h
        mov dword ptr [ebp - 0c8h], 0
        mov dword ptr [ebp - 0c4h], 1
        mov byte ptr [ebp - 0c0h], 6
        mov byte ptr [ebp - 0bfh], 4
        mov eax, 1
        ; Exact mapped bytes 66 89 85 42 FF FF FF: mov word ptr [ebp - 0xbe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], 2a4h
        mov dword ptr [ebp - 0b8h], 0ech
        mov dword ptr [ebp - 0b4h], 0ffffff9ch
        mov dword ptr [ebp - 0b0h], 384h
        mov dword ptr [ebp - 0ach], 100h
        mov dword ptr [ebp - 0a8h], 45h
        mov dword ptr [ebp - 0a4h], 0
        mov dword ptr [ebp - 0a0h], 1
        mov byte ptr [ebp - 9ch], 6
        mov byte ptr [ebp - 9bh], 4
        mov ecx, 1
        ; Exact mapped bytes 66 89 8D 66 FF FF FF: mov word ptr [ebp - 0x9a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 98h], 1b8h
        mov dword ptr [ebp - 94h], 136h
        mov dword ptr [ebp - 90h], 596h
        mov dword ptr [ebp - 8ch], 0f5h
        mov dword ptr [ebp - 88h], 100h
        mov dword ptr [ebp - 84h], 55h
        mov dword ptr [ebp - 80h], 0
        mov dword ptr [ebp - 7ch], 1
        mov byte ptr [ebp - 78h], 6
        mov byte ptr [ebp - 77h], 5
        mov edx, 1
        ; Exact mapped bytes 66 89 55 8A: mov word ptr [ebp - 0x76], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x8a
        mov dword ptr [ebp - 74h], 2bah
        mov dword ptr [ebp - 70h], 170h
        mov dword ptr [ebp - 6ch], 0fffffe3eh
        mov dword ptr [ebp - 68h], 151h
        mov dword ptr [ebp - 64h], 100h
        mov dword ptr [ebp - 60h], 55h
        mov dword ptr [ebp - 5ch], 0
        mov dword ptr [ebp - 58h], 1
        mov byte ptr [ebp - 54h], 6
        mov byte ptr [ebp - 53h], 3
        mov eax, 1
        ; Exact mapped bytes 66 89 45 AE: mov word ptr [ebp - 0x52], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xae
        mov dword ptr [ebp - 50h], 1f1h
        mov dword ptr [ebp - 4ch], 154h
        mov dword ptr [ebp - 48h], 29ch
        mov dword ptr [ebp - 44h], 398h
        mov dword ptr [ebp - 40h], 100h
        mov dword ptr [ebp - 3ch], 38h
        mov dword ptr [ebp - 38h], 0
        mov dword ptr [ebp - 34h], 1
        mov byte ptr [ebp - 30h], 6
        mov byte ptr [ebp - 2fh], 4
        mov ecx, 1
        ; Exact mapped bytes 66 89 4D D2: mov word ptr [ebp - 0x2e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xd2
        mov dword ptr [ebp - 2ch], 1afh
        mov dword ptr [ebp - 28h], 168h
        mov dword ptr [ebp - 24h], 23dh
        mov dword ptr [ebp - 20h], 0ffffffa7h
        mov dword ptr [ebp - 1ch], 100h
        mov dword ptr [ebp - 18h], 38h
        mov dword ptr [ebp - 14h], 0
        push 5a0h
        push 0
        mov edx, dword ptr [ebp - 5b4h]
        add edx, 50h
        push edx
        ; Exact mapped bytes E8 3C CC 38 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xcc
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        push 5a0h
        lea eax, [ebp - 5b0h]
        push eax
        mov ecx, dword ptr [ebp - 5b4h]
        add ecx, 50h
        push ecx
        ; Exact mapped bytes E8 9E C6 38 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xc6
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        push 198h
        ; Exact mapped bytes E8 05 0E 37 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x0e
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5c0h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 5c0h], 0
        ; Exact mapped bytes 74 1C: je 0x584c0231
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        push 0
        push 58895a50h
        mov ecx, dword ptr [ebp - 5c0h]
        ; Exact mapped bytes E8 87 01 2C 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x2c
        __asm _emit 0x00
        mov dword ptr [ebp - 5c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584c023b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 5c4h], 0
        mov edx, dword ptr [ebp - 5c4h]
        mov dword ptr [ebp - 5d8h], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 5b4h]
        mov ecx, dword ptr [ebp - 5d8h]
        mov dword ptr [eax + 5f0h], ecx
        mov edx, dword ptr [ebp - 5b4h]
        mov dword ptr [edx + 5f4h], 0
        mov dword ptr [ebp - 5bch], 1
        ; Exact mapped bytes EB 0F: jmp 0x584c0288
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 5bch]
        add eax, 1
        mov dword ptr [ebp - 5bch], eax
        cmp dword ptr [ebp - 5bch], 6
        ; Exact mapped bytes 0F 8F F6 02 00 00: jg 0x584c058b
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xf6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 5b8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x584c02b0
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 5b8h]
        add ecx, 1
        mov dword ptr [ebp - 5b8h], ecx
        cmp dword ptr [ebp - 5b8h], 28h
        ; Exact mapped bytes 0F 8D C9 02 00 00: jge 0x584c0586
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 5b8h], 24h
        mov eax, dword ptr [ebp - 5b4h]
        movzx ecx, byte ptr [eax + edx + 54h]
        cmp ecx, dword ptr [ebp - 5bch]
        ; Exact mapped bytes 0F 85 A6 02 00 00: jne 0x584c0581
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 5b8h], 24h
        mov eax, dword ptr [ebp - 5b4h]
        ; Exact mapped bytes 0F BF 4C 10 56: movsx ecx, word ptr [eax + edx + 0x56]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x56
        cmp ecx, 1
        ; Exact mapped bytes 74 1B: je 0x584c030d
        __asm _emit 0x74
        __asm _emit 0x1b
        imul edx, dword ptr [ebp - 5b8h], 24h
        mov eax, dword ptr [ebp - 5b4h]
        ; Exact mapped bytes 0F BF 4C 10 56: movsx ecx, word ptr [eax + edx + 0x56]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x56
        cmp ecx, -1
        ; Exact mapped bytes 0F 85 4A 01 00 00: jne 0x584c0457
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 F0 0C 37 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x0c
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5c8h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 5c8h], 0
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x584c03b1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 5b8h], 24h
        mov eax, dword ptr [ebp - 5b4h]
        mov ecx, dword ptr [eax + edx + 5ch]
        mov dword ptr [ebp - 5dch], ecx
        imul edx, dword ptr [ebp - 5b8h], 24h
        mov eax, dword ptr [ebp - 5b4h]
        mov ecx, dword ptr [eax + edx + 58h]
        mov dword ptr [ebp - 5e0h], ecx
        imul edx, dword ptr [ebp - 5b8h], 24h
        mov eax, dword ptr [ebp - 5b4h]
        movzx ecx, byte ptr [eax + edx + 55h]
        push ecx
        ; Exact mapped bytes 8B 0D A4 06 96 58: mov ecx, dword ptr [0x589606a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 47 FC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x47
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 5e4h], eax
        push 40h
        mov edx, dword ptr [ebp - 5dch]
        push edx
        mov eax, dword ptr [ebp - 5e0h]
        push eax
        mov ecx, dword ptr [ebp - 5e4h]
        push ecx
        mov edx, dword ptr [ebp - 5b4h]
        push edx
        mov ecx, dword ptr [ebp - 5c8h]
        ; Exact mapped bytes E8 77 1F FC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x1f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 5cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x584c03bb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 5cch], 0
        mov eax, dword ptr [ebp - 5cch]
        mov dword ptr [ebp - 5e8h], eax
        mov byte ptr [ebp - 4], 0
        imul ecx, dword ptr [ebp - 5b8h], 24h
        mov edx, dword ptr [ebp - 5b4h]
        mov eax, dword ptr [ebp - 5e8h]
        mov dword ptr [edx + ecx + 70h], eax
        imul ecx, dword ptr [ebp - 5b8h], 24h
        mov edx, dword ptr [ebp - 5b4h]
        mov eax, dword ptr [edx + ecx + 70h]
        mov dword ptr [ebp - 5ech], eax
        imul ecx, dword ptr [ebp - 5b8h], 24h
        mov edx, dword ptr [ebp - 5b4h]
        ; Exact mapped bytes 0F BF 44 0A 56: movsx eax, word ptr [edx + ecx + 0x56]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x56
        imul ecx, eax, 101h
        push ecx
        mov ecx, dword ptr [ebp - 5ech]
        ; Exact mapped bytes E8 93 51 2F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x51
        __asm _emit 0x2f
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 5b8h], 24h
        mov eax, dword ptr [ebp - 5b4h]
        mov ecx, dword ptr [eax + edx + 70h]
        mov dword ptr [ebp - 5f0h], ecx
        imul edx, dword ptr [ebp - 5b8h], 24h
        mov eax, dword ptr [ebp - 5b4h]
        mov ecx, dword ptr [eax + edx + 68h]
        push ecx
        mov ecx, dword ptr [ebp - 5f0h]
        ; Exact mapped bytes E8 EF 50 2F 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x50
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x584c0548
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 5b8h], 24h
        mov eax, dword ptr [ebp - 5b4h]
        ; Exact mapped bytes 0F BF 4C 10 56: movsx ecx, word ptr [eax + edx + 0x56]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x56
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 D6 00 00 00: jne 0x584c0548
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 8B 0B 37 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x0b
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5d0h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 5d0h], 0
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x584c0517
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 5b8h], 24h
        mov eax, dword ptr [ebp - 5b4h]
        mov ecx, dword ptr [eax + edx + 5ch]
        mov dword ptr [ebp - 5f8h], ecx
        imul edx, dword ptr [ebp - 5b8h], 24h
        mov eax, dword ptr [ebp - 5b4h]
        mov ecx, dword ptr [eax + edx + 58h]
        mov dword ptr [ebp - 5fch], ecx
        mov edx, dword ptr [ebp - 5b4h]
        mov eax, dword ptr [edx + 5f0h]
        mov dword ptr [ebp - 5f4h], eax
        push 0
        mov ecx, dword ptr [ebp - 5f4h]
        ; Exact mapped bytes E8 40 46 FC FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x46
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 600h], eax
        push 40h
        mov ecx, dword ptr [ebp - 5f8h]
        push ecx
        mov edx, dword ptr [ebp - 5fch]
        push edx
        mov eax, dword ptr [ebp - 600h]
        push eax
        mov ecx, dword ptr [ebp - 5b4h]
        push ecx
        mov ecx, dword ptr [ebp - 5d0h]
        ; Exact mapped bytes E8 11 1E FC FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x1e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 5d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584c0521
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 5d4h], 0
        mov edx, dword ptr [ebp - 5d4h]
        mov dword ptr [ebp - 604h], edx
        mov byte ptr [ebp - 4], 0
        imul eax, dword ptr [ebp - 5b8h], 24h
        mov ecx, dword ptr [ebp - 5b4h]
        mov edx, dword ptr [ebp - 604h]
        mov dword ptr [ecx + eax + 70h], edx
        imul eax, dword ptr [ebp - 5b8h], 24h
        mov ecx, dword ptr [ebp - 5b4h]
        cmp dword ptr [ecx + eax + 50h], 0
        ; Exact mapped bytes 75 25: jne 0x584c0581
        __asm _emit 0x75
        __asm _emit 0x25
        imul edx, dword ptr [ebp - 5b8h], 24h
        mov eax, dword ptr [ebp - 5b4h]
        mov ecx, dword ptr [eax + edx + 70h]
        mov dword ptr [ebp - 608h], ecx
        push 0
        mov ecx, dword ptr [ebp - 608h]
        ; Exact mapped bytes E8 10 5A FC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x5a
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 1B FD FF FF: jmp 0x584c02a1
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 EE FC FF FF: jmp 0x584c0279
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 5b4h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 5b4h]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 5b4h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0fffbh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 5b4h]
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 5b4h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffeh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 5b4h]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 5b4h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 5b4h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 5b4h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 2B 0A 37 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x0a
        __asm _emit 0x37
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret 18h
    }
}
