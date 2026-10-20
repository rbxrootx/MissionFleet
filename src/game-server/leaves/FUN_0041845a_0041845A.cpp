// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041845A .. +0x3B1 bytes.
extern "C" __declspec(naked) void FUN_0041845a_0041845A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x418490
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 0F 8D 62 03 00 00: jge 0x4187fc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 28h
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 14h]
        xor eax, eax
        mov al, byte ptr [edx + ecx*2 + 15h]
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 F8 B2 FE FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 BB 01 00 00: je 0x41868e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [edx + 16ch]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 0ah
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 14h]
        mov cl, byte ptr [esi + ecx*2 + 15h]
        mov byte ptr [edx + eax + 134h], cl
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        mov edx, dword ptr [eax + 16ch]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 0ah
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 14h]
        mov dl, byte ptr [esi + edx*2 + 16h]
        mov byte ptr [eax + ecx + 135h], dl
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        mov eax, dword ptr [ecx + 16ch]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 0ah
        ; Exact mapped bytes 66 8B 84 11 2E 01 00 00: mov ax, word ptr [ecx + edx + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 0dh
        ; Exact mapped bytes 0F 85 F9 00 00 00: jne 0x418689
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [edx + 16ch]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 0ah
        xor ecx, ecx
        mov cl, byte ptr [edx + eax + 134h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 BD 00 00 00: jne 0x418689
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ah
        push 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        mov edx, dword ptr [eax + 16ch]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 0ah
        lea edx, [eax + ecx + 12eh]
        push edx
        ; Exact mapped bytes E8 68 0D 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x0d
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx + 16ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 99 AD 06 00: call 0x4833c9
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xad
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [edx + 16ch]
        imul ecx, ecx, 370h
        mov edx, dword ptr [ebp - 18h]
        and edx, 1fh
        shl edx, 1
        mov eax, dword ptr [eax + ecx + 16be0h]
        and al, 0c1h
        or eax, edx
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [edx + 16ch]
        imul ecx, ecx, 370h
        mov edx, dword ptr [ebp - 14h]
        mov edx, dword ptr [edx + 0ch]
        mov edx, dword ptr [edx + 168h]
        mov dword ptr [edx + ecx + 16be0h], eax
        ; Exact mapped bytes E9 69 01 00 00: jmp 0x4187f7
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        mov eax, dword ptr [ecx + 16ch]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 0ah
        mov byte ptr [ecx + edx + 134h], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        mov eax, dword ptr [ecx + 16ch]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 0ah
        mov byte ptr [ecx + edx + 135h], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        mov eax, dword ptr [ecx + 16ch]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 0ah
        ; Exact mapped bytes 66 8B 84 11 2E 01 00 00: mov ax, word ptr [ecx + edx + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 0dh
        ; Exact mapped bytes 0F 85 BE 00 00 00: jne 0x4187f7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ah
        push 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [edx + 16ch]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 0ah
        lea ecx, [edx + eax + 12eh]
        push ecx
        ; Exact mapped bytes E8 FB 0B 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x0b
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [eax + 16ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 2C AC 06 00: call 0x4833c9
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        mov eax, dword ptr [ecx + 16ch]
        imul eax, eax, 370h
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, 1fh
        shl ecx, 1
        mov edx, dword ptr [edx + eax + 16be0h]
        and edx, 0ffffffc1h
        or edx, ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0ch]
        mov eax, dword ptr [ecx + 16ch]
        imul eax, eax, 370h
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [ecx + 168h]
        mov dword ptr [ecx + eax + 16be0h], edx
        ; Exact mapped bytes E9 8B FC FF FF: jmp 0x418487
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 D9 FF 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
