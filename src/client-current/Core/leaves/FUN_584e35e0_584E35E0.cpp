// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E35E0 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_584e35e0_584E35E0() {
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
        ; Exact mapped bytes E8 ED 31 FA FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x31
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588a1a20h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 50h], 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 05 36 FA FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x36
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 58h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 68h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 64h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 7ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ecx + 78h], edx
        ; Exact mapped bytes E8 C8 D5 36 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xd5
        __asm _emit 0x36
        __asm _emit 0x00
        cdq
        mov ecx, 168h
        idiv ecx
        mov eax, 0b4h
        sub eax, edx
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 74h], eax
        ; Exact mapped bytes E8 AE D5 36 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xd5
        __asm _emit 0x36
        __asm _emit 0x00
        cdq
        mov ecx, 168h
        idiv ecx
        mov eax, 0b4h
        sub eax, edx
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 70h], eax
        ; Exact mapped bytes E8 94 D5 36 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xd5
        __asm _emit 0x36
        __asm _emit 0x00
        cdq
        mov ecx, 96h
        idiv ecx
        add edx, 50h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 6ch], edx
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
