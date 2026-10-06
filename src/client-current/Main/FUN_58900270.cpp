// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58900270 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_58900270() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes E8 88 31 00 00: call 0x58903400
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 84 45 A2 58: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 48 30: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x30
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 18: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x18
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 64: push 0x64
        __asm _emit 0x6a
        __asm _emit 0x64
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 4E 74: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x74
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 08 94 EC FF: call 0x587c96a0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x94
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4E 78: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x78
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 FC 93 EC FF: call 0x587c96a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x93
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4E 7C: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x7c
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes E9 93 F6 E5 FF: jmp 0x5875f940
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0xf6
        __asm _emit 0xe5
        __asm _emit 0xff
    }
}
