// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429A20 .. +0x252 bytes.
extern "C" __declspec(naked) void FUN_00429a20_00429A20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 5ch
        ; Exact mapped bytes E8 12 BA 0F 00: call 0x525458
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xba
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 0C FE FF FF: call 0x429860
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0c0h
        ; Exact mapped bytes E8 AE FD FF FF: call 0x429810
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0c4h
        ; Exact mapped bytes E8 30 FD FF FF: call 0x4297a0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 6343d4h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 24h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 28h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 30h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 40h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 38h], 8000h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 38h]
        push eax
        ; Exact mapped bytes E8 77 29 0A 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x29
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 34h], edx
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 6ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 44h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 48h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 54h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 58h], 0
        lea edx, [ebp - 8]
        push edx
        ; Exact mapped bytes E8 7F 8A 07 00: call 0x4a25b7
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x8a
        __asm _emit 0x07
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 5ch
        ; Exact mapped bytes E8 54 B9 0F 00: call 0x525498
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb9
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, esp
        ; Exact mapped bytes FF 15 CC C0 68 00: call dword ptr [0x68c0cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc0
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9D B2 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xb2
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [edx + 64h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 68h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ach], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 50h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 33: je 0x429bbf
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 D3 FC FF FF: call 0x429880
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0c0h
        ; Exact mapped bytes E8 71 FC FF FF: call 0x429830
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ch], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 14h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 18h], 100h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 18h]
        shl edx, 3
        push edx
        ; Exact mapped bytes E8 74 28 0A 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 1ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 10h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0c8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0cch], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [edx + 0d4h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 20h]
        mov dword ptr [ecx + 0e0h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0d0h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0d8h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0dch], 0
        mov eax, dword ptr [ebp - 10h]
        pop esi
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 84 B1 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
