// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588647AD .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_588647ad() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 83 E0 1F: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 2B C8: sub ecx, eax
        __asm _emit 0x2b
        __asm _emit 0xc8
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes D3 C8: ror eax, cl
        __asm _emit 0xd3
        __asm _emit 0xc8
        ; Exact mapped bytes 33 05 40 60 90 58: xor eax, dword ptr [0x58906040]
        __asm _emit 0x33
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
