// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873519 .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_58873519_58873519() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 10h]
        push ebx
        push edi
        mov edi, dword ptr [ebp + 0ch]
        xor ebx, ebx
        mov dword ptr [ebp - 4], ebx
        test edi, edi
        ; Exact mapped bytes 74 27: je 0x58873557
        __asm _emit 0x74
        __asm _emit 0x27
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x5887355b
        __asm _emit 0x74
        __asm _emit 0x27
        mov byte ptr [edi], bl
        mov ecx, dword ptr [ebp + 8]
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x5887353f
        __asm _emit 0x74
        __asm _emit 0x02
        mov dword ptr [ecx], ebx
        mov ecx, dword ptr [ebp + 18h]
        cmp ecx, eax
        push esi
        mov esi, dword ptr [ebp + 1ch]
        cmova ecx, eax
        cmp ecx, 7fffffffh
        ; Exact mapped bytes 76 27: jbe 0x5887357a
        __asm _emit 0x76
        __asm _emit 0x27
        push 16h
        ; Exact mapped bytes EB 60: jmp 0x588735b7
        __asm _emit 0xeb
        __asm _emit 0x60
        test eax, eax
        ; Exact mapped bytes 74 DB: je 0x58873536
        __asm _emit 0x74
        __asm _emit 0xdb
        mov eax, dword ptr [ebp + 1ch]
        push 16h
        pop edi
        push eax
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], edi
        ; Exact mapped bytes E8 BB D9 FD FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 18h
        mov eax, edi
        ; Exact mapped bytes EB 71: jmp 0x588735eb
        __asm _emit 0xeb
        __asm _emit 0x71
        push esi
        push ecx
        push dword ptr [ebp + 14h]
        push edi
        ; Exact mapped bytes E8 6A 00 00 00: call 0x588735ef
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        add esp, 10h
        cmp ecx, -1
        ; Exact mapped bytes 75 12: jne 0x588735a1
        __asm _emit 0x75
        __asm _emit 0x12
        test edi, edi
        ; Exact mapped bytes 74 02: je 0x58873595
        __asm _emit 0x74
        __asm _emit 0x02
        mov byte ptr [edi], bl
        cmp byte ptr [esi + 1ch], bl
        ; Exact mapped bytes 74 03: je 0x5887359d
        __asm _emit 0x74
        __asm _emit 0x03
        mov ebx, dword ptr [esi + 18h]
        mov eax, ebx
        ; Exact mapped bytes EB 49: jmp 0x588735ea
        __asm _emit 0xeb
        __asm _emit 0x49
        inc ecx
        test edi, edi
        ; Exact mapped bytes 74 38: je 0x588735de
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [ebp + 10h]
        cmp ecx, eax
        ; Exact mapped bytes 76 2D: jbe 0x588735da
        __asm _emit 0x76
        __asm _emit 0x2d
        cmp dword ptr [ebp + 18h], -1
        ; Exact mapped bytes 74 1E: je 0x588735d1
        __asm _emit 0x74
        __asm _emit 0x1e
        mov byte ptr [edi], bl
        push 22h
        pop edi
        push esi
        push ebx
        push ebx
        push ebx
        push ebx
        mov dword ptr [esi + 18h], edi
        push ebx
        mov byte ptr [esi + 1ch], 1
        ; Exact mapped bytes E8 64 D9 FD FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 18h
        mov eax, edi
        ; Exact mapped bytes EB 19: jmp 0x588735ea
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, eax
        mov dword ptr [ebp - 4], 50h
        mov byte ptr [ecx + edi - 1], bl
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x588735e7
        __asm _emit 0x74
        __asm _emit 0x02
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp - 4]
        pop esi
        pop edi
        pop ebx
        leave
        ret
    }
}
