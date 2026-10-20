// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884C2E6 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_5884c2e6_5884C2E6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 64h]
        test ecx, ecx
        ; Exact mapped bytes 74 3B: je 0x5884c330
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [edi + 6ch]
        mov esi, dword ptr [edi + 68h]
        cmp eax, esi
        ; Exact mapped bytes 73 6E: jae 0x5884c36d
        __asm _emit 0x73
        __asm _emit 0x6e
        sub esi, eax
        cmp esi, dword ptr [ebp + 0ch]
        cmova esi, dword ptr [ebp + 0ch]
        add eax, ecx
        push esi
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7C 05 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add dword ptr [edi + 6ch], esi
        add dword ptr [edi + 54h], esi
        push esi
        push dword ptr [ebp + 8]
        push dword ptr [edi + 58h]
        ; Exact mapped bytes E8 5C DE FF FF: call 0x5884a182
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov dword ptr [edi + 58h], eax
        mov eax, esi
        ; Exact mapped bytes EB 3F: jmp 0x5884c36f
        __asm _emit 0xeb
        __asm _emit 0x3f
        cmp dword ptr [edi + 5ch], 0
        ; Exact mapped bytes 74 30: je 0x5884c366
        __asm _emit 0x74
        __asm _emit 0x30
        push 0
        lea eax, [ebp - 4]
        push eax
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push dword ptr [edi + 5ch]
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x5884c36d
        __asm _emit 0x74
        __asm _emit 0x1e
        mov esi, dword ptr [ebp - 4]
        add dword ptr [edi + 54h], esi
        push esi
        push dword ptr [ebp + 8]
        push dword ptr [edi + 58h]
        ; Exact mapped bytes E8 21 DE FF FF: call 0x5884a182
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB C3: jmp 0x5884c329
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov dword ptr [edi + 0ch], 1000000h
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
