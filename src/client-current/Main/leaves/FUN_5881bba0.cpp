// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881BBA0 .. +0x13B bytes.
extern "C" __declspec(naked) void FUN_5881bba0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 94h]
        mov ecx, dword ptr [esp + 8]
        imul eax, eax, 19h
        mov edx, eax
        shr edx, 1
        cmp ecx, edx
        ; Exact mapped bytes 0F 87 1B 01 00 00: ja 0x5881bcd7
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr eax, 2
        cmp ecx, eax
        ; Exact mapped bytes 0F 87 8A 00 00 00: ja 0x5881bc51
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ecx
        and eax, 3
        cmp eax, 3
        ; Exact mapped bytes 0F 87 F9 00 00 00: ja 0x5881bcce
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 DC BC 81 58: jmp dword ptr [eax*4 + 0x5881bcdc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xbc
        __asm _emit 0x81
        __asm _emit 0x58
        mov eax, 0aaaaaaabh
        mul ecx
        shr edx, 1
        lea eax, [edx + edx*2]
        mov edx, dword ptr [esi + 90h]
        sub ecx, eax
        mov eax, dword ptr [esi + 8ch]
        add edx, ecx
        push edx
        add eax, ecx
        push eax
        ; Exact mapped bytes E9 C2 00 00 00: jmp 0x5881bcc3
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0aaaaaaabh
        mul ecx
        mov eax, dword ptr [esi + 90h]
        shr edx, 1
        lea edx, [edx + edx*2]
        sub ecx, edx
        add eax, ecx
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x5881bcb9
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0aaaaaaabh
        mul ecx
        shr edx, 1
        lea eax, [edx + edx*2]
        mov edx, dword ptr [esi + 90h]
        sub ecx, eax
        mov eax, dword ptr [esi + 8ch]
        sub edx, ecx
        push edx
        add eax, ecx
        push eax
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x5881bcc3
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0aaaaaaabh
        mul ecx
        shr edx, 1
        lea edx, [edx + edx*2]
        sub ecx, edx
        ; Exact mapped bytes EB 60: jmp 0x5881bcb1
        __asm _emit 0xeb
        __asm _emit 0x60
        mov eax, dword ptr [esi + 0b4h]
        push edi
        xor edx, edx
        mov edi, 3
        div edi
        pop edi
        test edx, edx
        ; Exact mapped bytes 75 68: jne 0x5881bcce
        __asm _emit 0x75
        __asm _emit 0x68
        mov eax, ecx
        and eax, 3
        cmp eax, 3
        ; Exact mapped bytes 77 5E: ja 0x5881bcce
        __asm _emit 0x77
        __asm _emit 0x5e
        ; Exact mapped bytes FF 24 85 EC BC 81 58: jmp dword ptr [eax*4 + 0x5881bcec]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xbc
        __asm _emit 0x81
        __asm _emit 0x58
        mov eax, dword ptr [esi + 90h]
        mov edx, dword ptr [esi + 8ch]
        and ecx, 1
        add eax, ecx
        add edx, ecx
        ; Exact mapped bytes EB 35: jmp 0x5881bcc1
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [esi + 90h]
        and ecx, 1
        add eax, ecx
        ; Exact mapped bytes EB 20: jmp 0x5881bcb9
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [esi + 90h]
        mov edx, dword ptr [esi + 8ch]
        and ecx, 1
        sub eax, ecx
        add edx, ecx
        ; Exact mapped bytes EB 13: jmp 0x5881bcc1
        __asm _emit 0xeb
        __asm _emit 0x13
        and ecx, 1
        mov eax, dword ptr [esi + 90h]
        sub eax, ecx
        mov edx, dword ptr [esi + 8ch]
        sub edx, ecx
        push eax
        push edx
        mov ecx, dword ptr [esi + 88h]
        ; Exact mapped bytes E8 C2 75 0E 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x75
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 4]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
