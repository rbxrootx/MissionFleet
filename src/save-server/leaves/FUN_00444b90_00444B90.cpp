// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00444B90 .. +0x750 bytes.
extern "C" __declspec(naked) void FUN_00444b90_00444B90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 75 0B: jne 0x444bbe
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 3A: jmp 0x444bf8
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 75 0B: jne 0x444bd2
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 26: jmp 0x444bf8
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 0B: je 0x444bef
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB EC: jmp 0x444bdb
        __asm _emit 0xeb
        __asm _emit 0xec
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x444cdb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 74 41: je 0x444c68
        __asm _emit 0x74
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0C: je 0x444c42
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes EB 06: jmp 0x444c6e
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0A: jne 0x444c82
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 28: jmp 0x444caa
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 8]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0E: jne 0x444c9e
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 8], edx
        ; Exact mapped bytes EB 0C: jmp 0x444caa
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp - 0ch]
        mov cl, byte ptr [eax]
        mov byte ptr [ebp - 18h], cl
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [ebp - 18h]
        mov byte ptr [edx], al
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes E9 DB 00 00 00: jmp 0x444db6
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0C: je 0x444cf6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0A: jne 0x444d0a
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 28: jmp 0x444d32
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 8]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0E: jne 0x444d26
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 8], ecx
        ; Exact mapped bytes EB 0C: jmp 0x444d32
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 38: jne 0x444d74
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 75 0D: jne 0x444d52
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes EB 22: jmp 0x444d74
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 0B: je 0x444d6c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB EC: jmp 0x444d58
        __asm _emit 0xeb
        __asm _emit 0xec
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 38: jne 0x444db6
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 75 0D: jne 0x444d94
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes EB 22: jmp 0x444db6
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 0B: je 0x444dae
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB EC: jmp 0x444d9a
        __asm _emit 0xeb
        __asm _emit 0xec
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 0ch]
        xor eax, eax
        mov al, byte ptr [edx]
        test eax, eax
        ; Exact mapped bytes 0F 84 14 05 00 00: je 0x4452d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 0F 84 FA 04 00 00: je 0x4452cd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 10: je 0x444de9
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 E4 04 00 00: jne 0x4452cd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 0F 85 6C 02 00 00: jne 0x445064
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 99 00 00 00: jne 0x444ea9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx], 1
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 0C: je 0x444e46
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 75 0A: jne 0x444e66
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 28: jmp 0x444e8e
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 75 0E: jne 0x444e82
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + 8], ecx
        ; Exact mapped bytes EB 0C: jmp 0x444e8e
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 0F: je 0x444ec1
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        cmp edx, 1
        ; Exact mapped bytes 75 32: jne 0x444ef3
        __asm _emit 0x75
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 0F: je 0x444ed9
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        xor eax, eax
        mov al, byte ptr [edx]
        cmp eax, 1
        ; Exact mapped bytes 75 1A: jne 0x444ef3
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E9 6C 01 00 00: jmp 0x44505f
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 74 13: je 0x444f0f
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx]
        cmp edx, 1
        ; Exact mapped bytes 0F 85 A5 00 00 00: jne 0x444fb4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 09: je 0x444f21
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov byte ptr [edx], 1
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 0C: je 0x444f51
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 75 0A: jne 0x444f71
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 28: jmp 0x444f99
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 75 0E: jne 0x444f8d
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax + 0ch], ecx
        ; Exact mapped bytes EB 0C: jmp 0x444f99
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], 1
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 09: je 0x444fd6
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        mov byte ptr [edx], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 0C: je 0x445000
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 0A: jne 0x445020
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [edx], eax
        ; Exact mapped bytes EB 28: jmp 0x445048
        __asm _emit 0xeb
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 75 0E: jne 0x44503c
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 8], eax
        ; Exact mapped bytes EB 0C: jmp 0x445048
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes E9 6E 02 00 00: jmp 0x4452cd
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 64 02 00 00: jmp 0x4452c8
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 0F 85 99 00 00 00: jne 0x445115
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov byte ptr [eax], 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ecx + 8], eax
        mov ecx, dword ptr [ebp - 30h]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 0C: je 0x4450b2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 75 0A: jne 0x4450d2
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 28: jmp 0x4450fa
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 75 0E: jne 0x4450ee
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 0ch], edx
        ; Exact mapped bytes EB 0C: jmp 0x4450fa
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 0F: je 0x44512d
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0ch]
        xor eax, eax
        mov al, byte ptr [edx]
        cmp eax, 1
        ; Exact mapped bytes 75 32: jne 0x44515f
        __asm _emit 0x75
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 0F: je 0x445145
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        cmp ecx, 1
        ; Exact mapped bytes 75 1A: jne 0x44515f
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 14h]
        mov byte ptr [edx], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes E9 69 01 00 00: jmp 0x4452c8
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 13: je 0x44517b
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        xor eax, eax
        mov al, byte ptr [edx]
        cmp eax, 1
        ; Exact mapped bytes 0F 85 A5 00 00 00: jne 0x445220
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 09: je 0x44518d
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        mov byte ptr [eax], 1
        mov ecx, dword ptr [ebp - 14h]
        mov byte ptr [ecx], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 34h]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 0C: je 0x4451bd
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 75 0A: jne 0x4451dd
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 28: jmp 0x445205
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 75 0E: jne 0x4451f9
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ecx + 8], edx
        ; Exact mapped bytes EB 0C: jmp 0x445205
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ecx + 0ch], edx
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax], 1
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 09: je 0x445242
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 8]
        mov byte ptr [eax], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 0C: je 0x44526c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 75 0A: jne 0x44528c
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 28: jmp 0x4452b4
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 75 0E: jne 0x4452a8
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [eax + 0ch], ecx
        ; Exact mapped bytes EB 0C: jmp 0x4452b4
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ecx + 4], edx
        ; Exact mapped bytes EB 05: jmp 0x4452cd
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 F8 FA FF FF: jmp 0x444dc5
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 06: je 0x4452d9
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax], 1
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
