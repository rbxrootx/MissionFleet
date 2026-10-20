// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883F111 .. +0xE6 bytes.
extern "C" __declspec(naked) void FUN_5883f111_5883F111() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58892c11h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 38h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp + 8]
        mov al, byte ptr [eax]
        mov ecx, dword ptr [ebp - 1ch]
        mov byte ptr [ecx], al
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 11 40 04: movss dword ptr [eax + 4], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x40
        __asm _emit 0x04
        mov eax, dword ptr [ebp - 14h]
        add eax, 8
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 20h], eax
        push dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 AF FC FF FF: call 0x5883ee1d
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 14h]
        add eax, 10h
        mov dword ptr [ebp - 28h], eax
        lea eax, [ebp - 0dh]
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        and dword ptr [eax], 0
        mov eax, dword ptr [ebp - 18h]
        and dword ptr [eax + 4], 0
        mov eax, dword ptr [ebp - 18h]
        and dword ptr [eax + 8], 0
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 14h]
        add eax, 4
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes F3 0F 10 05 50 4D 89 58: movss xmm0, dword ptr [0x58894d50]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 00: movss dword ptr [eax], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        push 8
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5A 5D 00 00: call 0x58844f39
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
