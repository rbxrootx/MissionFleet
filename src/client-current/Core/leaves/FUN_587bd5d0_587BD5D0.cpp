// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BD5D0 .. +0x512 bytes.
extern "C" __declspec(naked) void FUN_587bd5d0_587BD5D0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 89 0D 1C 5F 96 58: mov dword ptr [0x58965f1c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes A3 20 5F 96 58: mov dword ptr [0x58965f20], eax
        __asm _emit 0xa3
        __asm _emit 0x20
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 89 15 8C 5F 90 58: mov dword ptr [0x58905f8c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 89 0D 28 5F 96 58: mov dword ptr [0x58965f28], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 10h]
        ; Exact mapped bytes A3 94 5F 96 58: mov dword ptr [0x58965f94], eax
        __asm _emit 0xa3
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 14h]
        ; Exact mapped bytes 89 15 98 5F 96 58: mov dword ptr [0x58965f98], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 18h]
        ; Exact mapped bytes 89 0D A8 5F 96 58: mov dword ptr [0x58965fa8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes A3 9C 5F 96 58: mov dword ptr [0x58965f9c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 20h]
        ; Exact mapped bytes 89 15 A0 5F 96 58: mov dword ptr [0x58965fa0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 24h]
        ; Exact mapped bytes 89 0D A4 5F 96 58: mov dword ptr [0x58965fa4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 28h]
        ; Exact mapped bytes A3 34 5F 96 58: mov dword ptr [0x58965f34], eax
        __asm _emit 0xa3
        __asm _emit 0x34
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes 89 15 38 5F 96 58: mov dword ptr [0x58965f38], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes 89 0D 90 5F 90 58: mov dword ptr [0x58905f90], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 34h]
        ; Exact mapped bytes A3 94 5F 90 58: mov dword ptr [0x58905f94], eax
        __asm _emit 0xa3
        __asm _emit 0x94
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 38h]
        ; Exact mapped bytes 89 15 98 5F 90 58: mov dword ptr [0x58905f98], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 3ch]
        ; Exact mapped bytes 89 0D 9C 5F 90 58: mov dword ptr [0x58905f9c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 40h]
        ; Exact mapped bytes A3 A0 5F 90 58: mov dword ptr [0x58905fa0], eax
        __asm _emit 0xa3
        __asm _emit 0xa0
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        mov ecx, 1
        imul edx, ecx, 0
        mov eax, 1
        imul ecx, eax, 0
        mov eax, dword ptr [ebp + 8]
        mov dl, byte ptr [eax + edx + 44h]
        mov byte ptr [ecx + 58965f3ch], dl
        mov eax, 1
        shl eax, 0
        mov ecx, 1
        shl ecx, 0
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx + eax + 44h]
        mov byte ptr [ecx + 58965f3ch], al
        mov ecx, 1
        shl ecx, 1
        mov edx, 1
        shl edx, 1
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax + ecx + 44h]
        mov byte ptr [edx + 58965f3ch], cl
        mov edx, 1
        imul eax, edx, 3
        mov ecx, 1
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp + 8]
        mov al, byte ptr [ecx + eax + 44h]
        mov byte ptr [edx + 58965f3ch], al
        mov ecx, 1
        shl ecx, 2
        mov edx, 1
        shl edx, 2
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax + ecx + 44h]
        mov byte ptr [edx + 58965f3ch], cl
        mov edx, 1
        imul eax, edx, 5
        mov ecx, 1
        imul edx, ecx, 5
        mov ecx, dword ptr [ebp + 8]
        mov al, byte ptr [ecx + eax + 44h]
        mov byte ptr [edx + 58965f3ch], al
        mov ecx, 1
        imul edx, ecx, 6
        mov eax, 1
        imul ecx, eax, 6
        mov eax, dword ptr [ebp + 8]
        mov dl, byte ptr [eax + edx + 44h]
        mov byte ptr [ecx + 58965f3ch], dl
        mov eax, 1
        imul ecx, eax, 7
        mov edx, 1
        imul eax, edx, 7
        mov edx, dword ptr [ebp + 8]
        mov cl, byte ptr [edx + ecx + 44h]
        mov byte ptr [eax + 58965f3ch], cl
        mov edx, 1
        imul eax, edx, 0
        mov ecx, 1
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp + 8]
        mov al, byte ptr [ecx + eax + 4ch]
        mov byte ptr [edx + 58965f44h], al
        mov ecx, 1
        shl ecx, 0
        mov edx, 1
        shl edx, 0
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax + ecx + 4ch]
        mov byte ptr [edx + 58965f44h], cl
        mov edx, 1
        shl edx, 1
        mov eax, 1
        shl eax, 1
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ecx + edx + 4ch]
        mov byte ptr [eax + 58965f44h], dl
        mov eax, 1
        imul ecx, eax, 3
        mov edx, 1
        imul eax, edx, 3
        mov edx, dword ptr [ebp + 8]
        mov cl, byte ptr [edx + ecx + 4ch]
        mov byte ptr [eax + 58965f44h], cl
        mov edx, 1
        shl edx, 2
        mov eax, 1
        shl eax, 2
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ecx + edx + 4ch]
        mov byte ptr [eax + 58965f44h], dl
        mov eax, 1
        imul ecx, eax, 5
        mov edx, 1
        imul eax, edx, 5
        mov edx, dword ptr [ebp + 8]
        mov cl, byte ptr [edx + ecx + 4ch]
        mov byte ptr [eax + 58965f44h], cl
        mov edx, 1
        imul eax, edx, 6
        mov ecx, 1
        imul edx, ecx, 6
        mov ecx, dword ptr [ebp + 8]
        mov al, byte ptr [ecx + eax + 4ch]
        mov byte ptr [edx + 58965f44h], al
        mov ecx, 1
        imul edx, ecx, 7
        mov eax, 1
        imul ecx, eax, 7
        mov eax, dword ptr [ebp + 8]
        mov dl, byte ptr [eax + edx + 4ch]
        mov byte ptr [ecx + 58965f44h], dl
        mov eax, 1
        imul ecx, eax, 0
        mov edx, 1
        imul eax, edx, 0
        mov edx, dword ptr [ebp + 8]
        mov cl, byte ptr [edx + ecx + 54h]
        mov byte ptr [eax + 58965f4ch], cl
        mov edx, 1
        shl edx, 0
        mov eax, 1
        shl eax, 0
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ecx + edx + 54h]
        mov byte ptr [eax + 58965f4ch], dl
        mov eax, 1
        shl eax, 1
        mov ecx, 1
        shl ecx, 1
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx + eax + 54h]
        mov byte ptr [ecx + 58965f4ch], al
        mov ecx, 1
        imul edx, ecx, 3
        mov eax, 1
        imul ecx, eax, 3
        mov eax, dword ptr [ebp + 8]
        mov dl, byte ptr [eax + edx + 54h]
        mov byte ptr [ecx + 58965f4ch], dl
        mov eax, 1
        shl eax, 2
        mov ecx, 1
        shl ecx, 2
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx + eax + 54h]
        mov byte ptr [ecx + 58965f4ch], al
        mov ecx, 1
        imul edx, ecx, 5
        mov eax, 1
        imul ecx, eax, 5
        mov eax, dword ptr [ebp + 8]
        mov dl, byte ptr [eax + edx + 54h]
        mov byte ptr [ecx + 58965f4ch], dl
        mov eax, 1
        imul ecx, eax, 6
        mov edx, 1
        imul eax, edx, 6
        mov edx, dword ptr [ebp + 8]
        mov cl, byte ptr [edx + ecx + 54h]
        mov byte ptr [eax + 58965f4ch], cl
        mov edx, 1
        imul eax, edx, 7
        mov ecx, 1
        imul edx, ecx, 7
        mov ecx, dword ptr [ebp + 8]
        mov al, byte ptr [ecx + eax + 54h]
        mov byte ptr [edx + 58965f4ch], al
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + edx + 5ch]
        mov dword ptr [ecx + 58965f54h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + eax + 5ch]
        mov dword ptr [ecx + 58965f54h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + edx + 64h]
        mov dword ptr [ecx + 58965f5ch], edx
        mov eax, 4
        shl eax, 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + eax + 64h]
        mov dword ptr [ecx + 58965f5ch], eax
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, 2
        imul ecx, eax, 0
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 54 10 6C: mov dx, word ptr [eax + edx + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x10
        __asm _emit 0x6c
        ; Exact mapped bytes 66 89 91 64 5F 96 58: mov word ptr [ecx + 0x58965f64], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x64
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, 2
        shl eax, 0
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 44 02 6C: mov ax, word ptr [edx + eax + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x6c
        ; Exact mapped bytes 66 89 81 64 5F 96 58: mov word ptr [ecx + 0x58965f64], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, 2
        shl ecx, 1
        mov edx, 2
        shl edx, 1
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 4C 08 6C: mov cx, word ptr [eax + ecx + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x6c
        ; Exact mapped bytes 66 89 8A 64 5F 96 58: mov word ptr [edx + 0x58965f64], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x64
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, 2
        imul eax, edx, 3
        mov ecx, 2
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 44 01 6C: mov ax, word ptr [ecx + eax + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x6c
        ; Exact mapped bytes 66 89 82 64 5F 96 58: mov word ptr [edx + 0x58965f64], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x64
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, 2
        imul ecx, eax, 0
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 54 10 74: mov dx, word ptr [eax + edx + 0x74]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x10
        __asm _emit 0x74
        ; Exact mapped bytes 66 89 91 6C 5F 96 58: mov word ptr [ecx + 0x58965f6c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x6c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, 2
        shl eax, 0
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 44 02 74: mov ax, word ptr [edx + eax + 0x74]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x74
        ; Exact mapped bytes 66 89 81 6C 5F 96 58: mov word ptr [ecx + 0x58965f6c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x6c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, 2
        shl ecx, 1
        mov edx, 2
        shl edx, 1
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 4C 08 74: mov cx, word ptr [eax + ecx + 0x74]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x74
        ; Exact mapped bytes 66 89 8A 6C 5F 96 58: mov word ptr [edx + 0x58965f6c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x6c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, 2
        imul eax, edx, 3
        mov ecx, 2
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 44 01 74: mov ax, word ptr [ecx + eax + 0x74]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x74
        ; Exact mapped bytes 66 89 82 6C 5F 96 58: mov word ptr [edx + 0x58965f6c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x6c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes 89 15 74 5F 96 58: mov dword ptr [0x58965f74], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 80h]
        ; Exact mapped bytes 89 0D 78 5F 96 58: mov dword ptr [0x58965f78], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 84h]
        ; Exact mapped bytes A3 24 5F 96 58: mov dword ptr [0x58965f24], eax
        __asm _emit 0xa3
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, 1
        pop ebp
        ret
    }
}
