// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10096BE0 .. +0x138 bytes.
extern "C" __declspec(naked) void FUN_10096be0_10096BE0() {
    __asm {
        sub esp, 34h
        push ebx
        mov ebx, ecx
        push esi
        ; Exact mapped bytes 8B 35 A8 50 17 10: mov esi, dword ptr [0x101750a8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [ebx + 6ch]
        mov eax, dword ptr [eax + 80h]
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        cmp eax, 4
        ; Exact mapped bytes 0F 8C FA 00 00 00: jl 0x10096cfc
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 6ch]
        mov eax, dword ptr [ecx + 80h]
        push eax
        push 101ad0e8h
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x10096c36
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        push eax
        push eax
        push 1cah
        ; Exact mapped bytes E8 82 6E F8 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x6e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 6ch]
        ; Exact mapped bytes E8 8A 51 F8 FF: call 0x1001bdc0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x51
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebx + 70h]
        push ebp
        push edi
        mov eax, dword ptr [edx + 80h]
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ebp, eax
        add ebp, 31h
        push ebp
        ; Exact mapped bytes E8 51 5B 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x5b
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, eax
        mov ecx, 0ch
        xor eax, eax
        lea edi, [esp + 18h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, ebp
        mov dword ptr [esp + 14h], edx
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 8B 35 B0 50 17 10: mov esi, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, edx
        and ecx, 3
        add esp, 4
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        lea eax, [esp + 14h]
        push 101ad0e8h
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebx + 74h]
        push 0
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [ebx + 6ch]
        lea edx, [esp + 2ch]
        mov ecx, dword ptr [eax + 80h]
        push ecx
        push edx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edi, dword ptr [esp + 10h]
        mov ecx, 0ch
        lea esi, [esp + 14h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebx + 70h]
        mov esi, dword ptr [eax + 80h]
        push esi
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, eax
        mov eax, dword ptr [esp + 10h]
        mov edx, ecx
        push ebp
        lea edi, [eax + 30h]
        push eax
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, edx
        push 0
        and ecx, 3
        push 0
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1
        ; Exact mapped bytes E8 03 67 FB FF: call 0x1004d3f0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x67
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebx]
        mov ecx, ebx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        pop edi
        pop ebp
        pop esi
        pop ebx
        add esp, 34h
        ret
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 1a4h
        ; Exact mapped bytes E8 9E 6D F8 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x6d
        __asm _emit 0xf8
        __asm _emit 0xff
        pop esi
        pop ebx
        add esp, 34h
        ret
    }
}
