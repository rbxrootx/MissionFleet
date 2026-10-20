// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585257F0 .. +0xF8 bytes.
extern "C" __declspec(naked) void FUN_585257f0_585257F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 11ch
        idiv ecx
        cmp eax, 20h
        ; Exact mapped bytes 7F 19: jg 0x58525823
        __asm _emit 0x7f
        __asm _emit 0x19
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 25 F6 FF FF: call 0x58524e40
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes E9 C0 00 00 00: jmp 0x585258e3
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7F 2D: jg 0x58525856
        __asm _emit 0x7f
        __asm _emit 0x2d
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 96 F7 FF FF: call 0x58524fd0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 62 FF FF FF: call 0x585257b0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x585258e3
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 8]
        push edx
        ; Exact mapped bytes E8 35 F9 FF FF: call 0x585251a0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov eax, dword ptr [ebp + 10h]
        sar eax, 1
        mov ecx, dword ptr [ebp + 10h]
        sar ecx, 2
        add eax, ecx
        mov dword ptr [ebp + 10h], eax
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 11ch
        idiv ecx
        mov ecx, eax
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp - 4]
        cdq
        mov esi, 11ch
        idiv esi
        cmp ecx, eax
        ; Exact mapped bytes 7D 20: jge 0x585258c0
        __asm _emit 0x7d
        __asm _emit 0x20
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 3B FF FF FF: call 0x585257f0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB 1E: jmp 0x585258de
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 1B FF FF FF: call 0x585257f0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes E9 14 FF FF FF: jmp 0x585257f7
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
