// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043DA50 .. +0x1C9 bytes.
extern "C" __declspec(naked) void FUN_0043da50_0043DA50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        mov dword ptr [ebp - 3ch], ecx
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sar edx, 2
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 73 08: jae 0x43da7a
        __asm _emit 0x73
        __asm _emit 0x08
        lea ecx, [ebp + 14h]
        mov dword ptr [ebp - 40h], ecx
        ; Exact mapped bytes EB 06: jmp 0x43da80
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp - 0ch]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3A: je 0x43dad1
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 4]
        shl eax, 2
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 80h
        ; Exact mapped bytes 76 11: jbe 0x43daba
        __asm _emit 0x76
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 AE E9 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 0F: jmp 0x43dac9
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 FD 64 FF FF: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x43dad8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 75 08: jne 0x43daf6
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4ch], edx
        ; Exact mapped bytes EB 22: jmp 0x43db18
        __asm _emit 0xeb
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 56 81 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        sub ecx, dword ptr [ebp - 1ch]
        add eax, ecx
        mov dword ptr [ebp - 4ch], eax
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB 12: jmp 0x43db3e
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 24h]
        sub edx, 1
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 20h]
        add eax, 4
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 76 0C: jbe 0x43db50
        __asm _emit 0x76
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB DC: jmp 0x43db2c
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 18h]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 75 41: jne 0x43dba4
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 08: jne 0x43db7c
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 22: jmp 0x43db9e
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 D0 80 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, dword ptr [ebp + 8]
        add eax, ecx
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx]
        sar edx, 2
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 30: je 0x43dbf3
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 38h]
        shl edx, 2
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 80h
        ; Exact mapped bytes 76 0E: jbe 0x43dbe3
        __asm _emit 0x76
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 CB E8 08 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 10: jmp 0x43dbf3
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 80 65 FF FF: call 0x434170
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*4]
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ecx + 8], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
