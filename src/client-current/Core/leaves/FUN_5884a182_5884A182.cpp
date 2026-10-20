// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884A182 .. +0xF0 bytes.
extern "C" __declspec(naked) void FUN_5884a182_5884A182() {
    __asm {
        push ebp
        mov ebp, esp
        mov edx, dword ptr [ebp + 0ch]
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x5884a190
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop ebp
        ret
        mov ecx, dword ptr [ebp + 8]
        push esi
        mov esi, dword ptr [ebp + 10h]
        not ecx
        cmp esi, 8
        ; Exact mapped bytes 0F 82 AD 00 00 00: jb 0x5884a24f
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov edi, esi
        shr edi, 3
        movzx eax, byte ptr [edx]
        sub esi, 8
        xor eax, ecx
        shr ecx, 8
        movzx eax, al
        xor ecx, dword ptr [eax*4 + 588c1fb8h]
        movzx eax, byte ptr [edx + 1]
        xor eax, ecx
        shr ecx, 8
        movzx eax, al
        xor ecx, dword ptr [eax*4 + 588c1fb8h]
        movzx eax, byte ptr [edx + 2]
        xor eax, ecx
        shr ecx, 8
        movzx eax, al
        xor ecx, dword ptr [eax*4 + 588c1fb8h]
        movzx eax, byte ptr [edx + 3]
        xor eax, ecx
        shr ecx, 8
        movzx eax, al
        xor ecx, dword ptr [eax*4 + 588c1fb8h]
        movzx eax, byte ptr [edx + 4]
        xor eax, ecx
        shr ecx, 8
        movzx eax, al
        xor ecx, dword ptr [eax*4 + 588c1fb8h]
        movzx eax, byte ptr [edx + 5]
        xor eax, ecx
        shr ecx, 8
        movzx eax, al
        xor ecx, dword ptr [eax*4 + 588c1fb8h]
        movzx eax, byte ptr [edx + 6]
        xor eax, ecx
        shr ecx, 8
        movzx eax, al
        xor ecx, dword ptr [eax*4 + 588c1fb8h]
        movzx eax, byte ptr [edx + 7]
        add edx, 8
        xor eax, ecx
        shr ecx, 8
        movzx eax, al
        xor ecx, dword ptr [eax*4 + 588c1fb8h]
        sub edi, 1
        ; Exact mapped bytes 0F 85 5A FF FF FF: jne 0x5884a1a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        test esi, esi
        ; Exact mapped bytes 74 18: je 0x5884a26b
        __asm _emit 0x74
        __asm _emit 0x18
        movzx eax, byte ptr [edx]
        xor eax, ecx
        shr ecx, 8
        movzx eax, al
        xor ecx, dword ptr [eax*4 + 588c1fb8h]
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E8: jne 0x5884a253
        __asm _emit 0x75
        __asm _emit 0xe8
        not ecx
        mov eax, ecx
        pop esi
        pop ebp
        ret
    }
}
