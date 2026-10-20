// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890A190 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_5890a190() {
    __asm {
        sub esp, 0ch
        push esi
        mov esi, dword ptr [esp + 14h]
        push edi
        xor edi, edi
        cmp esi, edi
        ; Exact mapped bytes 74 7B: je 0x5890a21a
        __asm _emit 0x74
        __asm _emit 0x7b
        cmp dword ptr [esi + 1ch], edi
        ; Exact mapped bytes 74 76: je 0x5890a21a
        __asm _emit 0x74
        __asm _emit 0x76
        mov eax, dword ptr [esi + 1ch]
        mov ecx, dword ptr [eax]
        lea edx, [esp + 18h]
        push edx
        push 589a3d18h
        push eax
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 75 5E: jne 0x5890a21a
        __asm _emit 0x75
        __asm _emit 0x5e
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [eax]
        lea edx, [esp + 8]
        push edx
        push -1
        push eax
        mov eax, dword ptr [ecx + 24h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esp + 8]
        sub eax, 1
        ; Exact mapped bytes 75 E4: jne 0x5890a1c0
        __asm _emit 0x75
        __asm _emit 0xe4
        cmp dword ptr [esi + 10h], edi
        ; Exact mapped bytes 74 2E: je 0x5890a20f
        __asm _emit 0x74
        __asm _emit 0x2e
        mov dword ptr [esp + 0ch], edi
        mov dword ptr [esp + 10h], edi
        cmp dword ptr [esi + 24h], edi
        ; Exact mapped bytes 74 14: je 0x5890a202
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [esi + 24h]
        mov ecx, dword ptr [eax]
        push edi
        lea edx, [esp + 10h]
        push edx
        push 1
        push edx
        push eax
        mov eax, dword ptr [ecx + 38h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 1ch]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes EB B1: jmp 0x5890a1c0
        __asm _emit 0xeb
        __asm _emit 0xb1
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes EB A6: jmp 0x5890a1c0
        __asm _emit 0xeb
        __asm _emit 0xa6
        pop edi
        xor eax, eax
        pop esi
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
