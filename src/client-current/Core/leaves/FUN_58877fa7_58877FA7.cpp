// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58877FA7 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_58877fa7_58877FA7() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0ch]
        push edi
        xor edi, edi
        test esi, esi
        ; Exact mapped bytes 78 3E: js 0x58877ff8
        __asm _emit 0x78
        __asm _emit 0x3e
        mov ebx, dword ptr [ebp + 10h]
        lea eax, [edi + esi]
        cdq
        sub eax, edx
        sar eax, 1
        imul ecx, eax, 0ch
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], ecx
        push dword ptr [ecx + eax]
        push dword ptr [ebx]
        ; Exact mapped bytes E8 D5 BC FF FF: call 0x58873cb0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, eax
        pop ecx
        pop ecx
        test edx, edx
        ; Exact mapped bytes 74 1C: je 0x58877fff
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax - 1]
        cmovns ecx, esi
        mov esi, ecx
        lea ecx, [eax + 1]
        cmovns edi, ecx
        cmp edi, esi
        ; Exact mapped bytes 7E C5: jle 0x58877fbd
        __asm _emit 0x7e
        __asm _emit 0xc5
        xor al, al
        pop edi
        pop esi
        pop ebx
        leave
        ret
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebx], eax
        mov al, 1
        ; Exact mapped bytes EB EC: jmp 0x58877ffa
        __asm _emit 0xeb
        __asm _emit 0xec
    }
}
