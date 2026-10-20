// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58794C90 .. +0xCA bytes.
extern "C" __declspec(naked) void FUN_58794c90() {
    __asm {
        push -1
        push 589804c8h
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
        lea eax, [esp + 14h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 10h], esi
        mov eax, dword ptr [esp + 34h]
        mov edi, dword ptr [esp + 30h]
        mov ebx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 24h]
        push eax
        push edi
        push ebx
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 86 CF F9 FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xcf
        __asm _emit 0xf9
        __asm _emit 0xff
        push 102h
        mov ecx, esi
        mov dword ptr [esp + 20h], 0
        mov dword ptr [esi], 58997cech
        ; Exact mapped bytes E8 2C E0 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xe0
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, ebx
        mov edx, edi
        imul ecx, ecx, 64h
        imul edx, edx, 64h
        mov eax, 0bfffh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        xor eax, eax
        mov dword ptr [esi + 68h], ecx
        mov dword ptr [esi + 6ch], edx
        mov dword ptr [esi + 70h], 0
        mov dword ptr [esi + 94h], ebx
        mov dword ptr [esi + 98h], edi
        mov dword ptr [esi + 74h], eax
        mov dword ptr [esi + 78h], eax
        mov dword ptr [esi + 7ch], eax
        mov dword ptr [esi + 80h], eax
        mov dword ptr [esi + 84h], eax
        mov dword ptr [esi + 88h], eax
        mov dword ptr [esi + 9ch], eax
        mov eax, esi
        mov ecx, dword ptr [esp + 14h]
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
        add esp, 10h
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
