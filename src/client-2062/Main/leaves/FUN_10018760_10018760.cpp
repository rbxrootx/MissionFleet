// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10018760 .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_10018760_10018760() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 C6 00 00 00: je 0x10018836
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        and ecx, 1f00h
        ; Exact mapped bytes 66 81 F9 00 01: cmp cx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 62: jne 0x100187e1
        __asm _emit 0x75
        __asm _emit 0x62
        mov ecx, dword ptr [esi + 7ch]
        mov edx, dword ptr [esi + 78h]
        cmp ecx, edx
        ; Exact mapped bytes 7D 30: jge 0x100187b9
        __asm _emit 0x7d
        __asm _emit 0x30
        mov eax, dword ptr [esi + 6ch]
        mov dl, byte ptr [ecx + esi + 80h]
        mov byte ptr [ecx + eax], dl
        mov ecx, dword ptr [esi + 7ch]
        inc ecx
        mov dword ptr [esi + 7ch], ecx
        mov eax, ecx
        mov ecx, dword ptr [esi + 6ch]
        mov byte ptr [eax + ecx], 0
        mov ecx, dword ptr [esi + 180h]
        test ecx, ecx
        ; Exact mapped bytes 74 62: je 0x10018812
        __asm _emit 0x74
        __asm _emit 0x62
        mov edx, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes EB 59: jmp 0x10018812
        __asm _emit 0xeb
        __asm _emit 0x59
        mov ecx, dword ptr [esi + 74h]
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x100187d7
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [esi + 70h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100187cd
        __asm _emit 0x74
        __asm _emit 0x06
        dec ecx
        mov dword ptr [esi + 70h], ecx
        ; Exact mapped bytes EB 45: jmp 0x10018812
        __asm _emit 0xeb
        __asm _emit 0x45
        and eax, 0e4ffh
        or ah, 4
        ; Exact mapped bytes EB 37: jmp 0x1001880e
        __asm _emit 0xeb
        __asm _emit 0x37
        and eax, 0e2ffh
        or ah, 2
        ; Exact mapped bytes EB 2D: jmp 0x1001880e
        __asm _emit 0xeb
        __asm _emit 0x2d
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 2A: jne 0x10018812
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 7ch]
        test eax, eax
        ; Exact mapped bytes 7E 0D: jle 0x100187fc
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 6ch]
        dec eax
        mov dword ptr [esi + 7ch], eax
        mov byte ptr [ecx + eax], 0
        ; Exact mapped bytes EB 16: jmp 0x10018812
        __asm _emit 0xeb
        __asm _emit 0x16
        mov edx, dword ptr [esi + 6ch]
        mov byte ptr [edx], 0
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e5fbh
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x10018836
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x10018831
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x10018819
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
