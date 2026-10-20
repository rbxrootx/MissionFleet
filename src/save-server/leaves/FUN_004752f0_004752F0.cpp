// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004752F0 .. +0x2A9 bytes.
extern "C" __declspec(naked) void FUN_004752f0_004752F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 0f8h
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        cmp edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 72 63: jb 0x47537d
        __asm _emit 0x72
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [ebp + 10h]
        mov byte ptr [eax], cl
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp + 10h]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 73 1E: jae 0x47534b
        __asm _emit 0x73
        __asm _emit 0x1e
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        sub ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], ecx
        ; Exact mapped bytes EB 15: jmp 0x475360
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 8]
        add eax, 8
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp + 8]
        add eax, 8
        mov ecx, dword ptr [ebp - 8]
        sub ecx, eax
        shl ecx, 4
        mov edx, dword ptr [ebp + 8]
        lea eax, [edx + ecx + 100h]
        ; Exact mapped bytes E9 18 02 00 00: jmp 0x475595
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        mov al, byte ptr [edx + ecx]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x47539b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F 83 EF 00 00 00: jae 0x475499
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 0F 85 CC 00 00 00: jne 0x475485
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 12: jmp 0x4753dd
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x4753ea
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB E1: jmp 0x4753cb
        __asm _emit 0xeb
        __asm _emit 0xe1
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 73 33: jae 0x475425
        __asm _emit 0x73
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 0B: jne 0x475405
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], edx
        ; Exact mapped bytes EB 18: jmp 0x47541d
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 73 07: jae 0x47541d
        __asm _emit 0x73
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 78 01 00 00: jmp 0x475595
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 5E: jmp 0x475483
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 73 19: jae 0x475449
        __asm _emit 0x73
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 10h]
        sub eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes EB 15: jmp 0x47545e
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 8]
        add edx, 8
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 8]
        mov al, byte ptr [ebp + 10h]
        mov byte ptr [edx], al
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8
        mov edx, dword ptr [ebp - 8]
        sub edx, ecx
        shl edx, 4
        mov eax, dword ptr [ebp + 8]
        lea eax, [eax + edx + 100h]
        ; Exact mapped bytes E9 12 01 00 00: jmp 0x475595
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0F: jmp 0x475494
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov eax, dword ptr [ebp - 8]
        add eax, edx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 02 FF FF FF: jmp 0x47539b
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 83 E5 00 00 00: jae 0x475593
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F 83 D6 00 00 00: jae 0x475593
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 0F 85 B3 00 00 00: jne 0x47557f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 12: jmp 0x4754f0
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x4754fd
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB E1: jmp 0x4754de
        __asm _emit 0xeb
        __asm _emit 0xe1
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 73 1D: jae 0x475522
        __asm _emit 0x73
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 73 04: jae 0x47551a
        __asm _emit 0x73
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 7B: jmp 0x475595
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 5B: jmp 0x47557d
        __asm _emit 0xeb
        __asm _emit 0x5b
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 73 19: jae 0x475546
        __asm _emit 0x73
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 10h]
        sub eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes EB 15: jmp 0x47555b
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 8]
        add edx, 8
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 8]
        mov al, byte ptr [ebp + 10h]
        mov byte ptr [edx], al
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8
        mov edx, dword ptr [ebp - 8]
        sub edx, ecx
        shl edx, 4
        mov eax, dword ptr [ebp + 8]
        lea eax, [eax + edx + 100h]
        ; Exact mapped bytes EB 18: jmp 0x475595
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes EB 0F: jmp 0x47558e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov eax, dword ptr [ebp - 8]
        add eax, edx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 0F FF FF FF: jmp 0x4754a2
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
