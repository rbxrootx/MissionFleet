// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58979390 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_58979390() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 74 24 08: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 6A 07: push 7
        __asm _emit 0x6a
        __asm _emit 0x07
        ; Exact mapped bytes 6A 7F: push 0x7f
        __asm _emit 0x6a
        __asm _emit 0x7f
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 D1 FD FF FF: call 0x58979170
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 46 18: mov dword ptr [esi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x18
        ; Exact mapped bytes 89 46 1C: mov dword ptr [esi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x1c
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
