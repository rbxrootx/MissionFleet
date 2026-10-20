// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10001380 .. +0xE3 bytes.
extern "C" __declspec(naked) void FUN_10001380_10001380() {
    __asm {
        push -1
        push 1016cdf6h
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
        sub esp, 8
        push ebx
        mov al, byte ptr [esp + 1ch]
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor ebx, ebx
        mov dword ptr [esp + 10h], edi
        lea esi, [edi + 0ch]
        mov byte ptr [esi], al
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esi + 0ch], ebx
        mov eax, dword ptr [esp + 28h]
        mov dword ptr [edi], 10175210h
        mov dword ptr [edi + 8], eax
        mov dword ptr [esp + 20h], ebx
        mov eax, dword ptr [eax + 88h]
        mov ebp, dword ptr [eax + 4]
        mov ecx, dword ptr [eax + 8]
        cmp ebp, ecx
        ; Exact mapped bytes 74 51: je 0x10001428
        __asm _emit 0x74
        __asm _emit 0x51
        push 20h
        ; Exact mapped bytes E8 C2 B3 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xb3
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        cmp eax, ebx
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes 74 0D: je 0x100013fb
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 47 BA 00 00: call 0x1000ce40
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100013fd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        lea edx, [esp + 28h]
        mov dword ptr [esp + 28h], eax
        mov eax, dword ptr [esi + 8]
        push edx
        push 1
        push eax
        mov ecx, esi
        mov byte ptr [esp + 2ch], bl
        ; Exact mapped bytes E8 F9 47 09 00: call 0x10095c10
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 8]
        add ebp, 4
        mov edx, dword ptr [ecx + 88h]
        cmp ebp, dword ptr [edx + 8]
        ; Exact mapped bytes 75 AF: jne 0x100013d7
        __asm _emit 0x75
        __asm _emit 0xaf
        mov eax, dword ptr [esi + 4]
        cmp eax, ebx
        ; Exact mapped bytes 74 17: je 0x10001446
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [esi + 8]
        sub ecx, eax
        sar ecx, 2
        ; Exact mapped bytes 74 0D: je 0x10001446
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [edi + 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [edi + 4], ecx
        ; Exact mapped bytes EB 03: jmp 0x10001449
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [edi + 4], ebx
        mov ecx, dword ptr [esp + 18h]
        mov dword ptr [edi + 1ch], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
