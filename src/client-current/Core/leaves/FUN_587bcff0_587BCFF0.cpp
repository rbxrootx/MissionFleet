// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BCFF0 .. +0x517 bytes.
extern "C" __declspec(naked) void FUN_587bcff0_587BCFF0() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 08 05 00 00: je 0x587bd505
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D 1C 5F 96 58: mov ecx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes A1 20 5F 96 58: mov eax, dword ptr [0x58965f20]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 15 8C 5F 90 58: mov edx, dword ptr [0x58905f8c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D 28 5F 96 58: mov ecx, dword ptr [0x58965f28]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes A1 94 5F 96 58: mov eax, dword ptr [0x58965f94]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [edx + 10h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 15 98 5F 96 58: mov edx, dword ptr [0x58965f98]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ecx + 14h], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D A8 5F 96 58: mov ecx, dword ptr [0x58965fa8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [eax + 18h], ecx
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes A1 9C 5F 96 58: mov eax, dword ptr [0x58965f9c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [edx + 1ch], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 15 A0 5F 96 58: mov edx, dword ptr [0x58965fa0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ecx + 20h], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D A4 5F 96 58: mov ecx, dword ptr [0x58965fa4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [eax + 24h], ecx
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes A1 34 5F 96 58: mov eax, dword ptr [0x58965f34]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [edx + 28h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 15 38 5F 96 58: mov edx, dword ptr [0x58965f38]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ecx + 2ch], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D 90 5F 90 58: mov ecx, dword ptr [0x58905f90]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [eax + 30h], ecx
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes A1 94 5F 90 58: mov eax, dword ptr [0x58905f94]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [edx + 34h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 15 98 5F 90 58: mov edx, dword ptr [0x58905f98]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ecx + 38h], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D 9C 5F 90 58: mov ecx, dword ptr [0x58905f9c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [eax + 3ch], ecx
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes A1 A0 5F 90 58: mov eax, dword ptr [0x58905fa0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [edx + 40h], eax
        mov ecx, 1
        imul edx, ecx, 0
        mov eax, 1
        imul ecx, eax, 0
        mov eax, dword ptr [ebp + 8]
        mov dl, byte ptr [edx + 58965f3ch]
        mov byte ptr [eax + ecx + 44h], dl
        mov eax, 1
        shl eax, 0
        mov ecx, 1
        shl ecx, 0
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [eax + 58965f3ch]
        mov byte ptr [edx + ecx + 44h], al
        mov ecx, 1
        shl ecx, 1
        mov edx, 1
        shl edx, 1
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [ecx + 58965f3ch]
        mov byte ptr [eax + edx + 44h], cl
        mov edx, 1
        imul eax, edx, 3
        mov ecx, 1
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp + 8]
        mov al, byte ptr [eax + 58965f3ch]
        mov byte ptr [ecx + edx + 44h], al
        mov ecx, 1
        shl ecx, 2
        mov edx, 1
        shl edx, 2
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [ecx + 58965f3ch]
        mov byte ptr [eax + edx + 44h], cl
        mov edx, 1
        imul eax, edx, 5
        mov ecx, 1
        imul edx, ecx, 5
        mov ecx, dword ptr [ebp + 8]
        mov al, byte ptr [eax + 58965f3ch]
        mov byte ptr [ecx + edx + 44h], al
        mov ecx, 1
        imul edx, ecx, 6
        mov eax, 1
        imul ecx, eax, 6
        mov eax, dword ptr [ebp + 8]
        mov dl, byte ptr [edx + 58965f3ch]
        mov byte ptr [eax + ecx + 44h], dl
        mov eax, 1
        imul ecx, eax, 7
        mov edx, 1
        imul eax, edx, 7
        mov edx, dword ptr [ebp + 8]
        mov cl, byte ptr [ecx + 58965f3ch]
        mov byte ptr [edx + eax + 44h], cl
        mov edx, 1
        imul eax, edx, 0
        mov ecx, 1
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp + 8]
        mov al, byte ptr [eax + 58965f44h]
        mov byte ptr [ecx + edx + 4ch], al
        mov ecx, 1
        shl ecx, 0
        mov edx, 1
        shl edx, 0
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [ecx + 58965f44h]
        mov byte ptr [eax + edx + 4ch], cl
        mov edx, 1
        shl edx, 1
        mov eax, 1
        shl eax, 1
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [edx + 58965f44h]
        mov byte ptr [ecx + eax + 4ch], dl
        mov eax, 1
        imul ecx, eax, 3
        mov edx, 1
        imul eax, edx, 3
        mov edx, dword ptr [ebp + 8]
        mov cl, byte ptr [ecx + 58965f44h]
        mov byte ptr [edx + eax + 4ch], cl
        mov edx, 1
        shl edx, 2
        mov eax, 1
        shl eax, 2
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [edx + 58965f44h]
        mov byte ptr [ecx + eax + 4ch], dl
        mov eax, 1
        imul ecx, eax, 5
        mov edx, 1
        imul eax, edx, 5
        mov edx, dword ptr [ebp + 8]
        mov cl, byte ptr [ecx + 58965f44h]
        mov byte ptr [edx + eax + 4ch], cl
        mov edx, 1
        imul eax, edx, 6
        mov ecx, 1
        imul edx, ecx, 6
        mov ecx, dword ptr [ebp + 8]
        mov al, byte ptr [eax + 58965f44h]
        mov byte ptr [ecx + edx + 4ch], al
        mov ecx, 1
        imul edx, ecx, 7
        mov eax, 1
        imul ecx, eax, 7
        mov eax, dword ptr [ebp + 8]
        mov dl, byte ptr [edx + 58965f44h]
        mov byte ptr [eax + ecx + 4ch], dl
        mov eax, 1
        imul ecx, eax, 0
        mov edx, 1
        imul eax, edx, 0
        mov edx, dword ptr [ebp + 8]
        mov cl, byte ptr [ecx + 58965f4ch]
        mov byte ptr [edx + eax + 54h], cl
        mov edx, 1
        shl edx, 0
        mov eax, 1
        shl eax, 0
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [edx + 58965f4ch]
        mov byte ptr [ecx + eax + 54h], dl
        mov eax, 1
        shl eax, 1
        mov ecx, 1
        shl ecx, 1
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [eax + 58965f4ch]
        mov byte ptr [edx + ecx + 54h], al
        mov ecx, 1
        imul edx, ecx, 3
        mov eax, 1
        imul ecx, eax, 3
        mov eax, dword ptr [ebp + 8]
        mov dl, byte ptr [edx + 58965f4ch]
        mov byte ptr [eax + ecx + 54h], dl
        mov eax, 1
        shl eax, 2
        mov ecx, 1
        shl ecx, 2
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [eax + 58965f4ch]
        mov byte ptr [edx + ecx + 54h], al
        mov ecx, 1
        imul edx, ecx, 5
        mov eax, 1
        imul ecx, eax, 5
        mov eax, dword ptr [ebp + 8]
        mov dl, byte ptr [edx + 58965f4ch]
        mov byte ptr [eax + ecx + 54h], dl
        mov eax, 1
        imul ecx, eax, 6
        mov edx, 1
        imul eax, edx, 6
        mov edx, dword ptr [ebp + 8]
        mov cl, byte ptr [ecx + 58965f4ch]
        mov byte ptr [edx + eax + 54h], cl
        mov edx, 1
        imul eax, edx, 7
        mov ecx, 1
        imul edx, ecx, 7
        mov ecx, dword ptr [ebp + 8]
        mov al, byte ptr [eax + 58965f4ch]
        mov byte ptr [ecx + edx + 54h], al
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 58965f54h]
        mov dword ptr [eax + ecx + 5ch], edx
        mov eax, 4
        shl eax, 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 58965f54h]
        mov dword ptr [edx + ecx + 5ch], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 58965f5ch]
        mov dword ptr [eax + ecx + 64h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 58965f5ch]
        mov dword ptr [edx + ecx + 64h], eax
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, 2
        imul ecx, eax, 0
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 92 64 5F 96 58: mov dx, word ptr [edx + 0x58965f64]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x64
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 54 08 6C: mov word ptr [eax + ecx + 0x6c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x6c
        mov eax, 2
        shl eax, 0
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 80 64 5F 96 58: mov ax, word ptr [eax + 0x58965f64]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x64
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 44 0A 6C: mov word ptr [edx + ecx + 0x6c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x6c
        mov ecx, 2
        shl ecx, 1
        mov edx, 2
        shl edx, 1
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 89 64 5F 96 58: mov cx, word ptr [ecx + 0x58965f64]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x64
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 4C 10 6C: mov word ptr [eax + edx + 0x6c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x6c
        mov edx, 2
        imul eax, edx, 3
        mov ecx, 2
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 80 64 5F 96 58: mov ax, word ptr [eax + 0x58965f64]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x64
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 44 11 6C: mov word ptr [ecx + edx + 0x6c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x6c
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, 2
        imul ecx, eax, 0
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 92 6C 5F 96 58: mov dx, word ptr [edx + 0x58965f6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x6c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 54 08 74: mov word ptr [eax + ecx + 0x74], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x74
        mov eax, 2
        shl eax, 0
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 80 6C 5F 96 58: mov ax, word ptr [eax + 0x58965f6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x6c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 44 0A 74: mov word ptr [edx + ecx + 0x74], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x74
        mov ecx, 2
        shl ecx, 1
        mov edx, 2
        shl edx, 1
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 89 6C 5F 96 58: mov cx, word ptr [ecx + 0x58965f6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x89
        __asm _emit 0x6c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 4C 10 74: mov word ptr [eax + edx + 0x74], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x74
        mov edx, 2
        imul eax, edx, 3
        mov ecx, 2
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 80 6C 5F 96 58: mov ax, word ptr [eax + 0x58965f6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x6c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 44 11 74: mov word ptr [ecx + edx + 0x74], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x74
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 15 74 5F 96 58: mov edx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ecx + 7ch], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D 78 5F 96 58: mov ecx, dword ptr [0x58965f78]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [eax + 80h], ecx
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes A1 24 5F 96 58: mov eax, dword ptr [0x58965f24]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [edx + 84h], eax
        pop ebp
        ret
    }
}
