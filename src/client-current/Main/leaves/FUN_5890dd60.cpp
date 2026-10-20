// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890DD60 .. +0x120 bytes.
extern "C" __declspec(naked) void FUN_5890dd60() {
    __asm {
        sub esp, 10h
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [edx + 90h]
        push ebp
        push esi
        mov esi, dword ptr [esp + 20h]
        imul esi, esi, 7ch
        mov ebp, ecx
        xor ecx, ecx
        add eax, esi
        cmp dword ptr [eax + 3ch], ecx
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 8], ecx
        mov dword ptr [esp + 0ch], esi
        ; Exact mapped bytes 0F 8E DE 00 00 00: jle 0x5890de73
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push edi
        mov edi, ecx
        and edi, 1
        imul edi, dword ptr [eax + 50h]
        mov eax, dword ptr [eax + 38h]
        xor ebx, ebx
        test eax, eax
        ; Exact mapped bytes 0F 8E A6 00 00 00: jle 0x5890de53
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov esi, dword ptr [esp + 28h]
        imul eax, ecx
        add eax, ebx
        lea ecx, [eax + eax*4]
        mov eax, dword ptr [edx + 94h]
        mov eax, dword ptr [eax + esi*4]
        mov eax, dword ptr [eax + ecx*4]
        cmp eax, -1
        ; Exact mapped bytes 74 66: je 0x5890de33
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [esp + 2ch]
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 5A: jle 0x5890de33
        __asm _emit 0x7e
        __asm _emit 0x5a
        test eax, eax
        ; Exact mapped bytes 7C 56: jl 0x5890de33
        __asm _emit 0x7c
        __asm _emit 0x56
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 4C: je 0x5890de33
        __asm _emit 0x74
        __asm _emit 0x4c
        mov esi, eax
        shl esi, 6
        add ecx, esi
        ; Exact mapped bytes 74 43: je 0x5890de33
        __asm _emit 0x74
        __asm _emit 0x43
        mov esi, dword ptr [esp + 1ch]
        mov edx, dword ptr [ebp]
        mov edx, dword ptr [edx + 18h]
        push esi
        push edi
        push ecx
        push eax
        mov eax, dword ptr [esp + 40h]
        push eax
        mov ecx, ebp
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov esi, eax
        mov eax, dword ptr [esp + 34h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 CB 4E FF FF: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 38h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 FF 4E FF FF: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 1ch]
        push esi
        push edx
        push edi
        mov ecx, ebp
        ; Exact mapped bytes E8 41 FC FF FF: call 0x5890da70
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 24h]
        mov eax, dword ptr [edx + 90h]
        mov esi, dword ptr [esp + 14h]
        add edi, dword ptr [eax + esi + 40h]
        mov ecx, dword ptr [esp + 10h]
        add eax, esi
        mov eax, dword ptr [eax + 38h]
        inc ebx
        cmp ebx, eax
        ; Exact mapped bytes 0F 8C 5D FF FF FF: jl 0x5890ddb0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edx + 90h]
        mov edi, dword ptr [eax + esi + 44h]
        add dword ptr [esp + 1ch], edi
        add eax, esi
        inc ecx
        cmp ecx, dword ptr [eax + 3ch]
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 0F 8C 26 FF FF FF: jl 0x5890dd97
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop ebx
        pop esi
        mov eax, 1
        pop ebp
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
