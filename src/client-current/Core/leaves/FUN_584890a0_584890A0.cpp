// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584890A0 .. +0x112 bytes.
extern "C" __declspec(naked) void FUN_584890a0_584890A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584890c3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + ecx + 64h]
        ; Exact mapped bytes 7D 2C: jge 0x584890ff
        __asm _emit 0x7d
        __asm _emit 0x2c
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 60h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 76 14: jbe 0x584890fd
        __asm _emit 0x76
        __asm _emit 0x14
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 60h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB BB: jmp 0x584890ba
        __asm _emit 0xeb
        __asm _emit 0xbb
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + edx + 68h], ecx
        mov edx, dword ptr [ebp - 0ch]
        imul edx, dword ptr [ebp - 0ch]
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 70h], edx
        imul ecx, dword ptr [ebp + 8], 38h
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 4]
        imul eax, dword ptr [eax + edx + 68h], 9
        xor edx, edx
        mov esi, 0ah
        div esi
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 6ch], eax
        ; Exact mapped bytes 76 6A: jbe 0x584891ab
        __asm _emit 0x76
        __asm _emit 0x6a
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58489153
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + ecx + 64h]
        ; Exact mapped bytes 7D 48: jge 0x584891ab
        __asm _emit 0x7d
        __asm _emit 0x48
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 60h]
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 4]
        imul eax, dword ptr [eax + edx + 68h], 9
        xor edx, edx
        mov esi, 0ah
        div esi
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + edx*4], eax
        ; Exact mapped bytes 72 1E: jb 0x584891a9
        __asm _emit 0x72
        __asm _emit 0x1e
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 60h]
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 8]
        mov edx, dword ptr [edx + esi*4]
        mov dword ptr [ecx + eax + 6ch], edx
        ; Exact mapped bytes EB 02: jmp 0x584891ab
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 9F: jmp 0x5848914a
        __asm _emit 0xeb
        __asm _emit 0x9f
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
