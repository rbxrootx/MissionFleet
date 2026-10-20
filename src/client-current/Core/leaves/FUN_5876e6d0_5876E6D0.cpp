// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876E6D0 .. +0x191 bytes.
extern "C" __declspec(naked) void FUN_5876e6d0_5876E6D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 5f2ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 5f30h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5f34h]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A9 6E 04 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5f34h]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 33 0E D3 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x0e
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12cch]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1D 0E D3 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x0e
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 75 D4 FF FF: call 0x5876bbb0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5f34h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5f2ch]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 73 63 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x63
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F4 84 D1 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5876e77f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 53 62 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x62
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E1 07: and cx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x07
        movzx edx, cx
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 7D 3D: jge 0x5876e7da
        __asm _emit 0x7d
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 5f38h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5f2ch]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 08 63 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x63
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 89 84 D1 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 9C: jmp 0x5876e776
        __asm _emit 0xeb
        __asm _emit 0x9c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12cch]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5f30h]
        mov dword ptr [ebp - 30h], ecx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 D4 62 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x62
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 55 84 D1 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12d0h]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5f30h]
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A3 62 D1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x62
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 34 17 D9 FF: call 0x584fff70
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x17
        __asm _emit 0xd9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12d0h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5eb8h]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 A6 16 D9 FF: call 0x584fff00
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x16
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
