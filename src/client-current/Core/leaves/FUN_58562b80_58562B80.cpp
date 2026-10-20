// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58562B80 .. +0x2F8 bytes.
extern "C" __declspec(naked) void FUN_58562b80_58562B80() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887d63dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
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
        mov dword ptr [ebp - 10h], ecx
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
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4D 3C F2 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x3c
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588a954ch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 81 40 F2 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x40
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 45 18: mov ax, word ptr [ebp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 66 89 42 26: mov word ptr [edx + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 50h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 88h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 150h], 0
        push 4ch
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 98h
        push ecx
        ; Exact mapped bytes E8 DD A1 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xa1
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0f8h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 104h], 55555555h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0f4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0f0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0fch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 100h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 108h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 10ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 110h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 114h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 118h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 11ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 80h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0ech], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 124h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 128h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 130h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 12ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 138h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 13ch], 0ah
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 70h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 74h], 12ch
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 120h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 64h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 84h], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 140h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 144h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 148h], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 14ch], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 68h], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 154h], 55555555h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 158h], 55555555h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 164h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 16ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 170h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 15ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 160h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 168h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 5ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 174h], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 178h], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 58h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 17ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
