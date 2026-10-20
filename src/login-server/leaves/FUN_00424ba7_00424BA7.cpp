// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00424BA7 .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_00424ba7_00424BA7() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0ch]
        mov eax, dword ptr [esi + 0ch]
        mov ebx, dword ptr [esi + 10h]
        test al, 82h
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x424cb3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test al, 40h
        ; Exact mapped bytes 0F 85 EE 00 00 00: jne 0x424cb3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test al, 1
        ; Exact mapped bytes 74 16: je 0x424bdf
        __asm _emit 0x74
        __asm _emit 0x16
        and dword ptr [esi + 4], 0
        test al, 10h
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x424cb3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        and al, 0feh
        mov dword ptr [esi], ecx
        mov dword ptr [esi + 0ch], eax
        mov eax, dword ptr [esi + 0ch]
        and dword ptr [esi + 4], 0
        and dword ptr [ebp + 0ch], 0
        and al, 0efh
        or al, 2
        ; Exact mapped bytes 66 A9 0C 01: test ax, 0x10c
        __asm _emit 0x66
        __asm _emit 0xa9
        __asm _emit 0x0c
        __asm _emit 0x01
        mov dword ptr [esi + 0ch], eax
        ; Exact mapped bytes 75 22: jne 0x424c19
        __asm _emit 0x75
        __asm _emit 0x22
        cmp esi, 44d3e0h
        ; Exact mapped bytes 74 08: je 0x424c07
        __asm _emit 0x74
        __asm _emit 0x08
        cmp esi, 44d400h
        ; Exact mapped bytes 75 0B: jne 0x424c12
        __asm _emit 0x75
        __asm _emit 0x0b
        push ebx
        ; Exact mapped bytes E8 27 20 00 00: call 0x426c34
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        pop ecx
        ; Exact mapped bytes 75 07: jne 0x424c19
        __asm _emit 0x75
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes E8 D8 1F 00 00: call 0x426bf0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes 66 F7 46 0C 08 01: test word ptr [esi + 0xc], 0x108
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0x46
        __asm _emit 0x0c
        __asm _emit 0x08
        __asm _emit 0x01
        push edi
        ; Exact mapped bytes 74 67: je 0x424c89
        __asm _emit 0x74
        __asm _emit 0x67
        mov eax, dword ptr [esi + 8]
        mov edi, dword ptr [esi]
        sub edi, eax
        lea ecx, [eax + 1]
        mov dword ptr [esi], ecx
        mov ecx, dword ptr [esi + 18h]
        dec ecx
        test edi, edi
        mov dword ptr [esi + 4], ecx
        ; Exact mapped bytes 7E 10: jle 0x424c49
        __asm _emit 0x7e
        __asm _emit 0x10
        push edi
        push eax
        push ebx
        ; Exact mapped bytes E8 BF 1D 00 00: call 0x426a00
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes EB 36: jmp 0x424c7f
        __asm _emit 0xeb
        __asm _emit 0x36
        cmp ebx, -1
        ; Exact mapped bytes 74 19: je 0x424c67
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, ebx
        mov eax, ebx
        sar ecx, 5
        and eax, 1fh
        mov ecx, dword ptr [ecx*4 + 451080h]
        lea eax, [eax + eax*8]
        lea eax, [ecx + eax*4]
        ; Exact mapped bytes EB 05: jmp 0x424c6c
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 44af60h
        test byte ptr [eax + 4], 20h
        ; Exact mapped bytes 74 0D: je 0x424c7f
        __asm _emit 0x74
        __asm _emit 0x0d
        push 2
        push 0
        push ebx
        ; Exact mapped bytes E8 AC 1C 00 00: call 0x426928
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [esi + 8]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [eax], cl
        ; Exact mapped bytes EB 14: jmp 0x424c9d
        __asm _emit 0xeb
        __asm _emit 0x14
        push 1
        lea eax, [ebp + 8]
        pop edi
        push edi
        push eax
        push ebx
        ; Exact mapped bytes E8 69 1D 00 00: call 0x426a00
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp + 0ch], eax
        cmp dword ptr [ebp + 0ch], edi
        pop edi
        ; Exact mapped bytes 74 06: je 0x424ca9
        __asm _emit 0x74
        __asm _emit 0x06
        or dword ptr [esi + 0ch], 20h
        ; Exact mapped bytes EB 0F: jmp 0x424cb8
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffh
        ; Exact mapped bytes EB 08: jmp 0x424cbb
        __asm _emit 0xeb
        __asm _emit 0x08
        or al, 20h
        mov dword ptr [esi + 0ch], eax
        or eax, 0ffffffffh
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
