// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585092C0 .. +0x11C bytes.
extern "C" __declspec(naked) void FUN_585092c0_585092C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx], 25h
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 14h]
        and eax, 20h
        ; Exact mapped bytes 74 0F: je 0x585092f2
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx], 2bh
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 14h]
        and eax, 8
        ; Exact mapped bytes 74 0F: je 0x58509309
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx], 23h
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, 1
        imul ecx, eax, 0
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F BE 04 0A: movsx eax, byte ptr [edx + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x0a
        cmp eax, 4ch
        ; Exact mapped bytes 74 1E: je 0x5850933b
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, 1
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 10h]
        mov dl, byte ptr [ecx + edx]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 2D: jmp 0x58509368
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx], 49h
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax], 36h
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx], 34h
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 14h]
        and ecx, 0e00h
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 400h
        ; Exact mapped bytes 75 06: jne 0x58509383
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 3], 6fh
        ; Exact mapped bytes EB 3A: jmp 0x585093bd
        __asm _emit 0xeb
        __asm _emit 0x3a
        cmp dword ptr [ebp - 0ch], 800h
        ; Exact mapped bytes 74 13: je 0x5850939f
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, 1
        shl edx, 0
        mov eax, dword ptr [ebp + 10h]
        mov cl, byte ptr [eax + edx]
        mov byte ptr [ebp - 2], cl
        ; Exact mapped bytes EB 18: jmp 0x585093b7
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [ebp + 14h]
        and edx, 4
        ; Exact mapped bytes 74 06: je 0x585093ad
        __asm _emit 0x74
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 58h
        ; Exact mapped bytes EB 04: jmp 0x585093b1
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 1], 78h
        mov al, byte ptr [ebp - 1]
        mov byte ptr [ebp - 2], al
        mov cl, byte ptr [ebp - 2]
        mov byte ptr [ebp - 3], cl
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [ebp - 3]
        mov byte ptr [edx], al
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx], 0
        mov eax, dword ptr [ebp + 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
