// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858DE9 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_58858de9_58858DE9() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 8]
        test edi, edi
        ; Exact mapped bytes 74 45: je 0x58858e3f
        __asm _emit 0x74
        __asm _emit 0x45
        cmp dword ptr [esi + 10h], 0
        ; Exact mapped bytes 74 3F: je 0x58858e3f
        __asm _emit 0x74
        __asm _emit 0x3f
        and dword ptr [ebp - 4], 0
        cmp byte ptr [esi + 14h], 0
        ; Exact mapped bytes 75 22: jne 0x58858e2c
        __asm _emit 0x75
        __asm _emit 0x22
        push esi
        push dword ptr [esi + 10h]
        lea eax, [ebp - 4]
        push eax
        ; Exact mapped bytes E8 B1 FF FF FF: call 0x58858dc8
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi + 0ch]
        mov edi, dword ptr [ebp - 4]
        push dword ptr [esi + 8]
        push dword ptr [esi + 10h]
        push edi
        ; Exact mapped bytes E8 12 DC FF FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        mov ecx, dword ptr [esi]
        mov eax, edi
        and dword ptr [esi + 10h], 0
        mov dword ptr [esi + 8], ecx
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [esi + 0ch], ecx
        ; Exact mapped bytes EB 02: jmp 0x58858e41
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        leave
        ret
    }
}
