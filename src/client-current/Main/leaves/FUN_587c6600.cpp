// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C6600 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_587c6600() {
    __asm {
        push -1
        push 589814a8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 8
        push ebx
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
        lea eax, [esp + 10h]
        push eax
        ; Exact mapped bytes E8 90 E1 FF FF: call 0x587c47c0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov dword ptr [esp + 24h], 0
        ; Exact mapped bytes E8 E2 FD FF FF: call 0x587c6420
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esp + 14h]
        add esp, 4
        mov ebx, eax
        mov dword ptr [esp + 20h], 0ffffffffh
        test edi, edi
        ; Exact mapped bytes 74 3D: je 0x587c6690
        __asm _emit 0x74
        __asm _emit 0x3d
        push 0
        lea ecx, [esp + 18h]
        ; Exact mapped bytes E8 A2 B0 1A 00: call 0x58971700
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xb0
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        test eax, eax
        ; Exact mapped bytes 76 09: jbe 0x587c666e
        __asm _emit 0x76
        __asm _emit 0x09
        cmp eax, -1
        ; Exact mapped bytes 73 04: jae 0x587c666e
        __asm _emit 0x73
        __asm _emit 0x04
        dec eax
        mov dword ptr [edi + 4], eax
        mov esi, dword ptr [edi + 4]
        neg esi
        sbb esi, esi
        not esi
        lea ecx, [esp + 14h]
        and esi, edi
        ; Exact mapped bytes E8 A6 B0 1A 00: call 0x58971728
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xb0
        __asm _emit 0x1a
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 0A: je 0x587c6690
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [edx + 18h]
        push eax
        mov ecx, ebx
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
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
        pop ebx
        add esp, 14h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
