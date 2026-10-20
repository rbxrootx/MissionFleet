// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041FB23 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_0041fb23_0041FB23() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        xor esi, esi
        ; Exact mapped bytes 39 35 AC 11 45 00: cmp dword ptr [0x4511ac], esi
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0xac
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 75 0F: jne 0x41fb40
        __asm _emit 0x75
        __asm _emit 0x0f
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 44 50 00 00: call 0x424b80
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 52: jmp 0x41fb92
        __asm _emit 0xeb
        __asm _emit 0x52
        push edi
        push 19h
        ; Exact mapped bytes E8 C2 2A 00 00: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ecx]
        movzx eax, dl
        movzx edi, al
        test byte ptr [edi + 4512c1h], 4
        ; Exact mapped bytes 74 1E: je 0x41fb7b
        __asm _emit 0x74
        __asm _emit 0x1e
        mov dl, byte ptr [ecx + 1]
        inc ecx
        test dl, dl
        ; Exact mapped bytes 74 12: je 0x41fb77
        __asm _emit 0x74
        __asm _emit 0x12
        movzx edi, dl
        shl eax, 8
        or eax, edi
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 10: jne 0x41fb82
        __asm _emit 0x75
        __asm _emit 0x10
        lea esi, [ecx - 1]
        ; Exact mapped bytes EB 0B: jmp 0x41fb82
        __asm _emit 0xeb
        __asm _emit 0x0b
        test esi, esi
        ; Exact mapped bytes EB 03: jmp 0x41fb7e
        __asm _emit 0xeb
        __asm _emit 0x03
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 02: jne 0x41fb82
        __asm _emit 0x75
        __asm _emit 0x02
        mov esi, ecx
        inc ecx
        test dl, dl
        ; Exact mapped bytes 75 C5: jne 0x41fb4c
        __asm _emit 0x75
        __asm _emit 0xc5
        push 19h
        ; Exact mapped bytes E8 DD 2A 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        ret
    }
}
