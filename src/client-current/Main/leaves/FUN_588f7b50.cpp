// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F7B50 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_588f7b50() {
    __asm {
        ; Exact mapped bytes 8B 81 00 01 00 00: mov eax, dword ptr [ecx + 0x100]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 49 60: mov ecx, dword ptr [ecx + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x60
        ; Exact mapped bytes 35 6B E0 0A C2: xor eax, 0xc20ae06b
        __asm _emit 0x35
        __asm _emit 0x6b
        __asm _emit 0xe0
        __asm _emit 0x0a
        __asm _emit 0xc2
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D F0 45 A2 58: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 4E 00 00: call 0x588fca30
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
