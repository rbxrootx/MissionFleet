// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C9270 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_587c9270() {
    __asm {
        push -1
        push 58988648h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
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
        lea eax, [esp + 10h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 0ch], esi
        mov dword ptr [esi], 5899afe4h
        mov ecx, dword ptr [esi + 0f4h]
        xor edi, edi
        mov dword ptr [esp + 18h], edi
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x587c92bd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0f4h], edi
        mov ecx, dword ptr [esi + 0f8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x587c92d5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0f8h], edi
        mov ecx, dword ptr [esi + 0e8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x587c92ed
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0e8h], edi
        mov ecx, dword ptr [esi + 0ech]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x587c9305
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0ech], edi
        mov ecx, esi
        mov dword ptr [esp + 18h], 0ffffffffh
        ; Exact mapped bytes E8 FC 98 13 00: call 0x58902c10
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x98
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
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
        add esp, 10h
        ret
    }
}
