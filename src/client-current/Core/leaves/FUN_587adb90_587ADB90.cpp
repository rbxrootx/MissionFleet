// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587ADB90 .. +0x18A bytes.
extern "C" __declspec(naked) void FUN_587adb90_587ADB90() {
    __asm {
        sub esp, 20h
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 34h]
        mov eax, dword ptr [edi + 38h]
        mov esi, dword ptr [edi + 6ch]
        mov ecx, dword ptr [edi + 2ch]
        mov edx, dword ptr [edi + 7ch]
        mov ebp, dword ptr [edi + 78h]
        mov dword ptr [esp + 20h], eax
        lea ebx, [eax + esi]
        mov eax, dword ptr [edi + 90h]
        mov dword ptr [esp + 14h], eax
        lea eax, [ecx - 106h]
        cmp esi, eax
        ; Exact mapped bytes 76 0E: jbe 0x587adbd3
        __asm _emit 0x76
        __asm _emit 0x0e
        sub esi, ecx
        add esi, 106h
        mov dword ptr [esp + 1ch], esi
        ; Exact mapped bytes EB 08: jmp 0x587adbdb
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 1ch], 0
        mov eax, dword ptr [edi + 40h]
        lea esi, [ebx + 102h]
        mov ecx, edx
        mov dword ptr [esp + 28h], eax
        mov eax, dword ptr [edi + 34h]
        shr ecx, 2
        cmp ebp, dword ptr [edi + 8ch]
        mov dword ptr [esp + 24h], eax
        mov al, byte ptr [ebx + ebp - 1]
        cmovb ecx, edx
        mov edx, dword ptr [edi + 74h]
        mov edi, dword ptr [esp + 14h]
        cmp edi, edx
        mov ah, byte ptr [ebx + ebp]
        cmova edi, edx
        mov byte ptr [esp + 12h], al
        mov dword ptr [esp + 14h], edi
        mov edi, dword ptr [esp + 38h]
        mov byte ptr [esp + 13h], ah
        mov dword ptr [esp + 18h], ecx
        mov dword ptr [esp + 2ch], edx
        ; Exact mapped bytes 0F 1F 84 00 00 00 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 20h]
        add edx, edi
        cmp byte ptr [edx + ebp], ah
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x587adce0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [edx + ebp - 1], al
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x587adce0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [edx]
        cmp al, byte ptr [ebx]
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x587adce0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [edx + 1]
        cmp al, byte ptr [ebx + 1]
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x587adce0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebx + 2]
        add edx, 2
        mov cl, byte ptr [eax + 1]
        inc eax
        cmp cl, byte ptr [edx + 1]
        ; Exact mapped bytes 75 45: jne 0x587adcb3
        __asm _emit 0x75
        __asm _emit 0x45
        mov cl, byte ptr [eax + 1]
        inc eax
        cmp cl, byte ptr [edx + 2]
        ; Exact mapped bytes 75 3C: jne 0x587adcb3
        __asm _emit 0x75
        __asm _emit 0x3c
        mov cl, byte ptr [eax + 1]
        inc eax
        cmp cl, byte ptr [edx + 3]
        ; Exact mapped bytes 75 33: jne 0x587adcb3
        __asm _emit 0x75
        __asm _emit 0x33
        mov cl, byte ptr [eax + 1]
        inc eax
        cmp cl, byte ptr [edx + 4]
        ; Exact mapped bytes 75 2A: jne 0x587adcb3
        __asm _emit 0x75
        __asm _emit 0x2a
        mov cl, byte ptr [eax + 1]
        inc eax
        cmp cl, byte ptr [edx + 5]
        ; Exact mapped bytes 75 21: jne 0x587adcb3
        __asm _emit 0x75
        __asm _emit 0x21
        mov cl, byte ptr [eax + 1]
        inc eax
        cmp cl, byte ptr [edx + 6]
        ; Exact mapped bytes 75 18: jne 0x587adcb3
        __asm _emit 0x75
        __asm _emit 0x18
        mov cl, byte ptr [eax + 1]
        inc eax
        cmp cl, byte ptr [edx + 7]
        ; Exact mapped bytes 75 0F: jne 0x587adcb3
        __asm _emit 0x75
        __asm _emit 0x0f
        mov cl, byte ptr [eax + 1]
        inc eax
        add edx, 8
        cmp cl, byte ptr [edx]
        ; Exact mapped bytes 75 04: jne 0x587adcb3
        __asm _emit 0x75
        __asm _emit 0x04
        cmp eax, esi
        ; Exact mapped bytes 72 B2: jb 0x587adc65
        __asm _emit 0x72
        __asm _emit 0xb2
        sub eax, esi
        add eax, 102h
        cmp eax, ebp
        ; Exact mapped bytes 7E 1E: jle 0x587adcdc
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ebp, eax
        mov ecx, dword ptr [esp + 34h]
        mov dword ptr [ecx + 70h], edi
        cmp eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 7D 3C: jge 0x587add09
        __asm _emit 0x7d
        __asm _emit 0x3c
        mov cl, byte ptr [eax + ebx - 1]
        mov al, byte ptr [eax + ebx]
        mov byte ptr [esp + 12h], cl
        mov byte ptr [esp + 13h], al
        mov ecx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 28h]
        and eax, edi
        movzx edi, word ptr [edx + eax*2]
        cmp edi, dword ptr [esp + 1ch]
        ; Exact mapped bytes 76 15: jbe 0x587add09
        __asm _emit 0x76
        __asm _emit 0x15
        mov al, byte ptr [esp + 12h]
        sub ecx, 1
        mov ah, byte ptr [esp + 13h]
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes 0F 85 27 FF FF FF: jne 0x587adc30
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 2ch]
        cmp ebp, eax
        pop edi
        pop esi
        cmovbe eax, ebp
        pop ebp
        pop ebx
        add esp, 20h
        ret
    }
}
