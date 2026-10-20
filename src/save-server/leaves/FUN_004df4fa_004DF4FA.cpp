// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DF4FA .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_004df4fa_004DF4FA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 120h
        mov dword ptr [ebp - 120h], ecx
        mov dword ptr [ebp - 11ch], 0
        push 52h
        push 6790dch
        mov eax, dword ptr [ebp - 120h]
        push eax
        ; Exact mapped bytes E8 3A AD FF FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 8F 2F 01 00: call 0x4f24c0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 118h]
        push ecx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 26 00 00 00: call 0x4df569
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 106h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 26 D4 FE FF: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 11ch]
        or al, 1
        mov dword ptr [ebp - 11ch], eax
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
