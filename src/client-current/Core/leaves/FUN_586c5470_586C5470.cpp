// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C5470 .. +0x18D bytes.
extern "C" __declspec(naked) void FUN_586c5470_586C5470() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 7E: jne 0x586c54fd
        __asm _emit 0x75
        __asm _emit 0x7e
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7D 02 DD FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x02
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        add edx, 3e8h
        ; Exact mapped bytes 66 89 55 FE: mov word ptr [ebp - 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfe
        movzx eax, word ptr [ebp - 2]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D3 09 DC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x09
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 254h]
        mov dword ptr [ebp - 1ch], edx
        push 588b0e4ch
        ; Exact mapped bytes E8 2D CB E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xcb
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 CB 0B DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x0b
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 254h]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F5 09 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x09
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 94h], 1
        ; Exact mapped bytes E9 FA 00 00 00: jmp 0x586c55f7
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 24h], edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FF 01 DD FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 00: mov ax, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        movzx ecx, word ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 5B 09 DC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x09
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D7 01 DD FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 4D FA: mov word ptr [ebp - 6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfa
        movzx edx, word ptr [ebp - 6]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 33 09 DC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x09
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 2ch], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AF 01 DD FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        movzx eax, word ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 0B 09 DC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x09
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 30h], edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 87 01 DD FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0xdd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 00: mov ax, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F6: mov word ptr [ebp - 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf6
        movzx ecx, word ptr [ebp - 0ah]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 E3 08 DC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x08
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 254h]
        mov dword ptr [ebp - 38h], eax
        push 588b0e74h
        ; Exact mapped bytes E8 3D CA E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xca
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 DB 0A DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x0a
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 254h]
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 05 09 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x09
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, 7dh
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 8A 90 00 00 00: mov word ptr [edx + 0x90], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 94h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
