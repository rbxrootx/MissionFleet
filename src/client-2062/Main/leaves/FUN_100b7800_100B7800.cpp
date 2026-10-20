// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B7800 .. +0x1C7 bytes.
extern "C" __declspec(naked) void FUN_100b7800_100B7800() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, 1
        push edi
        mov ecx, dword ptr [esi + 84h]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 80h]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 88h]
        mov dword ptr [ecx + 50h], eax
        mov eax, dword ptr [esi + 0d0h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0cch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esp + 0ch]
        cmp eax, 10000h
        ; Exact mapped bytes 0F 84 25 01 00 00: je 0x100b797b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 20000h
        ; Exact mapped bytes 0F 84 CE 00 00 00: je 0x100b792f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 30000h
        ; Exact mapped bytes 0F 85 56 01 00 00: jne 0x100b79c2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        mov edi, dword ptr [esi + 54h]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [ecx + 20h]
        sub edx, eax
        mov eax, dword ptr [ecx + 4]
        add edx, edi
        push edx
        push eax
        ; Exact mapped bytes E8 DA 06 F9 FF: call 0x10047f60
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x06
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 6ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        push 40000000h
        mov ecx, esi
        ; Exact mapped bytes E8 16 04 00 00: call 0x100b7cb0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        mov edx, 0fh
        mov dword ptr [eax + 50h], 0
        mov eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0cch]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 60h]
        cmp dword ptr [eax + 160h], 10h
        ; Exact mapped bytes 7E 11: jle 0x100b78df
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100b78df
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 400h
        ; Exact mapped bytes EB 02: jmp 0x100b78e1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0cch]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100b7916
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edi
        mov edi, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edi
        mov edi, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edi
        mov edi, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 0d0h]
        pop edi
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov esi, dword ptr [esi + 0d4h]
        ; Exact mapped bytes 66 09 56 24: or word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x56
        __asm _emit 0x24
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        mov eax, dword ptr [esi + 54h]
        mov edx, dword ptr [ecx + 18h]
        mov edi, dword ptr [ecx + 20h]
        sub edx, edi
        add edx, eax
        mov eax, dword ptr [ecx + 4]
        push edx
        push eax
        ; Exact mapped bytes E8 17 06 F9 FF: call 0x10047f60
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 6ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        push 40000000h
        mov ecx, esi
        ; Exact mapped bytes E8 53 03 00 00: call 0x100b7cb0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        pop edi
        mov dword ptr [eax + 50h], 0
        mov esi, dword ptr [esi + 84h]
        ; Exact mapped bytes 66 81 66 24 FD FF: and word ptr [esi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        mov eax, dword ptr [esi + 54h]
        mov edx, dword ptr [ecx + 18h]
        mov edi, dword ptr [ecx + 20h]
        sub edx, edi
        add edx, eax
        mov eax, dword ptr [ecx + 4]
        push edx
        push eax
        ; Exact mapped bytes E8 CB 05 F9 FF: call 0x10047f60
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x05
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 6ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        push 40000000h
        mov ecx, esi
        ; Exact mapped bytes E8 07 03 00 00: call 0x100b7cb0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        mov dword ptr [eax + 50h], 0
        mov esi, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 81 66 24 FD FF: and word ptr [esi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
