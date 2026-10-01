// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902EE0 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_58902ee0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        cmp dword ptr [ecx + 30h], 0
        ; Exact mapped bytes 74 05: je 0x58902ef2
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 2E FD FF FF: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 3ch]
        test edx, edx
        ; Exact mapped bytes 75 0A: jne 0x58902f03
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [esi + 3ch], ecx
        mov dword ptr [ecx + 30h], esi
        pop esi
        ret 4
        push edi
        movzx edi, word ptr [ecx + 26h]
        ; Exact mapped bytes 66 39 7A 26: cmp word ptr [edx + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x7a
        __asm _emit 0x26
        ; Exact mapped bytes 7F 16: jg 0x58902f24
        __asm _emit 0x7f
        __asm _emit 0x16
        mov eax, dword ptr [edx + 38h]
        cmp eax, edx
        ; Exact mapped bytes 74 14: je 0x58902f29
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 66 39 78 26: cmp word ptr [eax + 0x26], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x78
        __asm _emit 0x26
        ; Exact mapped bytes 7F 0E: jg 0x58902f29
        __asm _emit 0x7f
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 38h]
        cmp eax, edx
        ; Exact mapped bytes 75 F3: jne 0x58902f15
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes EB 05: jmp 0x58902f29
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, edx
        mov dword ptr [esi + 3ch], ecx
        mov edx, dword ptr [eax + 34h]
        mov dword ptr [ecx + 34h], edx
        mov dword ptr [ecx + 38h], eax
        mov edx, dword ptr [eax + 34h]
        mov dword ptr [edx + 38h], ecx
        mov dword ptr [eax + 34h], ecx
        pop edi
        mov dword ptr [ecx + 30h], esi
        pop esi
        ret 4
    }
}
