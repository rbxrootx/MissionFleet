// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58979170 .. +0xD5 bytes.
extern "C" __declspec(naked) void FUN_58979170() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push ebp
        push esi
        mov esi, dword ptr [esp + 10h]
        test ebx, ebx
        mov ebp, dword ptr [esi + 1ch]
        ; Exact mapped bytes 75 17: jne 0x58979199
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [esi + 20h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx + 14h], 28h
        mov eax, dword ptr [esi + 20h]
        push eax
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        add esp, 4
        mov al, byte ptr [esi + 0ch]
        test al, al
        ; Exact mapped bytes 0F 85 9D 00 00 00: jne 0x58979241
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov eax, dword ptr [esp + 18h]
        mov edi, 1
        mov ecx, ebx
        shl edi, cl
        add ebp, ebx
        mov ecx, 18h
        sub ecx, ebp
        dec edi
        and edi, eax
        shl edi, cl
        mov ecx, dword ptr [esi + 18h]
        or edi, ecx
        cmp ebp, 8
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 7C 6C: jl 0x5897923a
        __asm _emit 0x7c
        __asm _emit 0x6c
        mov eax, ebp
        shr eax, 3
        mov dword ptr [esp + 1ch], eax
        neg eax
        lea ebp, [ebp + eax*8]
        mov eax, dword ptr [esi + 10h]
        xor ebx, ebx
        mov bl, byte ptr [esp + 16h]
        mov byte ptr [eax], bl
        mov ecx, dword ptr [esi + 10h]
        mov eax, dword ptr [esi + 14h]
        inc ecx
        dec eax
        mov dword ptr [esi + 10h], ecx
        mov dword ptr [esi + 14h], eax
        ; Exact mapped bytes 75 09: jne 0x58979201
        __asm _emit 0x75
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 52 00 00 00: call 0x58979250
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp ebx, 0ffh
        ; Exact mapped bytes 75 1F: jne 0x58979228
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [esi + 10h]
        mov byte ptr [ecx], 0
        mov ecx, dword ptr [esi + 10h]
        mov eax, dword ptr [esi + 14h]
        inc ecx
        dec eax
        mov dword ptr [esi + 10h], ecx
        mov dword ptr [esi + 14h], eax
        ; Exact mapped bytes 75 09: jne 0x58979228
        __asm _emit 0x75
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 2B 00 00 00: call 0x58979250
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [esp + 1ch]
        shl edi, 8
        dec eax
        mov dword ptr [esp + 14h], edi
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 75 A3: jne 0x589791dd
        __asm _emit 0x75
        __asm _emit 0xa3
        mov dword ptr [esi + 18h], edi
        mov dword ptr [esi + 1ch], ebp
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
