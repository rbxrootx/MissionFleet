// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040409F .. +0x176 bytes.
extern "C" __declspec(naked) void FUN_0040409f_0040409F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 8], 0
        push 217bch
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0ch
        push ecx
        ; Exact mapped bytes E8 96 52 0A 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x52
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4040ef
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 64h
        ; Exact mapped bytes 73 53: jae 0x404148
        __asm _emit 0x73
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + eax*4 + 0a0h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + edx + 2f0h], 1
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 284h]
        or eax, 0fffffffeh
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + ecx + 284h], eax
        ; Exact mapped bytes EB 9E: jmp 0x4040e6
        __asm _emit 0xeb
        __asm _emit 0x9e
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x40415a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 32h
        ; Exact mapped bytes 0F 83 89 00 00 00: jae 0x4041ed
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + ecx*4 + 16b20h], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 370h
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + eax + 16be8h], 1
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x40419e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 44: jge 0x4041e8
        __asm _emit 0x7d
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 370h
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [ecx + eax + 16be8h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + eax*4 + 2f0h], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 370h
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 16be8h]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + ecx*4 + 270h], 0ffffffffh
        ; Exact mapped bytes EB AD: jmp 0x404195
        __asm _emit 0xeb
        __asm _emit 0xad
        ; Exact mapped bytes E9 64 FF FF FF: jmp 0x404151
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 217c8h], 0
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 217cch], 0
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 CF 45 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x45
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
