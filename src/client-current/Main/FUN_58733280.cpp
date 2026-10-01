// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58733280 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_58733280() {
    __asm {
        push -1
        push 5897dac8h
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
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 8], esi
        mov eax, dword ptr [esp + 40h]
        mov ecx, dword ptr [esp + 3ch]
        mov edx, dword ptr [esp + 38h]
        push eax
        mov eax, dword ptr [esp + 38h]
        push ecx
        mov ecx, dword ptr [esp + 38h]
        push edx
        mov edx, dword ptr [esp + 38h]
        push eax
        mov eax, dword ptr [esp + 38h]
        push ecx
        mov ecx, dword ptr [esp + 38h]
        push edx
        mov edx, dword ptr [esp + 34h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 24 E4 FF FF: call 0x58731700
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        push 80h
        mov dword ptr [esp + 18h], 0
        mov dword ptr [esi], 5898c94ch
        ; Exact mapped bytes E8 5A 99 24 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x99
        __asm _emit 0x24
        __asm _emit 0x00
        push 80h
        push 0
        push eax
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes E8 44 99 24 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x99
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [esp + 30h]
        add esp, 10h
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 CD E9 FF FF: call 0x58731ce0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        mov ecx, dword ptr [esp + 0ch]
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
        add esp, 10h
        ret 28h
    }
}
