// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58977410 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_58977410() {
    __asm {
        push ebp
        push esi
        mov esi, dword ptr [esp + 0ch]
        push edi
        push 0dah
        push esi
        ; Exact mapped bytes E8 2E F9 FF FF: call 0x58976d50
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0e4h]
        lea ecx, [eax + eax + 6]
        push ecx
        push esi
        ; Exact mapped bytes E8 7D F9 FF FF: call 0x58976db0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0e4h]
        push edx
        push esi
        ; Exact mapped bytes E8 30 F9 FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0e4h]
        add esp, 18h
        xor ebp, ebp
        test eax, eax
        ; Exact mapped bytes 7E 65: jle 0x589774b4
        __asm _emit 0x7e
        __asm _emit 0x65
        push ebx
        lea ebx, [esi + 0e8h]
        mov edi, dword ptr [ebx]
        mov eax, dword ptr [edi]
        push eax
        push esi
        ; Exact mapped bytes E8 0F F9 FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov cl, byte ptr [esi + 0d4h]
        mov eax, dword ptr [edi + 14h]
        mov edi, dword ptr [edi + 18h]
        add esp, 8
        test cl, cl
        ; Exact mapped bytes 74 22: je 0x58977496
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [esi + 12ch]
        test ecx, ecx
        ; Exact mapped bytes 75 16: jne 0x58977494
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [esi + 134h]
        xor edi, edi
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x58977496
        __asm _emit 0x74
        __asm _emit 0x0c
        mov cl, byte ptr [esi + 0b1h]
        test cl, cl
        ; Exact mapped bytes 75 02: jne 0x58977496
        __asm _emit 0x75
        __asm _emit 0x02
        xor eax, eax
        shl eax, 4
        add eax, edi
        push eax
        push esi
        ; Exact mapped bytes E8 CE F8 FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0e4h]
        add esp, 8
        inc ebp
        add ebx, 4
        cmp ebp, eax
        ; Exact mapped bytes 7C A3: jl 0x58977456
        __asm _emit 0x7c
        __asm _emit 0xa3
        pop ebx
        mov ecx, dword ptr [esi + 12ch]
        push ecx
        push esi
        ; Exact mapped bytes E8 AF F8 FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 130h]
        push edx
        push esi
        ; Exact mapped bytes E8 A2 F8 FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 134h]
        mov edi, dword ptr [esi + 138h]
        shl eax, 4
        add eax, edi
        push eax
        push esi
        ; Exact mapped bytes E8 8A F8 FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        pop edi
        pop esi
        pop ebp
        ret
    }
}
