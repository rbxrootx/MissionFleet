// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446310 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_00446310_00446310() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 10: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x10
        ; Exact mapped bytes 8A 45 F0: mov al, byte ptr [ebp - 0x10]
        __asm _emit 0x8a
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 88 45 FC: mov byte ptr [ebp - 4], al
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8D 4D FC: lea ecx, [ebp - 4]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8A 55 14: mov dl, byte ptr [ebp + 0x14]
        __asm _emit 0x8a
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CC: mov ecx, esp
        __asm _emit 0x8b
        __asm _emit 0xcc
        ; Exact mapped bytes 8D 45 10: lea eax, [ebp + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B0 FE FF FF: call 0x4461e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CC: mov ecx, esp
        __asm _emit 0x8b
        __asm _emit 0xcc
        ; Exact mapped bytes 8D 55 0C: lea edx, [ebp + 0xc]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 A4 FE FF FF: call 0x4461e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 BB 11 00 00: call 0x447500
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
