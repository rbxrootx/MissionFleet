// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D2520 .. +0x1AF bytes.
extern "C" __declspec(naked) void FUN_588d2520() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        xor ecx, ecx
        mov dword ptr [esi + 7ch], ecx
        mov dword ptr [esi + 348h], ecx
        mov dword ptr [esi + 32ch], ecx
        mov dword ptr [esi + 330h], ecx
        push edi
        or edi, 0ffffffffh
        mov dword ptr [esi + 4c8h], edi
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 10490h]
        add eax, dword ptr [edx + 10488h]
        mov ebx, 0ah
        cdq
        idiv ebx
        mov eax, 1
        mov dword ptr [esi + 0b0h], eax
        mov dword ptr [esi + 0b4h], eax
        mov dword ptr [esi + 4c0h], 64h
        mov dword ptr [esi + 568h], edx
        mov edx, eax
        mov eax, dword ptr [esp + 1ch]
        ; Exact mapped bytes 66 89 96 CE 02 00 00: mov word ptr [esi + 0x2ce], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 564h], eax
        mov dword ptr [esi + 34ch], eax
        mov eax, dword ptr [esp + 20h]
        mov edx, 0ffffh
        ; Exact mapped bytes 66 89 96 D2 02 00 00: mov word ptr [esi + 0x2d2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 96 E0 02 00 00: mov word ptr [esi + 0x2e0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 89 96 E2 02 00 00: mov word ptr [esi + 0x2e2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [esi + 4], edx
        imul edx, edx, 5dch
        mov eax, dword ptr [eax + 4]
        mov dword ptr [esi + 8], eax
        imul eax, eax, 0bb8h
        mov dword ptr [esi + 4b8h], eax
        mov eax, dword ptr [esi + 338h]
        imul eax, eax, 3e8h
        mov dword ptr [esi + 4d8h], ecx
        mov dword ptr [esi + 460h], ecx
        mov dword ptr [esi + 46ch], ecx
        mov dword ptr [esi + 474h], ecx
        mov dword ptr [esi + 350h], ecx
        mov dword ptr [esi + 328h], ecx
        mov dword ptr [esi + 31ch], ecx
        mov dword ptr [esi + 318h], ecx
        mov dword ptr [esi + 4ech], ecx
        mov dword ptr [esi + 4d4h], ecx
        mov ecx, esi
        mov dword ptr [esi + 4b4h], edx
        mov dword ptr [esi + 4dch], edi
        mov dword ptr [esi + 340h], eax
        mov dword ptr [esi + 324h], eax
        ; Exact mapped bytes E8 0D 81 E6 FF: call 0x5873a760
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x81
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 9C 45 A2 58: mov edi, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edi + 10488h]
        add eax, dword ptr [edi + 10490h]
        ; Exact mapped bytes 8B 1D 14 49 A2 58: mov ebx, dword ptr [0x58a24914]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        xor edx, edx
        div ebx
        ; Exact mapped bytes 8B 2D 1C 49 A2 58: mov ebp, dword ptr [0x58a2491c]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, 51eb851fh
        mov ecx, dword ptr [ebp + edx*4]
        mul ecx
        shr edx, 0ch
        imul edx, edx, 3200h
        sub ecx, edx
        mov dword ptr [esp + 10h], ecx
        mov eax, dword ptr [edi + 10488h]
        add eax, dword ptr [edi + 10490h]
        xor edx, edx
        div ebx
        mov ecx, dword ptr [ebp + edx*4]
        mov eax, 51eb851fh
        mul ecx
        shr edx, 0bh
        imul edx, edx, 1900h
        sub ecx, edx
        mov dword ptr [esp + 14h], ecx
        lea ecx, [esp + 10h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 3B 7B E6 FF: call 0x5873a200
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x7b
        __asm _emit 0xe6
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
