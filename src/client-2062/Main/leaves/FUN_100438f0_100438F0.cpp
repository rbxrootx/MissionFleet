// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100438F0 .. +0x120 bytes.
extern "C" __declspec(naked) void FUN_100438f0_100438F0() {
    __asm {
        push esi
        mov esi, ecx
        mov edx, dword ptr [esi + 12ch]
        mov eax, dword ptr [esi + 130h]
        cmp edx, eax
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x10043a0e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 BE 00 00 00: jne 0x100439d3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 108h]
        push ebx
        test ecx, ecx
        push edi
        ; Exact mapped bytes 74 0F: je 0x10043930
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ebx, dword ptr [esi + 124h]
        imul ebx, dword ptr [esi + 0d0h]
        ; Exact mapped bytes EB 02: jmp 0x10043932
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov ecx, eax
        mov edi, dword ptr [esi + 0cch]
        sub ecx, edx
        mov dword ptr [esi + 12ch], eax
        mov eax, ecx
        add edi, 2
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 708h
        ; Exact mapped bytes 7D 10: jge 0x10043963
        __asm _emit 0x7d
        __asm _emit 0x10
        test ecx, ecx
        ; Exact mapped bytes 7E 06: jle 0x1004395d
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp edi, ecx
        ; Exact mapped bytes 7D 30: jge 0x1004398b
        __asm _emit 0x7d
        __asm _emit 0x30
        ; Exact mapped bytes EB 2C: jmp 0x10043989
        __asm _emit 0xeb
        __asm _emit 0x2c
        cmp edi, eax
        ; Exact mapped bytes 7D 2A: jge 0x1004398b
        __asm _emit 0x7d
        __asm _emit 0x2a
        ; Exact mapped bytes EB 24: jmp 0x10043987
        __asm _emit 0xeb
        __asm _emit 0x24
        test ecx, ecx
        ; Exact mapped bytes 7E 0F: jle 0x10043976
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, 0e10h
        sub eax, ecx
        mov ecx, eax
        cmp edi, ecx
        ; Exact mapped bytes 7D 17: jge 0x1004398b
        __asm _emit 0x7d
        __asm _emit 0x17
        ; Exact mapped bytes EB 13: jmp 0x10043989
        __asm _emit 0xeb
        __asm _emit 0x13
        add ecx, 0e10h
        mov eax, ecx
        cdq
        xor eax, edx
        sub eax, edx
        cmp edi, eax
        ; Exact mapped bytes 7D 04: jge 0x1004398b
        __asm _emit 0x7d
        __asm _emit 0x04
        neg edi
        mov ecx, edi
        mov eax, dword ptr [esi + 0a8h]
        pop edi
        sub eax, ecx
        mov ecx, 0e10h
        add eax, ebx
        pop ebx
        cdq
        idiv ecx
        test edx, edx
        mov dword ptr [esi + 0a8h], edx
        ; Exact mapped bytes 7D 08: jge 0x100439b1
        __asm _emit 0x7d
        __asm _emit 0x08
        add edx, ecx
        mov dword ptr [esi + 0a8h], edx
        mov edx, dword ptr [esi + 0a8h]
        push 2
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 5F 00 00 00: call 0x10043a20
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a8h]
        push 1
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 4F 00 00 00: call 0x10043a20
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x100439d9
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [esi + 12ch], eax
        mov ecx, dword ptr [esi + 0a8h]
        mov edx, dword ptr [esi + 130h]
        lea eax, [ecx + edx + 32h]
        mov ecx, 0e10h
        cdq
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 7D 02: jge 0x100439f7
        __asm _emit 0x7d
        __asm _emit 0x02
        add edx, ecx
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [esi + 0a0h], edx
        pop esi
        ret
    }
}
