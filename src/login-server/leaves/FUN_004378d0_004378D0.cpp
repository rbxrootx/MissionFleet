// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004378D0 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_004378d0_004378D0() {
    __asm {
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr [esp + 0ch]
        mov eax, dword ptr [ebx]
        push edi
        push esi
        ; Exact mapped bytes FF 50 44: call dword ptr [eax + 0x44]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x44
        test eax, eax
        ; Exact mapped bytes 0F 85 91 00 00 00: jne 0x437978
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        mov ecx, ebx
        ; Exact mapped bytes FF 50 38: call dword ptr [eax + 0x38]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x38
        mov edi, eax
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 39 05 38 02 44 00: cmp dword ptr [0x440238], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 40: jne 0x43793a
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [esi + 4]
        ; Exact mapped bytes 3B 05 3C 02 44 00: cmp eax, dword ptr [0x44023c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 35: jne 0x43793a
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [esi + 8]
        ; Exact mapped bytes 3B 05 40 02 44 00: cmp eax, dword ptr [0x440240]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 2A: jne 0x43793a
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 0ch]
        ; Exact mapped bytes 3B 05 44 02 44 00: cmp eax, dword ptr [0x440244]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 1F: jne 0x43793a
        __asm _emit 0x75
        __asm _emit 0x1f
        mov ecx, dword ptr [edi + 4]
        xor edx, edx
        cmp dword ptr [ecx], edx
        ; Exact mapped bytes 74 0E: je 0x437932
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx + 4]
        add eax, ebx
        cmp dword ptr [eax], edx
        ; Exact mapped bytes 75 4B: jne 0x437978
        __asm _emit 0x75
        __asm _emit 0x4b
        add ecx, 8
        ; Exact mapped bytes EB EE: jmp 0x437920
        __asm _emit 0xeb
        __asm _emit 0xee
        mov edi, dword ptr [edi]
        cmp edi, edx
        ; Exact mapped bytes 75 E3: jne 0x43791b
        __asm _emit 0x75
        __asm _emit 0xe3
        ; Exact mapped bytes EB 3C: jmp 0x437976
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov edx, dword ptr [edi + 4]
        mov ecx, dword ptr [edx]
        test ecx, ecx
        ; Exact mapped bytes 74 2D: je 0x437970
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [esi]
        cmp dword ptr [ecx], eax
        ; Exact mapped bytes 75 22: jne 0x43796b
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [esi + 4]
        ; Exact mapped bytes 75 1A: jne 0x43796b
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [esi + 8]
        ; Exact mapped bytes 75 12: jne 0x43796b
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ecx + 0ch]
        cmp eax, dword ptr [esi + 0ch]
        ; Exact mapped bytes 75 0A: jne 0x43796b
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [edx + 4]
        add eax, ebx
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 0D: jne 0x437978
        __asm _emit 0x75
        __asm _emit 0x0d
        add edx, 8
        ; Exact mapped bytes EB CD: jmp 0x43793d
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov edi, dword ptr [edi]
        test edi, edi
        ; Exact mapped bytes 75 C4: jne 0x43793a
        __asm _emit 0x75
        __asm _emit 0xc4
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
