// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00465180 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_00465180_00465180() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        push ebx
        push esi
        push edi
        mov ecx, dword ptr [eax + 10h]
        mov esi, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 0ch]
        test ecx, ecx
        mov edi, esi
        mov ebx, esi
        ; Exact mapped bytes 7C 3B: jl 0x4651d9
        __asm _emit 0x7c
        __asm _emit 0x3b
        cmp esi, -1
        ; Exact mapped bytes 75 05: jne 0x4651a8
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 D8 A3 00 00: call 0x46f580
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        dec esi
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [esi + esi*4]
        lea eax, [eax + edx*4]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 7E 05: jle 0x4651bf
        __asm _emit 0x7e
        __asm _emit 0x05
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7E 05: jle 0x4651c4
        __asm _emit 0x7e
        __asm _emit 0x05
        cmp esi, -1
        ; Exact mapped bytes 75 0B: jne 0x4651cf
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 0ch]
        mov edi, ebx
        dec eax
        mov ebx, esi
        mov dword ptr [ebp + 0ch], eax
        mov eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 7D C8: jge 0x46519e
        __asm _emit 0x7d
        __asm _emit 0xc8
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp + 18h]
        inc esi
        mov dword ptr [ecx], esi
        mov dword ptr [edx], edi
        cmp edi, dword ptr [eax + 0ch]
        ; Exact mapped bytes 77 04: ja 0x4651ed
        __asm _emit 0x77
        __asm _emit 0x04
        cmp esi, edi
        ; Exact mapped bytes 76 05: jbe 0x4651f2
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 8E A3 00 00: call 0x46f580
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        lea eax, [esi + esi*4]
        pop edi
        pop esi
        lea eax, [ecx + eax*4]
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
