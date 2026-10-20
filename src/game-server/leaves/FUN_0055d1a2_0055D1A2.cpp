// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055D1A2 .. +0xC4 bytes.
extern "C" __declspec(naked) void FUN_0055d1a2_0055D1A2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 547h
        push 5cebe0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 A0 DF F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xdf
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8ch]
        add edx, 1
        imul edx, edx, 24h
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 88h]
        push ecx
        ; Exact mapped bytes E8 C1 D4 F4 FF: call 0x4aa6a0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xd4
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 88h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8ch]
        imul ecx, ecx, 24h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 88h]
        add eax, ecx
        mov dword ptr [ebp - 4], eax
        mov esi, dword ptr [ebp + 8]
        mov ecx, 5
        mov edi, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 05 32 F5 FF: call 0x4b0420
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x32
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 14h], eax
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 F3 31 F5 FF: call 0x4b0420
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x31
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 18h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx + 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8ch], eax
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
