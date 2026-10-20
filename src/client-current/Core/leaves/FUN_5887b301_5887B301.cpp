// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B301 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_5887b301_5887B301() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        push ebx
        push esi
        push edi
        test eax, eax
        ; Exact mapped bytes 74 5B: je 0x5887b36b
        __asm _emit 0x74
        __asm _emit 0x5b
        cmp eax, 400h
        ; Exact mapped bytes 74 54: je 0x5887b36b
        __asm _emit 0x74
        __asm _emit 0x54
        cmp eax, 800h
        ; Exact mapped bytes 74 4D: je 0x5887b36b
        __asm _emit 0x74
        __asm _emit 0x4d
        cmp dword ptr [ebp + 0ch], 0
        mov esi, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 04: jne 0x5887b32b
        __asm _emit 0x75
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 7F 40: jg 0x5887b36b
        __asm _emit 0x7f
        __asm _emit 0x40
        test esi, esi
        ; Exact mapped bytes 78 3C: js 0x5887b36b
        __asm _emit 0x78
        __asm _emit 0x3c
        push eax
        ; Exact mapped bytes E8 35 FF FF FF: call 0x5887b26a
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test eax, eax
        ; Exact mapped bytes 78 31: js 0x5887b36b
        __asm _emit 0x78
        __asm _emit 0x31
        mov ebx, dword ptr [eax*8 + 588ce3bch]
        push 55h
        push ebx
        ; Exact mapped bytes E8 77 E0 FD FF: call 0x588593c0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edi, eax
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 7E 15: jle 0x5887b366
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp edi, esi
        ; Exact mapped bytes 7D 16: jge 0x5887b36b
        __asm _emit 0x7d
        __asm _emit 0x16
        push ebx
        push esi
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 21 BC FE FF: call 0x58866f80
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x5887b372
        __asm _emit 0x75
        __asm _emit 0x0c
        lea eax, [edi + 1]
        ; Exact mapped bytes EB 02: jmp 0x5887b36d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 5B 5C FD FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
    }
}
