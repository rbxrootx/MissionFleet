// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885DC63 .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_5885dc63_5885DC63() {
    __asm {
        mov edi, edi
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        cmp dword ptr [esi + 0ch], ebx
        ; Exact mapped bytes 75 29: jne 0x5885dc99
        __asm _emit 0x75
        __asm _emit 0x29
        mov eax, dword ptr [esi + 8]
        mov dword ptr [esi + 10h], ebx
        ; Exact mapped bytes 66 89 5E 14: mov word ptr [esi + 0x14], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x14
        mov byte ptr [esi + 16h], bl
        mov dword ptr [esi + 18h], ebx
        mov dword ptr [esi + 1ch], ebx
        mov dword ptr [esi + 20h], ebx
        mov byte ptr [esi + 24h], bl
        mov dword ptr [esi + 28h], ebx
        mov al, byte ptr [eax]
        test al, al
        ; Exact mapped bytes 75 0C: jne 0x5885dc9e
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 10h], 1
        xor al, al
        pop esi
        pop ebx
        ret
        movzx eax, al
        push eax
        ; Exact mapped bytes E8 39 63 00 00: call 0x58863fe0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [esi + 8]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x5885dcd3
        __asm _emit 0x74
        __asm _emit 0x24
        mov dword ptr [esi + 10h], 2
        movzx eax, byte ptr [ecx]
        ; Exact mapped bytes EB 09: jmp 0x5885dcc4
        __asm _emit 0xeb
        __asm _emit 0x09
        inc dword ptr [esi + 8]
        mov eax, dword ptr [esi + 8]
        movzx eax, byte ptr [eax]
        push eax
        ; Exact mapped bytes E8 16 63 00 00: call 0x58863fe0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 EC: jne 0x5885dcbb
        __asm _emit 0x75
        __asm _emit 0xec
        mov al, 1
        ; Exact mapped bytes EB C8: jmp 0x5885dc9b
        __asm _emit 0xeb
        __asm _emit 0xc8
        cmp byte ptr [ecx], 25h
        ; Exact mapped bytes 75 7C: jne 0x5885dd54
        __asm _emit 0x75
        __asm _emit 0x7c
        lea eax, [ecx + 1]
        cmp byte ptr [eax], 25h
        ; Exact mapped bytes 74 74: je 0x5885dd54
        __asm _emit 0x74
        __asm _emit 0x74
        mov dword ptr [esi + 10h], 4
        mov dword ptr [esi + 8], eax
        cmp byte ptr [eax], 2ah
        ; Exact mapped bytes 75 08: jne 0x5885dcf7
        __asm _emit 0x75
        __asm _emit 0x08
        inc eax
        mov byte ptr [esi + 16h], 1
        mov dword ptr [esi + 8], eax
        mov ecx, esi
        ; Exact mapped bytes E8 02 32 00 00: call 0x58860f00
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 97: je 0x5885dc99
        __asm _emit 0x74
        __asm _emit 0x97
        mov ecx, esi
        ; Exact mapped bytes E8 8B 32 00 00: call 0x58860f94
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 EB 33 00 00: call 0x588610fb
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 6D 30 00 00: call 0x58860d84
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 7A FF FF FF: je 0x5885dc99
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        imul ecx, dword ptr [esi + 28h], 0ch
        mov eax, dword ptr [esi + 20h]
        cmp byte ptr [ecx + eax + 588c3e48h], bl
        ; Exact mapped bytes 75 A0: jne 0x5885dccf
        __asm _emit 0x75
        __asm _emit 0xa0
        mov dword ptr [esi + 10h], ebx
        ; Exact mapped bytes 66 89 5E 14: mov word ptr [esi + 0x14], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x14
        mov byte ptr [esi + 16h], bl
        mov dword ptr [esi + 18h], ebx
        mov dword ptr [esi + 1ch], ebx
        mov dword ptr [esi + 20h], ebx
        mov byte ptr [esi + 24h], bl
        mov dword ptr [esi + 28h], ebx
        mov dword ptr [esi + 0ch], 16h
        ; Exact mapped bytes E9 45 FF FF FF: jmp 0x5885dc99
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 10h], 3
        mov al, byte ptr [ecx]
        mov byte ptr [esi + 14h], al
        xor eax, eax
        cmp byte ptr [ecx], 25h
        push ebx
        sete al
        inc ecx
        add eax, ecx
        mov ecx, esi
        mov dword ptr [esi + 8], eax
        ; Exact mapped bytes E8 33 33 00 00: call 0x588610a9
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 20 FF FF FF: jmp 0x5885dc9b
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
