// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00422779 .. +0x13E bytes.
extern "C" __declspec(naked) void FUN_00422779_00422779() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        ; Exact mapped bytes E8 3F FD FF FF: call 0x4224c3
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        push dword ptr [esi + 50h]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 26 01 00 00: call 0x4228b7
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        pop ecx
        ; Exact mapped bytes 0F 84 0F 01 00 00: je 0x4228aa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [eax + 8]
        test ebx, ebx
        mov dword ptr [ebp + 8], ebx
        ; Exact mapped bytes 0F 84 01 01 00 00: je 0x4228aa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, 5
        ; Exact mapped bytes 75 0C: jne 0x4227ba
        __asm _emit 0x75
        __asm _emit 0x0c
        and dword ptr [eax + 8], 0
        push 1
        pop eax
        ; Exact mapped bytes E9 F9 00 00 00: jmp 0x4228b3
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, 1
        ; Exact mapped bytes 0F 84 E2 00 00 00: je 0x4228a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [esi + 54h], ecx
        mov ecx, dword ptr [eax + 4]
        cmp ecx, 8
        ; Exact mapped bytes 0F 85 BC 00 00 00: jne 0x422897
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 50 AF 44 00: mov edx, dword ptr [0x44af50]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xaf
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 54 AF 44 00: mov ecx, dword ptr [0x44af54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0xaf
        __asm _emit 0x44
        __asm _emit 0x00
        add ecx, edx
        push edi
        cmp edx, ecx
        ; Exact mapped bytes 7D 27: jge 0x422815
        __asm _emit 0x7d
        __asm _emit 0x27
        lea ecx, [edx + edx*2]
        shl ecx, 2
        mov edi, dword ptr [esi + 50h]
        add ecx, 0ch
        and dword ptr [ecx + edi - 4], 0
        ; Exact mapped bytes 8B 3D 50 AF 44 00: mov edi, dword ptr [0x44af50]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0xaf
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 54 AF 44 00: mov ebx, dword ptr [0x44af54]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0xaf
        __asm _emit 0x44
        __asm _emit 0x00
        inc edx
        add ebx, edi
        cmp edx, ebx
        ; Exact mapped bytes 7C E2: jl 0x4227f4
        __asm _emit 0x7c
        __asm _emit 0xe2
        mov ebx, dword ptr [ebp + 8]
        mov eax, dword ptr [eax]
        mov edi, dword ptr [esi + 58h]
        cmp eax, 0c000008eh
        ; Exact mapped bytes 75 09: jne 0x42282a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [esi + 58h], 83h
        ; Exact mapped bytes EB 5E: jmp 0x422888
        __asm _emit 0xeb
        __asm _emit 0x5e
        cmp eax, 0c0000090h
        ; Exact mapped bytes 75 09: jne 0x42283a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [esi + 58h], 81h
        ; Exact mapped bytes EB 4E: jmp 0x422888
        __asm _emit 0xeb
        __asm _emit 0x4e
        cmp eax, 0c0000091h
        ; Exact mapped bytes 75 09: jne 0x42284a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [esi + 58h], 84h
        ; Exact mapped bytes EB 3E: jmp 0x422888
        __asm _emit 0xeb
        __asm _emit 0x3e
        cmp eax, 0c0000093h
        ; Exact mapped bytes 75 09: jne 0x42285a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [esi + 58h], 85h
        ; Exact mapped bytes EB 2E: jmp 0x422888
        __asm _emit 0xeb
        __asm _emit 0x2e
        cmp eax, 0c000008dh
        ; Exact mapped bytes 75 09: jne 0x42286a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [esi + 58h], 82h
        ; Exact mapped bytes EB 1E: jmp 0x422888
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp eax, 0c000008fh
        ; Exact mapped bytes 75 09: jne 0x42287a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [esi + 58h], 86h
        ; Exact mapped bytes EB 0E: jmp 0x422888
        __asm _emit 0xeb
        __asm _emit 0x0e
        cmp eax, 0c0000092h
        ; Exact mapped bytes 75 07: jne 0x422888
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [esi + 58h], 8ah
        push dword ptr [esi + 58h]
        push 8
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        pop ecx
        mov dword ptr [esi + 58h], edi
        pop ecx
        pop edi
        ; Exact mapped bytes EB 08: jmp 0x42289f
        __asm _emit 0xeb
        __asm _emit 0x08
        and dword ptr [eax + 8], 0
        push ecx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        pop ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [esi + 54h], eax
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 09: jmp 0x4228b3
        __asm _emit 0xeb
        __asm _emit 0x09
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 15 50 C1 43 00: call dword ptr [0x43c150]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        pop esi
        pop ebx
        leave
        ret
    }
}
