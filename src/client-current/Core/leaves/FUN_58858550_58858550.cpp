// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858550 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_58858550_58858550() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push dword ptr [ebp + 10h]
        mov esi, dword ptr [ebp + 8]
        lea eax, [ebp - 18h]
        xor ebx, ebx
        push eax
        mov dword ptr [ebp - 18h], ebx
        lea eax, [esi + 24h]
        mov dword ptr [ebp - 14h], ebx
        push eax
        mov dword ptr [ebp - 10h], ebx
        mov dword ptr [ebp - 0ch], ebx
        mov dword ptr [ebp - 8], ebx
        mov byte ptr [ebp - 4], bl
        ; Exact mapped bytes E8 14 FC FF FF: call 0x58858195
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x5885859c
        __asm _emit 0x74
        __asm _emit 0x14
        cmp byte ptr [ebp - 4], bl
        ; Exact mapped bytes 74 09: je 0x58858596
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7B 46 01 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        xor al, al
        pop esi
        pop ebx
        leave
        ret
        push edi
        mov edi, dword ptr [ebp + 0ch]
        push dword ptr [ebp - 10h]
        push 104h
        lea eax, [edi + 24h]
        push eax
        ; Exact mapped bytes E8 DF F1 FF FF: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 41: jne 0x588585f9
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [esi]
        mov dword ptr [edi], eax
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 0ch]
        mov dword ptr [edi + 8], eax
        mov dword ptr [edi + 0ch], ecx
        mov eax, dword ptr [esi + 10h]
        mov ecx, dword ptr [esi + 14h]
        mov dword ptr [edi + 10h], eax
        mov dword ptr [edi + 14h], ecx
        mov eax, dword ptr [esi + 18h]
        mov ecx, dword ptr [esi + 1ch]
        mov dword ptr [edi + 18h], eax
        mov dword ptr [edi + 1ch], ecx
        mov eax, dword ptr [esi + 20h]
        mov dword ptr [edi + 20h], eax
        pop edi
        cmp byte ptr [ebp - 4], bl
        ; Exact mapped bytes 74 09: je 0x588585f5
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1C 46 01 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov al, 1
        ; Exact mapped bytes EB 9F: jmp 0x58858598
        __asm _emit 0xeb
        __asm _emit 0x9f
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 D6 89 FF FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
