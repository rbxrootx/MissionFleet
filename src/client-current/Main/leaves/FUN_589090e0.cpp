// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589090E0 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_589090e0() {
    __asm {
        push -1
        push 5897f888h
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
        mov dword ptr [esi], 589a2a48h
        mov eax, dword ptr [esi + 0f0h]
        mov dword ptr [esp + 14h], 0
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x58909133
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 1C 3B 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x3b
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0f0h], 0
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 1E 9C FF FF: call 0x58902d60
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 0ch]
    }
}
