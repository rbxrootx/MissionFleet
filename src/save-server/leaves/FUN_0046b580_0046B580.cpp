// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046B580 .. +0x302 bytes.
extern "C" __declspec(naked) void FUN_0046b580_0046B580() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 51ch
        lea eax, [ebp - 318h]
        push eax
        ; Exact mapped bytes 8B 0D 00 8B 68 00: mov ecx, dword ptr [0x688b00]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 7C B9 68 00: call dword ptr [0x68b97c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 13 02 00 00: jne 0x46b7b9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 51ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x46b5c1
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 51ch]
        add edx, 1
        mov dword ptr [ebp - 51ch], edx
        cmp dword ptr [ebp - 51ch], 100h
        ; Exact mapped bytes 73 15: jae 0x46b5e2
        __asm _emit 0x73
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 51ch]
        mov cl, byte ptr [ebp - 51ch]
        mov byte ptr [ebp + eax - 304h], cl
        ; Exact mapped bytes EB D0: jmp 0x46b5b2
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov byte ptr [ebp - 304h], 20h
        lea edx, [ebp - 312h]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 09: jmp 0x46b5fd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 2
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 74 40: je 0x46b648
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        mov dword ptr [ebp - 51ch], ecx
        ; Exact mapped bytes EB 0F: jmp 0x46b626
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 51ch]
        add edx, 1
        mov dword ptr [ebp - 51ch], edx
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov cl, byte ptr [eax + 1]
        cmp dword ptr [ebp - 51ch], ecx
        ; Exact mapped bytes 77 10: ja 0x46b646
        __asm _emit 0x77
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 51ch]
        mov byte ptr [ebp + edx - 304h], 20h
        ; Exact mapped bytes EB D1: jmp 0x46b617
        __asm _emit 0xeb
        __asm _emit 0xd1
        ; Exact mapped bytes EB AC: jmp 0x46b5f4
        __asm _emit 0xeb
        __asm _emit 0xac
        push 0
        ; Exact mapped bytes A1 A4 8D 68 00: mov eax, dword ptr [0x688da4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 8B 0D 00 8B 68 00: mov ecx, dword ptr [0x688b00]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        lea edx, [ebp - 204h]
        push edx
        push 100h
        lea eax, [ebp - 304h]
        push eax
        push 1
        ; Exact mapped bytes E8 2F B3 00 00: call 0x4769a0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        push 0
        ; Exact mapped bytes 8B 0D 00 8B 68 00: mov ecx, dword ptr [0x688b00]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        push 100h
        lea edx, [ebp - 418h]
        push edx
        push 100h
        lea eax, [ebp - 304h]
        push eax
        push 100h
        ; Exact mapped bytes 8B 0D A4 8D 68 00: mov ecx, dword ptr [0x688da4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 3A A8 00 00: call 0x475ee0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        push 0
        ; Exact mapped bytes 8B 15 00 8B 68 00: mov edx, dword ptr [0x688b00]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        push 100h
        lea eax, [ebp - 518h]
        push eax
        push 100h
        lea ecx, [ebp - 304h]
        push ecx
        push 200h
        ; Exact mapped bytes 8B 15 A4 8D 68 00: mov edx, dword ptr [0x688da4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 05 A8 00 00: call 0x475ee0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        mov dword ptr [ebp - 51ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x46b6f9
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 51ch]
        add eax, 1
        mov dword ptr [ebp - 51ch], eax
        cmp dword ptr [ebp - 51ch], 100h
        ; Exact mapped bytes 0F 83 AB 00 00 00: jae 0x46b7b4
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 51ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 94 4D FC FD FF FF: mov dx, word ptr [ebp + ecx*2 - 0x204]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x4d
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 36: je 0x46b756
        __asm _emit 0x74
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 51ch]
        mov cl, byte ptr [eax + 688ca1h]
        or cl, 10h
        mov edx, dword ptr [ebp - 51ch]
        mov byte ptr [edx + 688ca1h], cl
        mov eax, dword ptr [ebp - 51ch]
        mov ecx, dword ptr [ebp - 51ch]
        mov dl, byte ptr [ebp + ecx - 418h]
        mov byte ptr [eax + 688ba0h], dl
        ; Exact mapped bytes EB 59: jmp 0x46b7af
        __asm _emit 0xeb
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 51ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8C 45 FC FD FF FF: mov cx, word ptr [ebp + eax*2 - 0x204]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 35: je 0x46b7a2
        __asm _emit 0x74
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 51ch]
        mov al, byte ptr [edx + 688ca1h]
        or al, 20h
        mov ecx, dword ptr [ebp - 51ch]
        mov byte ptr [ecx + 688ca1h], al
        mov edx, dword ptr [ebp - 51ch]
        mov eax, dword ptr [ebp - 51ch]
        mov cl, byte ptr [ebp + eax - 518h]
        mov byte ptr [edx + 688ba0h], cl
        ; Exact mapped bytes EB 0D: jmp 0x46b7af
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 51ch]
        mov byte ptr [edx + 688ba0h], 0
        ; Exact mapped bytes E9 36 FF FF FF: jmp 0x46b6ea
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x46b87e
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 51ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x46b7d4
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 51ch]
        add eax, 1
        mov dword ptr [ebp - 51ch], eax
        cmp dword ptr [ebp - 51ch], 100h
        ; Exact mapped bytes 0F 83 9A 00 00 00: jae 0x46b87e
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 51ch], 41h
        ; Exact mapped bytes 72 3B: jb 0x46b828
        __asm _emit 0x72
        __asm _emit 0x3b
        cmp dword ptr [ebp - 51ch], 5ah
        ; Exact mapped bytes 77 32: ja 0x46b828
        __asm _emit 0x77
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 51ch]
        mov dl, byte ptr [ecx + 688ca1h]
        or dl, 10h
        mov eax, dword ptr [ebp - 51ch]
        mov byte ptr [eax + 688ca1h], dl
        mov ecx, dword ptr [ebp - 51ch]
        add ecx, 20h
        mov edx, dword ptr [ebp - 51ch]
        mov byte ptr [edx + 688ba0h], cl
        ; Exact mapped bytes EB 51: jmp 0x46b879
        __asm _emit 0xeb
        __asm _emit 0x51
        cmp dword ptr [ebp - 51ch], 61h
        ; Exact mapped bytes 72 3B: jb 0x46b86c
        __asm _emit 0x72
        __asm _emit 0x3b
        cmp dword ptr [ebp - 51ch], 7ah
        ; Exact mapped bytes 77 32: ja 0x46b86c
        __asm _emit 0x77
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 51ch]
        mov cl, byte ptr [eax + 688ca1h]
        or cl, 20h
        mov edx, dword ptr [ebp - 51ch]
        mov byte ptr [edx + 688ca1h], cl
        mov eax, dword ptr [ebp - 51ch]
        sub eax, 20h
        mov ecx, dword ptr [ebp - 51ch]
        mov byte ptr [ecx + 688ba0h], al
        ; Exact mapped bytes EB 0D: jmp 0x46b879
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 51ch]
        mov byte ptr [edx + 688ba0h], 0
        ; Exact mapped bytes E9 47 FF FF FF: jmp 0x46b7c5
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
