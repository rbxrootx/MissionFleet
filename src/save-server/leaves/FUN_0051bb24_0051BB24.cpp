// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051BB24 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_0051bb24_0051BB24() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58da59h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 60h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 68h], ecx
        mov ecx, 68709ch
        ; Exact mapped bytes E8 C1 84 02 00: call 0x544010
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 34 A7 FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xa7
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 50h
        cmp eax, 50h
        ; Exact mapped bytes 0F 85 A5 00 00 00: jne 0x51bc0b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 68h]
        push eax
        lea ecx, [ebp - 64h]
        ; Exact mapped bytes E8 1F CA FC FF: call 0x4e8591
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xca
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 B7 FB 00 00: call 0x52b738
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 64h]
        ; Exact mapped bytes E8 DA A8 FC FF: call 0x4e6464
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 50h]
        push ecx
        lea ecx, [ebp - 64h]
        ; Exact mapped bytes E8 0E A7 01 00: call 0x5362a7
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51bbb1
        __asm _emit 0x75
        __asm _emit 0x14
        push 1bch
        push 6769f8h
        ; Exact mapped bytes E8 94 D1 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51bbb1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x51bb8d
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 18h]
        push eax
        lea ecx, [ebp - 64h]
        ; Exact mapped bytes E8 A1 A8 FC FF: call 0x4e6464
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 68h]
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ecx + 3ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 68h]
        cmp ecx, dword ptr [edx + 3ch]
        ; Exact mapped bytes 7E 0E: jle 0x51bbeb
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 1
        mov dword ptr [ebp - 6ch], ecx
        ; Exact mapped bytes EB 09: jmp 0x51bbf4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 68h]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 64h]
        ; Exact mapped bytes E8 3A CA FC FF: call 0x4e8643
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xca
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 0C: jmp 0x51bc17
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
