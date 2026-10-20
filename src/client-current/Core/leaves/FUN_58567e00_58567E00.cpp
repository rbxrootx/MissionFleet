// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58567E00 .. +0x9E bytes.
extern "C" __declspec(naked) void FUN_58567e00_58567E00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5C AD FF FF: call 0x58562b80
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 588a96c0h
        mov eax, 0ffffh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 8C 01 00 00: mov word ptr [ecx + 0x18c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2ech], 55555555h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2f0h], 0
        push 1200h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 2fch
        push ecx
        ; Exact mapped bytes E8 A4 4F 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x4f
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        push 0b4h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 238h
        push edx
        ; Exact mapped bytes E8 8B 4F 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2f4h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
