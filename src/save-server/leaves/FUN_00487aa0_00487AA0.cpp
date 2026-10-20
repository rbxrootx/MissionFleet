// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00487AA0 .. +0x197 bytes.
extern "C" __declspec(naked) void FUN_00487aa0_00487AA0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        sub esp, 4
        push ebx
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        push ebp
        push 2
        push eax
        push esi
        ; Exact mapped bytes FF 15 08 BA 68 00: call dword ptr [0x68ba08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 75 0C: jne 0x487acb
        __asm _emit 0x75
        __asm _emit 0x0c
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
        push edi
        push esi
        ; Exact mapped bytes FF 15 84 B9 68 00: call dword ptr [0x68b984]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov ebx, eax
        push edi
        push esi
        ; Exact mapped bytes FF 15 0C BA 68 00: call dword ptr [0x68ba0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 75 0C: jne 0x487aef
        __asm _emit 0x75
        __asm _emit 0x0c
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
        push ebx
        push 40h
        ; Exact mapped bytes FF 15 C8 B9 68 00: call dword ptr [0x68b9c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov ebp, eax
        test ebp, ebp
        ; Exact mapped bytes 75 0C: jne 0x487b0a
        __asm _emit 0x75
        __asm _emit 0x0c
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
        mov edi, ebp
        mov ecx, ebx
        shr ecx, 2
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, ebx
        and ecx, 3
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        mov eax, dword ptr [esp + 20h]
        xor ecx, ecx
        mov cl, ah
        mov edx, eax
        mov dword ptr [esp + 10h], 0
        shl ecx, 8
        shr edx, 10h
        mov byte ptr [esp + 10h], dl
        xor edx, edx
        or ecx, dword ptr [esp + 10h]
        mov dl, al
        shl edx, 10h
        mov eax, dword ptr [esp + 28h]
        or ecx, edx
        mov edx, eax
        shr edx, 10h
        mov dword ptr [ebp + 28h], ecx
        mov dword ptr [esp + 10h], 0
        xor ecx, ecx
        mov byte ptr [esp + 10h], dl
        mov cl, ah
        xor edx, edx
        shl ecx, 8
        mov dl, al
        shl edx, 10h
        or ecx, dword ptr [esp + 10h]
        or ecx, edx
        mov eax, dword ptr [esp + 24h]
        mov edx, eax
        mov dword ptr [ebp + 44h], ecx
        shr edx, 10h
        xor ecx, ecx
        mov dword ptr [esp + 10h], 0
        mov cl, ah
        mov byte ptr [esp + 10h], dl
        shl ecx, 8
        xor edx, edx
        or ecx, dword ptr [esp + 10h]
        mov dl, al
        shl edx, 10h
        mov eax, dword ptr [esp + 2ch]
        or ecx, edx
        xor edx, edx
        mov dl, al
        mov dword ptr [ebp + 48h], ecx
        shl edx, 10h
        xor ecx, ecx
        mov cl, ah
        shl ecx, 8
        shr eax, 10h
        or ecx, edx
        xor edx, edx
        mov dl, al
        mov eax, dword ptr [esp + 30h]
        or ecx, edx
        xor edx, edx
        mov dl, al
        mov dword ptr [ebp + 64h], ecx
        shl edx, 10h
        xor ecx, ecx
        mov cl, ah
        shl ecx, 8
        shr eax, 10h
        or ecx, edx
        xor edx, edx
        mov dl, al
        mov eax, dword ptr [esp + 34h]
        or ecx, edx
        xor edx, edx
        mov dl, al
        mov dword ptr [ebp + 54h], ecx
        shl edx, 10h
        xor ecx, ecx
        mov cl, ah
        shl ecx, 8
        push 0
        shr eax, 10h
        or ecx, edx
        xor edx, edx
        mov dl, al
        or ecx, edx
        mov dword ptr [ebp + 50h], ecx
        ; Exact mapped bytes FF 15 0C BE 68 00: call dword ptr [0x68be0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov edi, eax
        push 0
        push ebp
        lea ecx, [ebp + 68h]
        push ecx
        push 4
        push ebp
        push edi
        ; Exact mapped bytes FF 15 C4 B6 68 00: call dword ptr [0x68b6c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov esi, eax
        push edi
        push 0
        ; Exact mapped bytes FF 15 04 BE 68 00: call dword ptr [0x68be04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push ebp
        ; Exact mapped bytes FF 15 00 BA 68 00: call dword ptr [0x68ba00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, esi
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
