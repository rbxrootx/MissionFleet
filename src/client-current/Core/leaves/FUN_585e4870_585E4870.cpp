// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E4870 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_585e4870_585E4870() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 408h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 408h], ecx
        mov eax, 1
        imul ecx, eax, 0
        mov byte ptr [ebp + ecx - 404h], 0
        mov edx, 1
        imul eax, edx, 0
        mov byte ptr [ebp + eax - 3ech], 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 3d4h]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 404h]
        push eax
        push 0
        push 8020000h
        mov ecx, dword ptr [ebp - 408h]
        ; Exact mapped bytes E8 4D F3 FF FF: call 0x585e3c20
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 72 C7 24 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc7
        __asm _emit 0x24
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
