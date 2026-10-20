// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884D360 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_5884d360_5884D360() {
    __asm {
        push ebp
        mov ebp, esp
        push edi
        mov edi, dword ptr [ebp + 8]
        cmp byte ptr [edi + 4], 0
        ; Exact mapped bytes 74 48: je 0x5884d3b5
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 42: je 0x5884d3b5
        __asm _emit 0x74
        __asm _emit 0x42
        lea edx, [ecx + 1]
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x5884d376
        __asm _emit 0x75
        __asm _emit 0xf9
        sub ecx, edx
        push ebx
        push esi
        lea ebx, [ecx + 1]
        push ebx
        ; Exact mapped bytes E8 86 C2 00 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        pop ecx
        test esi, esi
        ; Exact mapped bytes 74 19: je 0x5884d3aa
        __asm _emit 0x74
        __asm _emit 0x19
        push dword ptr [edi]
        push ebx
        push esi
        ; Exact mapped bytes E8 F6 A3 00 00: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, esi
        add esp, 0ch
        xor esi, esi
        mov dword ptr [eax], ecx
        mov byte ptr [eax + 4], 1
        push esi
        ; Exact mapped bytes E8 50 C2 00 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        pop ebx
        ; Exact mapped bytes EB 0B: jmp 0x5884d3c0
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edi]
        mov dword ptr [ecx], eax
        mov byte ptr [ecx + 4], 0
        pop edi
        pop ebp
        ret
    }
}
