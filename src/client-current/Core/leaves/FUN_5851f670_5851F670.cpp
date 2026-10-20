// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851F670 .. +0xA4 bytes.
extern "C" __declspec(naked) void FUN_5851f670_5851F670() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888169dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 10h
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
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B0 6A FE FF: call 0x58506150
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a3d44h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 40h
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 61 3E FE FF: call 0x58503520
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 08 9B FE FF: call 0x585091d0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0A 53 F6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x53
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5F 66 FA FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x66
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 38 0D 00 00: call 0x58520430
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
