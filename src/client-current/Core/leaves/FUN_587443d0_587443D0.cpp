// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587443D0 .. +0x1D9 bytes.
extern "C" __declspec(naked) void FUN_587443d0_587443D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov dword ptr [ebp - 4], ecx
        push 0c4h
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        push ecx
        ; Exact mapped bytes E8 23 8A 10 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x8a
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 0ch
        push 50h
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        push eax
        ; Exact mapped bytes E8 10 8A 10 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x8a
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 10h], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 0ch], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 28h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 30h], 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 34h], 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 38h], 80h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 3ch], 10h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 40h], 7dh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 44h], 7dh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 48h], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 4ch], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, 0ah
        ; Exact mapped bytes 66 89 88 84 00 00 00: mov word ptr [eax + 0x84], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, 0ah
        ; Exact mapped bytes 66 89 48 36: mov word ptr [eax + 0x36], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov cl, byte ptr [eax + 32h]
        and cl, 0f0h
        or cl, 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov byte ptr [eax + 32h], cl
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        movzx eax, byte ptr [edx + 31h]
        and al, 80h
        or al, 40h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 31h], al
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 47h], 7dh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov byte ptr [eax + 46h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx + 3ch]
        and eax, 0fffffffdh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [edx + 3ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ecx + 3ch]
        and edx, 0fffffffeh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ecx + 3ch], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [eax + 3ch]
        or ecx, 4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [eax + 3ch], ecx
        push 588b4b78h
        ; Exact mapped bytes E8 B1 DA DD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xda
        __asm _emit 0xdd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        push 30h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 23 FC 06 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xfc
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 4]
        push 0
        ; Exact mapped bytes 8B 0D B4 07 96 58: mov ecx, dword ptr [0x589607b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A4 05 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3D 24 D4 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x24
        __asm _emit 0xd4
        __asm _emit 0xff
        lea edx, [esi + eax + 2ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FA A7 D7 FF: call 0x584bed90
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xa7
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 5ch]
        ; Exact mapped bytes E8 2F 80 DA FF: call 0x584ec5d0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x80
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
