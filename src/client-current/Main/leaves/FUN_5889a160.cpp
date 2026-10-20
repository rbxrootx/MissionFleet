// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5889A160 .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_5889a160() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        mov esi, ecx
        mov dword ptr [edi], 0
        test esi, esi
        ; Exact mapped bytes 74 0E: je 0x5889a181
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [esp + 18h]
        cmp dword ptr [esi + 0ch], eax
        ; Exact mapped bytes 77 05: ja 0x5889a181
        __asm _emit 0x77
        __asm _emit 0x05
        cmp eax, dword ptr [esi + 10h]
        ; Exact mapped bytes 76 09: jbe 0x5889a18a
        __asm _emit 0x76
        __asm _emit 0x09
        ; Exact mapped bytes E8 EC 2A 0E 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x2a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        mov ebx, dword ptr [esp + 20h]
        mov ecx, dword ptr [esi]
        mov dword ptr [edi], ecx
        mov dword ptr [edi + 4], eax
        cmp dword ptr [esi + 0ch], ebx
        ; Exact mapped bytes 77 05: ja 0x5889a19f
        __asm _emit 0x77
        __asm _emit 0x05
        cmp ebx, dword ptr [esi + 10h]
        ; Exact mapped bytes 76 09: jbe 0x5889a1a8
        __asm _emit 0x76
        __asm _emit 0x09
        ; Exact mapped bytes E8 CE 2A 0E 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x2a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 20h]
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x5889a1b4
        __asm _emit 0x74
        __asm _emit 0x04
        cmp eax, ecx
        ; Exact mapped bytes 74 05: je 0x5889a1b9
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 B9 2A 0E 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x2a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 4]
        cmp ecx, ebx
        ; Exact mapped bytes 74 3A: je 0x5889a1fa
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [esi + 10h]
        mov byte ptr [esp + 10h], 0
        mov edx, dword ptr [esp + 10h]
        push edx
        mov edx, dword ptr [esp + 14h]
        push edx
        mov edx, dword ptr [esp + 18h]
        push edx
        push ecx
        push eax
        push ebx
        ; Exact mapped bytes E8 31 F9 FF FF: call 0x58899b10
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 10h]
        mov ebx, eax
        mov eax, dword ptr [esp + 28h]
        push eax
        lea ecx, [esi + 8]
        push ecx
        push edx
        push ebx
        ; Exact mapped bytes E8 8C FA FF FF: call 0x58899c80
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 28h
        mov dword ptr [esi + 10h], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
