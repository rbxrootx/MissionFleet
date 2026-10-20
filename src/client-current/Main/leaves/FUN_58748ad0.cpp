// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58748AD0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_58748ad0() {
    __asm {
        push -1
        push 589807d8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ch
        push esi
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
        mov dword ptr [esp + 8], esi
        mov eax, dword ptr [esi + 18h]
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [eax]
        push eax
        push ecx
        push edx
        push ecx
        lea eax, [esp + 1ch]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 30h], 0
        ; Exact mapped bytes E8 97 FB FF FF: call 0x587486b0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 18h]
        push ecx
        ; Exact mapped bytes E8 20 41 23 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x41
        __asm _emit 0x23
        __asm _emit 0x00
    }
}
