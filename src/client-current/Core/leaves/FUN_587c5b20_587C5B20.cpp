// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C5B20 .. +0x16A bytes.
extern "C" __declspec(naked) void FUN_587c5b20_587C5B20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 20: jmp 0x587c5b61
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        imul ecx, dword ptr [ebp + 0ch], 7ch
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 90h]
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [eax + ecx + 44h]
        mov dword ptr [ebp - 18h], edx
        imul eax, dword ptr [ebp + 0ch], 7ch
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 90h]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [edx + eax + 3ch]
        ; Exact mapped bytes 0F 8D 03 01 00 00: jge 0x587c5c7e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        and edx, 1
        imul eax, dword ptr [ebp + 0ch], 7ch
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 90h]
        imul edx, dword ptr [ecx + eax + 50h]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 20: jmp 0x587c5bbf
        __asm _emit 0xeb
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        imul eax, dword ptr [ebp + 0ch], 7ch
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 90h]
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [edx + eax + 40h]
        mov dword ptr [ebp - 1ch], ecx
        imul edx, dword ptr [ebp + 0ch], 7ch
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 90h]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ecx + edx + 38h]
        ; Exact mapped bytes 0F 8D A0 00 00 00: jge 0x587c5c79
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 94h]
        imul eax, dword ptr [ebp + 0ch], 7ch
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 90h]
        mov esi, dword ptr [ebp - 4]
        imul esi, dword ptr [ecx + eax + 38h]
        add esi, dword ptr [ebp - 8]
        imul eax, esi, 14h
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [edx + ecx*4]
        mov eax, dword ptr [edx + eax]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 74 65: je 0x587c5c74
        __asm _emit 0x74
        __asm _emit 0x65
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 B5 EE CB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xee
        __asm _emit 0xcb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x587c5c74
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 9D EE CB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xee
        __asm _emit 0xcb
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 EC E3 DB FF: call 0x58584030
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xe3
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 ED F8 FE FF: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 51 F9 FE FF: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FD FB FF FF: call 0x587c5870
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 26 FF FF FF: jmp 0x587c5b9f
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C3 FE FF FF: jmp 0x587c5b41
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
