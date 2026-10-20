// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A27D0 .. +0x14E bytes.
extern "C" __declspec(naked) void FUN_587a27d0_587A27D0() {
    __asm {
        sub esp, 14h
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [eax + 114h]
        mov edx, dword ptr [eax + 108h]
        mov dword ptr [esp + 0ch], edx
        cmp ecx, 8000h
        ; Exact mapped bytes 0F 83 24 01 00 00: jae 0x587a2917
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 8000h
        ; Exact mapped bytes 0F 83 18 01 00 00: jae 0x587a2917
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [eax + 150h], 0
        ; Exact mapped bytes 0F 84 01 01 00 00: je 0x587a290d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 104h]
        movzx eax, byte ptr [eax + 156h]
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 14h], ecx
        xor edi, edi
        mov dword ptr [esp + 18h], eax
        mov esi, 8
        mov dword ptr [esp + 28h], 0
        mov ebx, esi
        lea esi, [ebx - 1]
        cmp edi, 1
        ; Exact mapped bytes 7E 0E: jle 0x587a284c
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ebp, esi
        mov eax, esi
        sar ebp, 1
        sar eax, 1
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes EB 09: jmp 0x587a2855
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ebp, 3
        mov dword ptr [esp + 10h], ebp
        lea eax, [edi + 1]
        mov ecx, 3
        mov dword ptr [esp + 20h], eax
        mov edx, edi
        sar eax, 1
        and edx, 1
        sub ecx, eax
        mov eax, 1
        shl edx, cl
        mov ecx, dword ptr [esp + 10h]
        and edx, 7
        shl eax, cl
        mov ecx, ebp
        sub eax, edx
        mov edx, dword ptr [esp + 14h]
        dec edx
        add edx, eax
        shr edx, cl
        test edx, edx
        ; Exact mapped bytes 74 69: je 0x587a28f4
        __asm _emit 0x74
        __asm _emit 0x69
        mov ebp, dword ptr [esp + 18h]
        cmp ebp, 8
        ; Exact mapped bytes 72 0A: jb 0x587a289e
        __asm _emit 0x72
        __asm _emit 0x0a
        mov eax, ebp
        shr eax, 3
        imul eax, edx
        ; Exact mapped bytes EB 0B: jmp 0x587a28a9
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, edx
        imul eax, ebp
        add eax, 7
        shr eax, 3
        cmp edi, 2
        ; Exact mapped bytes 7E 04: jle 0x587a28b2
        __asm _emit 0x7e
        __asm _emit 0x04
        shr ebx, 1
        ; Exact mapped bytes EB 05: jmp 0x587a28b7
        __asm _emit 0xeb
        __asm _emit 0x05
        mov ebx, 3
        mov edx, edi
        mov ecx, 3
        sar edx, 1
        not edi
        sub ecx, edx
        and edi, 1
        shl edi, cl
        mov ebp, ebx
        mov ecx, ebx
        mov edx, 1
        shl edx, cl
        and edi, 7
        mov ecx, dword ptr [esp + 1ch]
        sub edx, edi
        dec ecx
        inc eax
        add edx, ecx
        mov ecx, ebx
        shr edx, cl
        imul edx, eax
        mov eax, dword ptr [esp + 28h]
        add eax, edx
        mov dword ptr [esp + 28h], eax
        ; Exact mapped bytes EB 04: jmp 0x587a28f8
        __asm _emit 0xeb
        __asm _emit 0x04
        mov eax, dword ptr [esp + 28h]
        mov edi, dword ptr [esp + 20h]
        cmp esi, 2
        ; Exact mapped bytes 0F 8D 2F FF FF FF: jge 0x587a2834
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 14h
        ret
        lea eax, [ecx + 1]
        imul eax, edx
        add esp, 14h
        ret
        or eax, 0ffffffffh
        add esp, 14h
        ret
    }
}
