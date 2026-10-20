// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58874539 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_58874539() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 45 08: cmp eax, dword ptr [ebp + 8]
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 76 05: jbe 0x5887454b
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 1B C0: sbb eax, eax
        __asm _emit 0x1b
        __asm _emit 0xc0
        ; Exact mapped bytes F7 D8: neg eax
        __asm _emit 0xf7
        __asm _emit 0xd8
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
