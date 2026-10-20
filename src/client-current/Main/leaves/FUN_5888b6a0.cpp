// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888B6A0 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_5888b6a0() {
    __asm {
        push -1
        push 58987f48h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ecx
        mov dword ptr [esp + 14h], edi
        mov dword ptr [edi], 5899fc38h
        xor ebx, ebx
        mov dword ptr [esp + 20h], ebx
        ; Exact mapped bytes E8 64 FF FF FF: call 0x5888b640
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 60h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5888b6ee
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 60h], ebx
        mov ecx, dword ptr [edi + 64h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0B: je 0x5888b700
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 64h], ebx
        mov ecx, dword ptr [edi + 84h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5888b718
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 84h], ebx
        mov ecx, dword ptr [edi + 88h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x5888b730
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi + 88h], ebx
        lea esi, [edi + 6ch]
        mov ebp, 5
        mov eax, dword ptr [esi + 20h]
        cmp eax, ebx
        ; Exact mapped bytes 74 0C: je 0x5888b74b
        __asm _emit 0x74
        __asm _emit 0x0c
        push eax
        ; Exact mapped bytes E8 FD 14 0F 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x14
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 20h], ebx
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x5888b75b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], ebx
        add esi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 D5: jne 0x5888b738
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, edi
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 9E 74 07 00: call 0x58902c10
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x74
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
    }
}
