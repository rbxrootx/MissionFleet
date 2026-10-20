// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58853881 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_58853881_58853881() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        mov esi, ecx
        lea edx, [ebp - 4]
        push edi
        xor ebx, ebx
        inc ebx
        mov edi, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 0ch]
        push ebx
        dec ecx
        mov eax, dword ptr [edi + 18h]
        push 0ah
        push ecx
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [edi + 1ch]
        push ecx
        mov dword ptr [ebp - 0ch], eax
        mov eax, esp
        push edi
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E8 F5 E4 FF FF: call 0x58851db1
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        add esp, 14h
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [esi + 8]
        cmp byte ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 06: je 0x588538d5
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [eax + 18h], 22h
        ; Exact mapped bytes 74 08: je 0x588538dd
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [esi + 0ch]
        ; Exact mapped bytes 73 04: jae 0x588538e1
        __asm _emit 0x73
        __asm _emit 0x04
        xor bl, bl
        ; Exact mapped bytes EB 03: jmp 0x588538e4
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [esi + 0ch], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edi + 18h], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edi + 1ch], eax
        mov al, bl
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
