// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58906DE0 .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_58906de0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push esi
        xor ebx, ebx
        mov esi, ecx
        mov dword ptr [esi], 589a2538h
        cmp eax, ebx
        ; Exact mapped bytes 74 15: je 0x58906e09
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [esp + 10h]
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 3F D0 FF FF: call 0x58903e40
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x58906e99
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        lea eax, [esi + 108h]
        mov edi, 5898d6c8h
        mov dword ptr [esi + 4], 0ffffffffh
        mov byte ptr [esi + 8], bl
        mov edx, 28h
        sub edi, eax
        lea ecx, [edx + 7fffffd6h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x58906e41
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edi + eax]
        cmp cl, bl
        ; Exact mapped bytes 74 0A: je 0x58906e41
        __asm _emit 0x74
        __asm _emit 0x0a
        mov byte ptr [eax], cl
        inc eax
        sub edx, 1
        ; Exact mapped bytes 75 E7: jne 0x58906e26
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x58906e45
        __asm _emit 0xeb
        __asm _emit 0x04
        cmp edx, ebx
        ; Exact mapped bytes 75 01: jne 0x58906e46
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], bl
        mov al, 3
        mov dword ptr [esi + 130h], ebx
        mov byte ptr [esi + 134h], bl
        mov byte ptr [esi + 15ch], al
        mov byte ptr [esi + 15dh], al
        mov dword ptr [esi + 160h], ebx
        mov dword ptr [esi + 164h], ebx
        mov dword ptr [esi + 16ch], ebx
        mov dword ptr [esi + 170h], ebx
        mov byte ptr [esi + 15eh], bl
        mov dword ptr [esi + 168h], ebx
        mov dword ptr [esi + 190h], ebx
        mov dword ptr [esi + 18ch], ebx
        mov dword ptr [esi + 194h], ebx
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 8
    }
}
