// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00444310 .. +0x4FB bytes.
extern "C" __declspec(naked) void FUN_00444310_00444310() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0e0h
        mov dword ptr [ebp - 0c0h], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 DC 04 00 00: je 0x444805
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0c0h]
        mov ecx, dword ptr [ebp - 0c0h]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx + 4]
        sar edx, 2
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 82 38 02 00 00: jb 0x44457f
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0c0h]
        mov eax, dword ptr [edx + 4]
        sub eax, dword ptr [ebp + 8]
        sar eax, 2
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0c0h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 86 FB 00 00 00: jbe 0x444474
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c0h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 0c0h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        shl edx, 2
        mov eax, dword ptr [ebp - 0c0h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, edx
        mov dword ptr [ebp - 38h], ecx
        mov dl, byte ptr [ebp - 24h]
        mov byte ptr [ebp - 20h], dl
        mov al, byte ptr [ebp - 30h]
        mov byte ptr [ebp - 28h], al
        mov cl, byte ptr [ebp - 34h]
        mov byte ptr [ebp - 2ch], cl
        mov edx, dword ptr [ebp - 3ch]
        cmp edx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 75 0B: jne 0x4443ca
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes EB 25: jmp 0x4443ef
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 3ch]
        sub ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 82 18 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 3ch]
        sub ecx, dword ptr [ebp - 38h]
        add eax, ecx
        mov dword ptr [ebp - 0c4h], eax
        mov edx, dword ptr [ebp - 0c0h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [eax + ecx*4]
        mov eax, dword ptr [ebp - 0c0h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 0ch]
        shl ecx, 2
        mov edx, dword ptr [ebp - 8]
        sub edx, ecx
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 7E 1F: jle 0x44443d
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 44h]
        push edx
        ; Exact mapped bytes E8 2E 18 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0c8h], eax
        ; Exact mapped bytes EB 09: jmp 0x444446
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0c8h], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 48h], ecx
        ; Exact mapped bytes EB 09: jmp 0x444457
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 48h]
        add edx, 4
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [ecx + eax*4]
        cmp dword ptr [ebp - 48h], edx
        ; Exact mapped bytes 74 0A: je 0x44446f
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB DF: jmp 0x44444e
        __asm _emit 0xeb
        __asm _emit 0xdf
        ; Exact mapped bytes E9 06 01 00 00: jmp 0x44457a
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0c0h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 64h], eax
        mov cl, byte ptr [ebp - 54h]
        mov byte ptr [ebp - 4ch], cl
        mov dl, byte ptr [ebp - 58h]
        mov byte ptr [ebp - 50h], dl
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 5ch], ecx
        ; Exact mapped bytes EB 12: jmp 0x4444af
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 60h]
        sub edx, 1
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp - 5ch]
        add eax, 4
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 76 0A: jbe 0x4444bf
        __asm _emit 0x76
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB DE: jmp 0x44449d
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 0c0h]
        mov edx, dword ptr [ecx + 4]
        lea eax, [edx + eax*4]
        mov ecx, dword ptr [ebp - 0c0h]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 0c0h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 80h], eax
        mov cl, byte ptr [ebp - 6ch]
        mov byte ptr [ebp - 68h], cl
        mov dl, byte ptr [ebp - 78h]
        mov byte ptr [ebp - 70h], dl
        mov al, byte ptr [ebp - 7ch]
        mov byte ptr [ebp - 74h], al
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0B: jne 0x44450b
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 0cch], edx
        ; Exact mapped bytes EB 25: jmp 0x444530
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 80h]
        push edx
        ; Exact mapped bytes E8 41 17 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp + 8]
        add eax, ecx
        mov dword ptr [ebp - 0cch], eax
        mov edx, dword ptr [ebp - 0c0h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [eax + ecx*4]
        mov eax, dword ptr [ebp - 0c0h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 84h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x444562
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 84h]
        add edx, 4
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 84h]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 0D: je 0x44457a
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 84h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB D9: jmp 0x444553
        __asm _emit 0xeb
        __asm _emit 0xd9
        ; Exact mapped bytes E9 86 02 00 00: jmp 0x444805
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0bch], eax
        mov ecx, dword ptr [ebp - 0c0h]
        mov edx, dword ptr [ebp - 0c0h]
        mov eax, dword ptr [ecx + 4]
        sub eax, dword ptr [edx]
        sar eax, 2
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 90h]
        cmp ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes 73 0E: jae 0x4445be
        __asm _emit 0x73
        __asm _emit 0x0e
        lea edx, [ebp - 0bch]
        mov dword ptr [ebp - 0d0h], edx
        ; Exact mapped bytes EB 0C: jmp 0x4445ca
        __asm _emit 0xeb
        __asm _emit 0x0c
        lea eax, [ebp - 90h]
        mov dword ptr [ebp - 0d0h], eax
        mov ecx, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 98h], ecx
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [ebp - 90h]
        add eax, dword ptr [edx]
        mov dword ptr [ebp - 88h], eax
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 55: je 0x444648
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 88h]
        shl ecx, 2
        mov dword ptr [ebp - 9ch], ecx
        cmp dword ptr [ebp - 9ch], 80h
        ; Exact mapped bytes 76 17: jbe 0x444625
        __asm _emit 0x76
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 9ch]
        push edx
        ; Exact mapped bytes E8 46 7E 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x7e
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        ; Exact mapped bytes EB 15: jmp 0x44463a
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 9ch]
        push eax
        ; Exact mapped bytes E8 8F F9 FE FF: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0d4h], eax
        mov ecx, dword ptr [ebp - 0d4h]
        mov dword ptr [ebp - 0d8h], ecx
        ; Exact mapped bytes EB 0A: jmp 0x444652
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d8h], 0
        mov edx, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 94h], edx
        mov eax, dword ptr [ebp - 0c0h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0a0h], ecx
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes 75 0E: jne 0x444685
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 31: jmp 0x4446b6
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp + 8]
        sub ecx, dword ptr [ebp - 0a0h]
        push ecx
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        mov eax, dword ptr [ebp - 94h]
        push eax
        ; Exact mapped bytes E8 BE 15 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        sub ecx, dword ptr [ebp - 0a0h]
        add eax, ecx
        mov dword ptr [ebp - 0dch], eax
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 0bch]
        mov dword ptr [ebp - 0a8h], eax
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 0a4h], ecx
        ; Exact mapped bytes EB 1E: jmp 0x4446fa
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 0a8h]
        sub edx, 1
        mov dword ptr [ebp - 0a8h], edx
        mov eax, dword ptr [ebp - 0a4h]
        add eax, 4
        mov dword ptr [ebp - 0a4h], eax
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 76 0F: jbe 0x444712
        __asm _emit 0x76
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0a4h]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB CA: jmp 0x4446dc
        __asm _emit 0xeb
        __asm _emit 0xca
        mov ecx, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 8ch], ecx
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 62: jne 0x444786
        __asm _emit 0x75
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 0c0h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ach], ecx
        mov edx, dword ptr [ebp - 0ach]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0E: jne 0x44474c
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 2E: jmp 0x44477a
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 0ach]
        sub ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8ch]
        push eax
        ; Exact mapped bytes E8 FA 14 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0ach]
        sub ecx, dword ptr [ebp + 8]
        add eax, ecx
        mov dword ptr [ebp - 0e0h], eax
        mov edx, dword ptr [ebp - 0e0h]
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 0c0h]
        mov ecx, dword ptr [ebp - 0c0h]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx]
        sar edx, 2
        mov dword ptr [ebp - 0b8h], edx
        mov eax, dword ptr [ebp - 0c0h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0b4h], ecx
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 19: je 0x4447d0
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 0b8h]
        shl edx, 2
        push edx
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        ; Exact mapped bytes E8 26 D0 FB FF: call 0x4017f3
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xd0
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 0c0h]
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 0c0h]
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [ebp - 94h]
        lea ecx, [eax + edx*4]
        mov edx, dword ptr [ebp - 0c0h]
        mov dword ptr [edx + 8], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
