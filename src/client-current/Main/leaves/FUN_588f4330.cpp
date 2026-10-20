// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F4330 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_588f4330() {
    __asm {
        push -1
        push 58989e7bh
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
        lea ecx, [esi + 10h]
        mov dword ptr [esi], 589a19a0h
        xor edi, edi
        mov dword ptr [ecx], 589a1998h
        mov dword ptr [ecx + 0ch], edi
        mov dword ptr [ecx + 8], edi
        mov dword ptr [ecx + 4], edi
        ; Exact mapped bytes E8 28 87 ED FF: call 0x587ccaa0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x87
        __asm _emit 0xed
        __asm _emit 0xff
        lea ecx, [esi + 20h]
        mov dword ptr [esp + 18h], edi
        mov dword ptr [ecx], 589a1998h
        mov dword ptr [ecx + 0ch], edi
        mov dword ptr [ecx + 8], edi
        mov dword ptr [ecx + 4], edi
        ; Exact mapped bytes E8 0D 87 ED FF: call 0x587ccaa0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x87
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [esi + 4], edi
        mov dword ptr [esi + 8], edi
        mov dword ptr [esi + 30h], edi
        mov dword ptr [esi + 0ch], edi
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
        pop edi
        pop esi
        add esp, 10h
        ret
    }
}
