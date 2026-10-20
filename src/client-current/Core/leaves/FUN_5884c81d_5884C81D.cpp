// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884C81D .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_5884c81d_5884C81D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 18h]
        test ecx, ecx
        ; Exact mapped bytes 74 2D: je 0x5884c859
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [esi + 1ch]
        mov edi, dword ptr [ebp + 0ch]
        lea eax, [edx + edi]
        cmp eax, dword ptr [esi + 20h]
        ; Exact mapped bytes 72 09: jb 0x5884c843
        __asm _emit 0x72
        __asm _emit 0x09
        mov dword ptr [esi + 0ch], 30000h
        ; Exact mapped bytes EB 3B: jmp 0x5884c87e
        __asm _emit 0xeb
        __asm _emit 0x3b
        push edi
        push dword ptr [ebp + 8]
        add ecx, edx
        push ecx
        ; Exact mapped bytes E8 41 00 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, edi
        add dword ptr [esi + 1ch], edi
        ; Exact mapped bytes EB 27: jmp 0x5884c880
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x5884c877
        __asm _emit 0x74
        __asm _emit 0x18
        push 0
        lea ecx, [ebp - 4]
        push ecx
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 09: jmp 0x5884c880
        __asm _emit 0xeb
        __asm _emit 0x09
        mov dword ptr [esi + 0ch], 1000000h
        xor eax, eax
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
