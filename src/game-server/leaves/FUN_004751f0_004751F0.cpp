// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004751F0 .. +0x154 bytes.
extern "C" __declspec(naked) void FUN_004751f0_004751F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        push 54h
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 55 41 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp + 8]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 4F 16 00 00: call 0x476880
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 2B 15 00 00: call 0x476770
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 22 18 00 00: call 0x476a70
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x47525e
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 D5 00 00 00: jmp 0x475333
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 8A 17 00 00: call 0x4769f0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 64h
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2dh
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2E 35 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, 2ch
        mov esi, esp
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0ch
        push eax
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 11 35 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 44h
        mov esi, esp
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 24h
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F4 34 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 58: mov dx, word ptr [ecx + 0x58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 50 4A: mov word ptr [eax + 0x4a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x4a
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 56: mov dx, word ptr [ecx + 0x56]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x56
        ; Exact mapped bytes 66 89 50 48: mov word ptr [eax + 0x48], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x48
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 54: mov dx, word ptr [ecx + 0x54]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x54
        ; Exact mapped bytes 66 89 50 46: mov word ptr [eax + 0x46], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x46
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [eax + 4ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [eax + 50h], edx
        mov eax, 1
        pop esi
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 A2 34 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
