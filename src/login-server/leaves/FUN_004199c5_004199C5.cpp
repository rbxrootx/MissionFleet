// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004199C5 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_004199c5_004199C5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        ; Exact mapped bytes 66 8B 46 7C: mov ax, word ptr [esi + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x7c
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x419a60
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 78h], ebx
        ; Exact mapped bytes 74 7E: je 0x419a60
        __asm _emit 0x74
        __asm _emit 0x7e
        movzx eax, ax
        push edi
        lea eax, [eax + eax*2]
        shl eax, 1
        push eax
        ; Exact mapped bytes E8 FB 3E 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        pop ecx
        movzx eax, word ptr [esi + 7ch]
        push eax
        push edi
        push dword ptr [esi + 78h]
        ; Exact mapped bytes FF 15 24 C4 43 00: call dword ptr [0x43c424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, ebx
        mov dword ptr [ebp - 8], ebx
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes 7E 46: jle 0x419a53
        __asm _emit 0x7e
        __asm _emit 0x46
        mov edx, dword ptr [ebp + 8]
        mov ecx, edi
        mov esi, dword ptr [edx + 4]
        cmp esi, 106h
        ; Exact mapped bytes 75 09: jne 0x419a26
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp + 8], 10h
        ; Exact mapped bytes EB 04: jmp 0x419a2a
        __asm _emit 0xeb
        __asm _emit 0x04
        and dword ptr [ebp + 8], 0
        movzx ebx, byte ptr [ecx]
        and ebx, 0fffffffdh
        cmp ebx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0A: jne 0x419a3f
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 66 8B 59 02: mov bx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x59
        __asm _emit 0x02
        ; Exact mapped bytes 66 3B 5A 08: cmp bx, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x5a
        __asm _emit 0x08
        ; Exact mapped bytes 74 0D: je 0x419a4c
        __asm _emit 0x74
        __asm _emit 0x0d
        inc dword ptr [ebp - 4]
        add ecx, 6
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7C CB: jl 0x419a15
        __asm _emit 0x7c
        __asm _emit 0xcb
        ; Exact mapped bytes EB 07: jmp 0x419a53
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        push edi
        ; Exact mapped bytes E8 BC 3E 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        pop ecx
        pop edi
        ; Exact mapped bytes EB 02: jmp 0x419a62
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
