// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Splits a byte string in place using a delimiter set represented by a 256-bit map.
// Indexed function extent: 0x58857B70 .. +0xE9 bytes.
extern "C" __declspec(naked) void FUN_58857b70() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 28h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        push edi
        mov edi, dword ptr [ebp + 10h]
        test edi, edi
        ; Exact mapped bytes 75 21: jne 0x58857bb1
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes E8 DA A8 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 0B 94 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 A3 94 FD FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
        test edx, edx
        ; Exact mapped bytes 74 DB: je 0x58857b90
        __asm _emit 0x74
        __asm _emit 0xdb
        test ecx, ecx
        ; Exact mapped bytes 75 04: jne 0x58857bbd
        __asm _emit 0x75
        __asm _emit 0x04
        cmp dword ptr [edi], ecx
        ; Exact mapped bytes 74 D3: je 0x58857b90
        __asm _emit 0x74
        __asm _emit 0xd3
        mov al, byte ptr [edx]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        push ebx
        push esi
        ; Exact mapped bytes 0F 11 45 DC: movups xmmword ptr [ebp - 0x24], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 11 45 EC: movups xmmword ptr [ebp - 0x14], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xec
        test al, al
        ; Exact mapped bytes 74 13: je 0x58857be3
        __asm _emit 0x74
        __asm _emit 0x13
        movzx eax, al
        lea esi, [ebp - 24h]
        bts dword ptr [esi], eax
        mov al, byte ptr [edx + 1]
        lea edx, [edx + 1]
        test al, al
        ; Exact mapped bytes 75 ED: jne 0x58857bd0
        __asm _emit 0x75
        __asm _emit 0xed
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x58857be9
        __asm _emit 0x75
        __asm _emit 0x02
        mov ecx, dword ptr [edi]
        mov dl, byte ptr [ecx]
        test dl, dl
        ; Exact mapped bytes 74 1D: je 0x58857c0c
        __asm _emit 0x74
        __asm _emit 0x1d
        mov al, dl
        mov bl, dl
        mov dl, al
        lea esi, [ebp - 24h]
        movzx eax, bl
        bt dword ptr [esi], eax
        ; Exact mapped bytes 73 0C: jae 0x58857c0c
        __asm _emit 0x73
        __asm _emit 0x0c
        mov dl, byte ptr [ecx + 1]
        inc ecx
        mov al, dl
        mov bl, dl
        test al, al
        ; Exact mapped bytes 75 E7: jne 0x58857bf3
        __asm _emit 0x75
        __asm _emit 0xe7
        mov dword ptr [ebp - 28h], ecx
        mov ebx, ecx
        mov esi, ecx
        test dl, dl
        ; Exact mapped bytes 74 27: je 0x58857c3e
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, ecx
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [eax + 1]
        movzx eax, byte ptr [eax]
        lea edx, [ebp - 24h]
        bt dword ptr [edx], eax
        ; Exact mapped bytes 72 0B: jb 0x58857c39
        __asm _emit 0x72
        __asm _emit 0x0b
        mov ecx, esi
        mov eax, esi
        cmp byte ptr [ecx], 0
        ; Exact mapped bytes 75 E9: jne 0x58857c20
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes EB 05: jmp 0x58857c3e
        __asm _emit 0xeb
        __asm _emit 0x05
        mov byte ptr [ecx], 0
        mov ecx, esi
        xor eax, eax
        mov dword ptr [edi], ecx
        cmp esi, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 4]
        cmovne eax, ebx
        xor ecx, ebp
        pop esi
        pop ebx
        pop edi
        ; Exact mapped bytes E8 FB 93 FD FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
