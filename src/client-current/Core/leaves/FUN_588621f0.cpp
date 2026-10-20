// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588621F0 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_588621f0() {
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
        ; Exact mapped bytes 25 00 00 F0 7F: and eax, 0x7ff00000
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xf0
        __asm _emit 0x7f
        ; Exact mapped bytes 3D 00 00 F0 7F: cmp eax, 0x7ff00000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xf0
        __asm _emit 0x7f
        ; Exact mapped bytes 75 04: jne 0x58862208
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
