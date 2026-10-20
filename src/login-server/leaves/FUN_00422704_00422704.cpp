// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00422704 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_00422704_00422704() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        lea ecx, [eax + 1]
        cmp ecx, 100h
        ; Exact mapped bytes 77 0C: ja 0x422722
        __asm _emit 0x77
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D C0 AC 44 00: mov ecx, dword ptr [0x44acc0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        movzx eax, word ptr [ecx + eax*2]
        ; Exact mapped bytes EB 52: jmp 0x422774
        __asm _emit 0xeb
        __asm _emit 0x52
        mov ecx, eax
        push esi
        ; Exact mapped bytes 8B 35 C0 AC 44 00: mov esi, dword ptr [0x44acc0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xc0
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        sar ecx, 8
        movzx edx, cl
        test byte ptr [esi + edx*2 + 1], 80h
        pop esi
        ; Exact mapped bytes 74 0E: je 0x422747
        __asm _emit 0x74
        __asm _emit 0x0e
        and byte ptr [ebp - 2], 0
        mov byte ptr [ebp - 4], cl
        mov byte ptr [ebp - 3], al
        push 2
        ; Exact mapped bytes EB 09: jmp 0x422750
        __asm _emit 0xeb
        __asm _emit 0x09
        and byte ptr [ebp - 3], 0
        mov byte ptr [ebp - 4], al
        push 1
        pop eax
        lea ecx, [ebp + 0ah]
        push 1
        push 0
        push 0
        push ecx
        push eax
        lea eax, [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 A1 2D 00 00: call 0x425508
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x422770
        __asm _emit 0x75
        __asm _emit 0x02
        leave
        ret
        movzx eax, word ptr [ebp + 0ah]
        and eax, dword ptr [ebp + 0ch]
        leave
        ret
    }
}
