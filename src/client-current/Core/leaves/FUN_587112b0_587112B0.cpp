// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587112B0 .. +0x196 bytes.
extern "C" __declspec(naked) void FUN_587112b0_587112B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 200h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 01: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 04: or cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 02: or cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2470h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BD 4A D7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x4a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AA 4A D7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x4a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 94 4A D7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x4a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 7E 4A D7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x4a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 CB E4 D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe4
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58711388
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 13: jge 0x587113a1
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 200ch], 0
        ; Exact mapped bytes EB DE: jmp 0x5871137f
        __asm _emit 0xeb
        __asm _emit 0xde
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20f4h], 0
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 78 13 00 00: call 0x58712730
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push 28h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 36 D7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x36
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E3 A9 0A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xa9
        __asm _emit 0x0a
        __asm _emit 0x00
        push 28h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 36 D7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x36
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 D0: call dword ptr [ebp - 0x30]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 36 D7 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x36
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 34h], ecx
        push 0
        push 64h
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 CC: call dword ptr [ebp - 0x34]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xcc
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 5C DC FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x5c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 9F 49 D7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x49
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
