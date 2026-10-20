// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882E550 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_5882e550_5882E550() {
    __asm {
        push ebp
        mov ebp, esp
        push 1
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 03 05 D8 60 96 58: add eax, dword ptr [0x589660d8]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 03 0D D4 60 96 58: add ecx, dword ptr [0x589660d4]
        __asm _emit 0x03
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C 65 D0 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x65
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes 2B 05 D8 60 96 58: sub eax, dword ptr [0x589660d8]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A 8C CA FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x8c
        __asm _emit 0xca
        __asm _emit 0xff
        ; Exact mapped bytes 2B 05 D4 60 96 58: sub eax, dword ptr [0x589660d4]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xd4
        __asm _emit 0x60
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 15 1C 5F 96 58: mov edx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes FF 15 40 44 89 58: call dword ptr [0x58894440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 F5 F8 FF: call 0x587bdb30
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, 1
        pop ebp
        ret
    }
}
