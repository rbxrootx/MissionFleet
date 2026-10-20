// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00474F98 .. +0x1C5 bytes.
extern "C" __declspec(naked) void FUN_00474f98_00474F98() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57beaah
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
        sub esp, 24h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 2ch], ecx
        push 4fh
        push 5bb340h
        push 8ch
        ; Exact mapped bytes E8 4B 80 07 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0D: je 0x475008
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 7D EB FF FF: call 0x473b80
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x47500f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 20h
        mov esi, esp
        push edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 2ch
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A1 37 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 38h
        mov esi, esp
        push ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 44h
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 84 37 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, 8
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 14h
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 67 37 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 44h]
        mov dword ptr [edx + 50h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 4C: mov cx, word ptr [eax + 0x4c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x4c
        ; Exact mapped bytes 66 89 4A 58: mov word ptr [edx + 0x58], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 48: mov cx, word ptr [eax + 0x48]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x48
        ; Exact mapped bytes 66 89 4A 54: mov word ptr [edx + 0x54], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 4A: mov cx, word ptr [eax + 0x4a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x4a
        ; Exact mapped bytes 66 89 4A 56: mov word ptr [edx + 0x56], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [edx + 5ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [edx + 60h], ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 C7 82 88 00 00 00 00 00: mov word ptr [edx + 0x88], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, 58h
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 64h
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F0 36 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 7ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 80h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 84h], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 80h
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 93 18 00 00: call 0x4769c0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 4
        ; Exact mapped bytes E8 73 16 00 00: call 0x4767b0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 30h
        cmp ebp, esp
        ; Exact mapped bytes E8 89 36 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
