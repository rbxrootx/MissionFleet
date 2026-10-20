// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C6D90 .. +0x137 bytes.
extern "C" __declspec(naked) void FUN_587c6d90() {
    __asm {
        push -1
        push 589815a2h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 1ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, ecx
        mov dword ptr [esp + 18h], ebp
        xor ebx, ebx
        mov dword ptr [esp + 14h], ebx
        cmp dword ptr [esp + 38h], ebx
        ; Exact mapped bytes 74 1A: je 0x587c6de3
        __asm _emit 0x74
        __asm _emit 0x1a
        mov dword ptr [ebp], 5899aee0h
        mov dword ptr [ebp + 58h], 5899ad9ch
        mov dword ptr [esp + 24h], ebx
        mov dword ptr [esp + 14h], 1
        mov eax, dword ptr [ebp]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ecx + ebp], 5899ad94h
        mov edx, dword ptr [ebp]
        mov dword ptr [ebp + 4], ebx
        mov esi, dword ptr [edx + 4]
        add esi, ebp
        mov ecx, esi
        ; Exact mapped bytes E8 8E FB FF FF: call 0x587c6990
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        lea edi, [ebp + 8]
        push 20h
        mov ecx, esi
        mov dword ptr [esi + 28h], edi
        mov dword ptr [esi + 2ch], ebx
        ; Exact mapped bytes E8 EC F7 FF FF: call 0x587c6600
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [esi + 30h], al
        cmp dword ptr [esi + 28h], ebx
        ; Exact mapped bytes 75 12: jne 0x587c6e2e
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [esi + 8]
        or eax, 4
        or eax, 4
        push ebx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 92 F9 FF FF: call 0x587c67c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 4], ebx
        mov eax, dword ptr [ebp]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ecx + ebp], 5899aedch
        mov ecx, edi
        mov dword ptr [esp + 24h], 2
        ; Exact mapped bytes E8 03 E1 FF FF: call 0x587c4f50
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, edi
        mov dword ptr [edi], 5899ae34h
        mov byte ptr [edi + 48h], bl
        mov byte ptr [edi + 41h], bl
        ; Exact mapped bytes E8 C0 DB FF FF: call 0x587c4a20
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi + 4ch], ebx
        ; Exact mapped bytes 8B 15 88 4A A2 58: mov edx, dword ptr [0x58a24a88]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [edi + 44h], edx
        mov dword ptr [edi + 3ch], ebx
        mov eax, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        push eax
        or ecx, 1
        push ecx
        push edx
        mov ecx, edi
        mov byte ptr [esp + 30h], 3
        ; Exact mapped bytes E8 E3 FD FF FF: call 0x587c6c70
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1E: jne 0x587c6eaf
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [ebp]
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [ecx + ebp + 8]
        add ecx, ebp
        or eax, 2
        cmp dword ptr [ecx + 28h], ebx
        ; Exact mapped bytes 75 03: jne 0x587c6ea8
        __asm _emit 0x75
        __asm _emit 0x03
        or eax, 4
        push ebx
        push eax
        ; Exact mapped bytes E8 11 F9 FF FF: call 0x587c67c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, ebp
        mov ecx, dword ptr [esp + 1ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 14h
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
