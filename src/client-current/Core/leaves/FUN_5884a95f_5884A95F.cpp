// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884A95F .. +0x24F bytes.
extern "C" __declspec(naked) void FUN_5884a95f_5884A95F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        xor edi, edi
        mov ecx, edi
        mov ebx, edi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [esi + 6af80h], 2
        ; Exact mapped bytes E9 F3 01 00 00: jmp 0x5884ab74
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 6af90h], 3
        ; Exact mapped bytes 72 52: jb 0x5884a9dc
        __asm _emit 0x72
        __asm _emit 0x52
        mov edx, dword ptr [esi + 6af84h]
        mov eax, dword ptr [esi + 6af7ch]
        shl eax, 5
        movzx ecx, byte ptr [edx + esi + 1af72h]
        xor ecx, eax
        and ecx, 7fffh
        and edx, 7fffh
        mov dword ptr [esi + 6af7ch], ecx
        mov eax, dword ptr [esi + ecx*4 + 4af70h]
        mov dword ptr [esi + edx*4 + 2af70h], eax
        mov ecx, dword ptr [esi + 6af7ch]
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [esi + 6af84h]
        mov dword ptr [esi + ecx*4 + 4af70h], eax
        mov ecx, dword ptr [ebp - 4]
        test ecx, ecx
        ; Exact mapped bytes 74 39: je 0x5884aa19
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [esi + 6af84h]
        sub eax, ecx
        cmp eax, 7efah
        ; Exact mapped bytes 77 2A: ja 0x5884aa19
        __asm _emit 0x77
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 6af90h]
        cmp dword ptr [esi + 6afa0h], eax
        ; Exact mapped bytes 76 06: jbe 0x5884aa03
        __asm _emit 0x76
        __asm _emit 0x06
        mov dword ptr [esi + 6afa0h], eax
        push ecx
        push esi
        ; Exact mapped bytes E8 17 0B 00 00: call 0x5884b521
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov ecx, dword ptr [esi + 6af90h]
        mov ebx, eax
        cmp ebx, ecx
        cmova ebx, ecx
        cmp ebx, 3
        ; Exact mapped bytes 0F 82 DD 00 00 00: jb 0x5884aaff
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebx - 3]
        push eax
        mov eax, dword ptr [esi + 6af84h]
        sub eax, dword ptr [esi + 6af88h]
        push eax
        push esi
        ; Exact mapped bytes E8 97 FA FF FF: call 0x5884a4d0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        sub dword ptr [esi + 6af90h], ebx
        add esp, 0ch
        mov dword ptr [ebp + 8], eax
        cmp ebx, dword ptr [esi + 6af98h]
        ; Exact mapped bytes 77 69: ja 0x5884aab6
        __asm _emit 0x77
        __asm _emit 0x69
        cmp dword ptr [esi + 6af90h], 3
        ; Exact mapped bytes 72 60: jb 0x5884aab6
        __asm _emit 0x72
        __asm _emit 0x60
        dec ebx
        inc dword ptr [esi + 6af84h]
        mov edx, dword ptr [esi + 6af84h]
        mov eax, dword ptr [esi + 6af7ch]
        shl eax, 5
        movzx ecx, byte ptr [esi + edx + 1af72h]
        and edx, 7fffh
        xor ecx, eax
        and ecx, 7fffh
        mov dword ptr [esi + 6af7ch], ecx
        mov eax, dword ptr [esi + ecx*4 + 4af70h]
        mov dword ptr [esi + edx*4 + 2af70h], eax
        mov ecx, dword ptr [esi + 6af7ch]
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [esi + 6af84h]
        mov dword ptr [esi + ecx*4 + 4af70h], eax
        sub ebx, 1
        ; Exact mapped bytes 75 A6: jne 0x5884aa57
        __asm _emit 0x75
        __asm _emit 0xa6
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 68: jmp 0x5884ab1e
        __asm _emit 0xeb
        __asm _emit 0x68
        add dword ptr [esi + 6af84h], ebx
        mov ebx, edi
        mov eax, dword ptr [esi + 6af84h]
        push 588c251ch
        push 1
        push esi
        movzx ecx, byte ptr [eax + esi + 1af70h]
        mov dword ptr [esi + 6af7ch], ecx
        movzx eax, byte ptr [eax + esi + 1af71h]
        shl ecx, 5
        xor eax, ecx
        and eax, 7fffh
        mov dword ptr [esi + 6af7ch], eax
        ; Exact mapped bytes E8 99 EA FF FF: call 0x58849590
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        add esp, 0ch
        ; Exact mapped bytes EB 25: jmp 0x5884ab24
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [esi + 6af84h]
        movzx eax, byte ptr [eax + esi + 1af70h]
        push eax
        push edi
        push esi
        ; Exact mapped bytes E8 BB F9 FF FF: call 0x5884a4d0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        dec dword ptr [esi + 6af90h]
        inc dword ptr [esi + 6af84h]
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x5884ab5e
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [esi + 6af74h]
        test ecx, ecx
        ; Exact mapped bytes 78 0A: js 0x5884ab3c
        __asm _emit 0x78
        __asm _emit 0x0a
        lea edx, [esi + 1af70h]
        add edx, ecx
        ; Exact mapped bytes EB 02: jmp 0x5884ab3e
        __asm _emit 0xeb
        __asm _emit 0x02
        mov edx, edi
        mov eax, dword ptr [esi + 6af84h]
        push edi
        sub eax, ecx
        push eax
        push edx
        push esi
        ; Exact mapped bytes E8 5D 02 00 00: call 0x5884adac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 6af84h]
        add esp, 10h
        mov dword ptr [esi + 6af74h], eax
        cmp dword ptr [esi + 6af90h], 106h
        ; Exact mapped bytes 73 07: jae 0x5884ab71
        __asm _emit 0x73
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes E8 F2 00 00 00: call 0x5884ac62
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [esi + 6af90h], edi
        ; Exact mapped bytes 0F 85 01 FE FF FF: jne 0x5884a981
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 6af74h]
        test ecx, ecx
        ; Exact mapped bytes 78 08: js 0x5884ab92
        __asm _emit 0x78
        __asm _emit 0x08
        lea edi, [esi + 1af70h]
        add edi, ecx
        mov eax, dword ptr [esi + 6af84h]
        push 1
        sub eax, ecx
        push eax
        push edi
        push esi
        ; Exact mapped bytes E8 08 02 00 00: call 0x5884adac
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
