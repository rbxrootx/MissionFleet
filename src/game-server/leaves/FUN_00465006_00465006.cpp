// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00465006 .. +0x54C bytes.
extern "C" __declspec(naked) void FUN_00465006_00465006() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bb6eh
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
        sub esp, 34h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 40h]
        mov ecx, 0dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 3ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        mov esi, dword ptr [ebp + 0ch]
        imul esi, esi, 37ch
        mov ecx, dword ptr [ecx + edx + 280h]
        cmp ecx, dword ptr [eax + esi + 27ch]
        ; Exact mapped bytes 0F 87 C7 04 00 00: ja 0x465536
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 78h
        ; Exact mapped bytes 0F 83 9C 04 00 00: jae 0x465536
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        and eax, 0fh
        mov byte ptr [ebp - 20h], al
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        mov byte ptr [ebp - 14h], cl
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 278h]
        shr edx, 1
        and edx, 7fffffffh
        mov byte ptr [ebp - 1ch], dl
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 2d0h]
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 B4 87 08 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x87
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x46513d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 7dh
        ; Exact mapped bytes 0F 8D 6A 03 00 00: jge 0x4654b1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        cmp edx, 7ch
        ; Exact mapped bytes 0F 83 38 03 00 00: jae 0x4654aa
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        mov esi, dword ptr [ebp + 0ch]
        imul esi, esi, 37ch
        mov ecx, dword ptr [ecx + edx + 27ch]
        sub ecx, dword ptr [eax + esi + 280h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        mov dword ptr [eax + edx + 27ch], ecx
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + ecx + 234h]
        shr ecx, 4
        and ecx, 0ffh
        add ecx, 1
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        and ecx, 0ffh
        shl ecx, 4
        mov edx, dword ptr [eax + edx + 234h]
        and edx, 0fffff00fh
        or edx, ecx
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 168h]
        mov dword ptr [ecx + eax + 234h], edx
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 40ca8h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [eax + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        mov esi, dword ptr [ebp + 0ch]
        imul esi, esi, 37ch
        mov eax, dword ptr [ecx + eax*4 + 18h]
        mov dword ptr [edx + esi + 280h], eax
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x465281
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 28h]
        add ecx, 1
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 0ch
        ; Exact mapped bytes 0F 83 D3 00 00 00: jae 0x46535e
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        lea edx, [eax + ecx + 224h]
        mov eax, dword ptr [ebp - 28h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4C 42 14: mov cx, word ptr [edx + eax*2 + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 28h]
        add esi, dword ptr [eax + 168h]
        ; Exact mapped bytes 0F BE 94 32 50 02 00 00: movsx edx, byte ptr [edx + esi + 0x250]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x32
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add ecx, edx
        test ecx, ecx
        ; Exact mapped bytes 7D 25: jge 0x4652f6
        __asm _emit 0x7d
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 224h]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 C7 44 48 14 00 00: mov word ptr [eax + ecx*2 + 0x14], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x48
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 63: jmp 0x465359
        __asm _emit 0xeb
        __asm _emit 0x63
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        lea edx, [eax + ecx + 224h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 28h]
        add esi, dword ptr [ecx + 168h]
        ; Exact mapped bytes 66 0F BE 84 30 50 02 00 00: movsx ax, byte ptr [eax + esi + 0x250]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 8B 54 4A 14: mov dx, word ptr [edx + ecx*2 + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x4a
        __asm _emit 0x14
        ; Exact mapped bytes 66 03 D0: add dx, ax
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xd0
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 168h]
        lea eax, [ecx + eax + 224h]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 89 54 48 14: mov word ptr [eax + ecx*2 + 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x14
        ; Exact mapped bytes E9 1A FF FF FF: jmp 0x465278
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        and edx, 0fh
        mov byte ptr [ebp - 30h], dl
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        mov byte ptr [ebp - 2ch], al
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 278h]
        shr ecx, 1
        and ecx, 7fffffffh
        mov byte ptr [ebp - 24h], cl
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        mov esi, dword ptr [ebp + 0ch]
        imul esi, esi, 37ch
        mov eax, dword ptr [eax + ecx + 280h]
        cmp eax, dword ptr [edx + esi + 27ch]
        ; Exact mapped bytes 76 3A: jbe 0x465433
        __asm _emit 0x76
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        lea ecx, [edx + eax + 224h]
        mov dword ptr [ebp - 34h], ecx
        mov dl, byte ptr [ebp - 1ch]
        push edx
        mov al, byte ptr [ebp - 14h]
        push eax
        mov cl, byte ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 FB 27 00 00: call 0x467c2c
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 7E: jmp 0x4654b1
        __asm _emit 0xeb
        __asm _emit 0x7e
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 7C 6F: jl 0x4654a8
        __asm _emit 0x7c
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 280h]
        sub ecx, 1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov dword ptr [eax + edx + 27ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 224h]
        mov dword ptr [ebp - 38h], eax
        mov cl, byte ptr [ebp - 1ch]
        push ecx
        mov dl, byte ptr [ebp - 14h]
        push edx
        mov al, byte ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 86 27 00 00: call 0x467c2c
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x4654b1
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes EB 02: jmp 0x4654ac
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x4654b1
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 83 FC FF FF: jmp 0x465134
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 224h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 40cc8h]
        mov ecx, dword ptr [eax + 0ca4h]
        ; Exact mapped bytes E8 E4 FC FB FF: call 0x4251c6
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        mov byte ptr [ebp - 40h], al
        mov ecx, dword ptr [ebp - 40h]
        and ecx, 0ffh
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        and ecx, 1
        mov eax, dword ptr [eax + edx + 278h]
        and al, 0feh
        or eax, ecx
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        mov dword ptr [edx + ecx + 278h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 16 83 08 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 40h
        cmp ebp, esp
        ; Exact mapped bytes E8 94 32 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
