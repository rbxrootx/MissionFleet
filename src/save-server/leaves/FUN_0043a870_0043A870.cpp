// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043A870 .. +0x203 bytes.
extern "C" __declspec(naked) void FUN_0043a870_0043A870() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 72 0C: jb 0x43a895
        __asm _emit 0x72
        __asm _emit 0x0c
        mov dword ptr [ebp - 2ch], 0ffffffffh
        ; Exact mapped bytes E9 D5 01 00 00: jmp 0x43aa6a
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebp + 8]
        mov byte ptr [ebp - 8], al
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 24h], ecx
        mov dl, byte ptr [ebp - 10h]
        mov byte ptr [ebp - 0ch], dl
        mov al, byte ptr [ebp - 8]
        mov byte ptr [ebp - 1ch], al
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 28h]
        sub edx, dword ptr [ebp - 18h]
        sar edx, 2
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 09: jmp 0x43a8d8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        sub eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 8E C0 00 00 00: jle 0x43a9a2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 4D E4: movsx ecx, byte ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xe4
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        xor edx, edx
        cmp eax, ecx
        sete dl
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 0B: je 0x43a908
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes E9 37 01 00 00: jmp 0x43aa3f
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 0F BE 55 E4: movsx edx, byte ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xe4
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        xor eax, eax
        cmp ecx, edx
        sete al
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x43a936
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes E9 09 01 00 00: jmp 0x43aa3f
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes 0F BE 45 E4: movsx eax, byte ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xe4
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        xor ecx, ecx
        cmp edx, eax
        sete cl
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x43a965
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x43aa3f
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 0F BE 4D E4: movsx ecx, byte ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xe4
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        xor edx, edx
        cmp eax, ecx
        sete dl
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 0B: je 0x43a994
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x43aa3f
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes E9 2D FF FF FF: jmp 0x43a8cf
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 28h]
        sub edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 34h], edx
        cmp dword ptr [ebp - 34h], 1
        ; Exact mapped bytes 74 66: je 0x43aa17
        __asm _emit 0x74
        __asm _emit 0x66
        cmp dword ptr [ebp - 34h], 2
        ; Exact mapped bytes 74 34: je 0x43a9eb
        __asm _emit 0x74
        __asm _emit 0x34
        cmp dword ptr [ebp - 34h], 3
        ; Exact mapped bytes 74 02: je 0x43a9bf
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 7A: jmp 0x43aa39
        __asm _emit 0xeb
        __asm _emit 0x7a
        ; Exact mapped bytes 0F BE 45 E4: movsx eax, byte ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xe4
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        xor ecx, ecx
        cmp edx, eax
        sete cl
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x43a9e2
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 5D: jmp 0x43aa3f
        __asm _emit 0xeb
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 0F BE 4D E4: movsx ecx, byte ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xe4
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        xor edx, edx
        cmp eax, ecx
        sete dl
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x43aa0e
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 31: jmp 0x43aa3f
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 0F BE 55 E4: movsx edx, byte ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xe4
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        xor eax, eax
        cmp ecx, edx
        sete al
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x43aa39
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB 06: jmp 0x43aa3f
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 74 0D: je 0x43aa5d
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [eax]
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes EB 07: jmp 0x43aa64
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0ffffffffh
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
