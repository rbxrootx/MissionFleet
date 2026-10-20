// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C5410 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_587c5410() {
    __asm {
        push -1
        push 589812e4h
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
        xor ebx, ebx
        push ebx
        ; Exact mapped bytes E8 BF C2 1A 00: call 0x58971700
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc2
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, 0fh
        mov dword ptr [esi + 1ch], eax
        mov dword ptr [esi + 18h], ebx
        mov dword ptr [esp + 18h], ebx
        mov byte ptr [esi + 8], bl
        mov dword ptr [esi + 38h], eax
        mov dword ptr [esi + 34h], ebx
        mov byte ptr [esi + 24h], bl
        mov dword ptr [esi + 54h], eax
        mov dword ptr [esi + 50h], ebx
        mov byte ptr [esi + 40h], bl
        mov dword ptr [esi + 70h], eax
        mov dword ptr [esi + 6ch], ebx
        mov byte ptr [esi + 5ch], bl
        mov eax, dword ptr [esp + 20h]
        push eax
        push esi
        mov byte ptr [esp + 20h], 4
        ; Exact mapped bytes E8 CA C5 1A 00: call 0x58971a48
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc5
        __asm _emit 0x1a
        __asm _emit 0x00
        add esp, 8
        mov eax, esi
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
        pop esi
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
