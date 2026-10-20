// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588707CF .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_588707cf_588707CF() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        push esi
        ; Exact mapped bytes E8 1A AA 00 00: call 0x5887b1fb
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 5F: je 0x58870845
        __asm _emit 0x74
        __asm _emit 0x5f
        mov edi, esi
        and esi, 3fh
        sar edi, 6
        imul ebx, esi, 38h
        mov eax, dword ptr [edi*4 + 589699b0h]
        cmp byte ptr [eax + ebx + 28h], 0
        ; Exact mapped bytes 7D 46: jge 0x58870845
        __asm _emit 0x7d
        __asm _emit 0x46
        mov esi, dword ptr [ebp + 0ch]
        cmp byte ptr [esi + 14h], 0
        ; Exact mapped bytes 75 07: jne 0x5887080f
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 91 56 FE FF: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0ch]
        cmp dword ptr [eax + 0a8h], 0
        ; Exact mapped bytes 75 0E: jne 0x58870829
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [edi*4 + 589699b0h]
        cmp byte ptr [eax + ebx + 29h], 0
        ; Exact mapped bytes 74 1C: je 0x58870845
        __asm _emit 0x74
        __asm _emit 0x1c
        lea eax, [ebp - 4]
        push eax
        mov eax, dword ptr [edi*4 + 589699b0h]
        push dword ptr [eax + ebx + 18h]
        ; Exact mapped bytes FF 15 CC 41 89 58: call dword ptr [0x588941cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        setne al
        ; Exact mapped bytes EB 02: jmp 0x58870847
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
