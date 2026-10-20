// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58835C50 .. +0x9E bytes.
extern "C" __declspec(naked) void FUN_58835c50() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov ebp, dword ptr [ebx + 1a0h]
        lea esi, [ebx + 190h]
        push edi
        cmp dword ptr [esi + 0ch], ebp
        ; Exact mapped bytes 76 05: jbe 0x58835c6f
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 03 70 14 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0ch]
        mov eax, dword ptr [esi]
        mov dword ptr [esp + 10h], eax
        cmp edi, dword ptr [esi + 10h]
        ; Exact mapped bytes 76 05: jbe 0x58835c82
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 F0 6F 14 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x6f
        __asm _emit 0x14
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [esi]
        push ebp
        push ecx
        push edi
        push eax
        lea edx, [esp + 20h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 98 EE FF FF: call 0x58834b30
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebx + 268h]
        cmp dword ptr [ebx + 264h], edi
        lea esi, [ebx + 258h]
        ; Exact mapped bytes 76 05: jbe 0x58835cb1
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 C1 6F 14 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x6f
        __asm _emit 0x14
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 0ch]
        mov ebp, dword ptr [esi]
        cmp ebx, dword ptr [esi + 10h]
        ; Exact mapped bytes 76 05: jbe 0x58835cc0
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 B2 6F 14 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x6f
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        push edi
        push ebp
        push ebx
        push eax
        lea eax, [esp + 20h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 DE 90 F7 FF: call 0x587aedb0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x90
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D A0 B4 A0 58: mov ecx, dword ptr [0x58a0b4a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        push 0
        push ecx
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA E1 F1 FF: call 0x58753ee0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe1
        __asm _emit 0xf1
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}
