// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002AA80 .. +0x135 bytes.
extern "C" __declspec(naked) void FUN_1002aa80_1002AA80() {
    __asm {
        sub esp, 10h
        mov eax, dword ptr [ecx + 0a4h]
        mov edx, dword ptr [esp + 14h]
        sub eax, edx
        mov dword ptr [esp + 8], ecx
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 84 12 01 00 00: je 0x1002abaf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 708h
        mov dword ptr [ecx + 0a4h], edx
        ; Exact mapped bytes 7E 07: jle 0x1002aab1
        __asm _emit 0x7e
        __asm _emit 0x07
        sub eax, 0e10h
        ; Exact mapped bytes EB 0C: jmp 0x1002aabd
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp eax, 0fffff8f8h
        ; Exact mapped bytes 7D 09: jge 0x1002aac1
        __asm _emit 0x7d
        __asm _emit 0x09
        add eax, 0e10h
        mov dword ptr [esp + 14h], eax
        push ebx
        push ebp
        push esi
        lea edx, [ecx + 64h]
        push edi
        mov dword ptr [esp + 10h], edx
        lea edi, [ecx + 80h]
        mov dword ptr [esp + 14h], 4
        ; Exact mapped bytes EB 04: jmp 0x1002aae0
        __asm _emit 0xeb
        __asm _emit 0x04
        mov eax, dword ptr [esp + 24h]
        mov ecx, dword ptr [edi]
        add eax, ecx
        test eax, eax
        mov dword ptr [edi], eax
        ; Exact mapped bytes 7D 07: jge 0x1002aaf1
        __asm _emit 0x7d
        __asm _emit 0x07
        add eax, 0e10h
        ; Exact mapped bytes EB 0C: jmp 0x1002aafd
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp eax, 0e10h
        ; Exact mapped bytes 7C 07: jl 0x1002aaff
        __asm _emit 0x7c
        __asm _emit 0x07
        add eax, 0fffff1f0h
        mov dword ptr [edi], eax
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [edx - 4]
        mov esi, dword ptr [edx]
        shl eax, 2
        mov edx, esi
        mov ebx, dword ptr [eax + 101ad160h]
        mov ebp, dword ptr [eax + 101b09a0h]
        mov eax, ecx
        imul edx, ebp
        imul eax, ebx
        imul ecx, ebp
        add eax, edx
        imul esi, ebx
        lea edx, [eax*8]
        sub ecx, esi
        sub edx, eax
        lea edx, [edx + edx*2]
        lea edx, [eax + edx*2]
        mov eax, 51eb851fh
        shl edx, 1
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esp + 18h]
        mov eax, dword ptr [eax + 30h]
        mov dword ptr [esp + 1ch], eax
        add edx, dword ptr [eax + 8]
        mov eax, 10624dd3h
        push edx
        imul ecx
        mov eax, dword ptr [esp + 20h]
        sar edx, 6
        mov ebx, dword ptr [eax + 4]
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [edi - 30h]
        add edx, ebx
        push edx
        ; Exact mapped bytes E8 42 41 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x41
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 14h]
        add edi, 4
        add edx, 8
        dec eax
        mov dword ptr [esp + 10h], edx
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 85 31 FF FF FF: jne 0x1002aadc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
