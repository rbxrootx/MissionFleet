// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58735340 .. +0x135 bytes.
extern "C" __declspec(naked) void FUN_58735340_58735340() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        push 390h
        ; Exact mapped bytes E8 B1 BC 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xbc
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 8], ecx
        push 0ceh
        ; Exact mapped bytes E8 98 BC 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xbc
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ch], eax
        push 0ach
        ; Exact mapped bytes E8 7F BC 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xbc
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 10h], edx
        push 0a4h
        ; Exact mapped bytes E8 66 BC 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xbc
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [eax + 14h], ecx
        push 9ch
        ; Exact mapped bytes E8 4D BC 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xbc
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 18h], eax
        push 9ch
        ; Exact mapped bytes E8 34 BC 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xbc
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 1ch], edx
        push 9ch
        ; Exact mapped bytes E8 1B BC 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xbc
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + 20h], ecx
        push 9ch
        ; Exact mapped bytes E8 02 BC 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xbc
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [edx + 24h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58735423
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 48: jge 0x58735471
        __asm _emit 0x7d
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 28h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 0a8h]
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [eax + edx], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 0a8h]
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax], 0
        ; Exact mapped bytes EB A9: jmp 0x5873541a
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov esp, ebp
        pop ebp
        ret
    }
}
