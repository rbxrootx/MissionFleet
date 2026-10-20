// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D6EF .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_0042d6ef_0042D6EF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 40c4ch], 0
        ; Exact mapped bytes 66 C7 45 F0 02 00: mov word ptr [ebp - 0x10], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        sar ecx, 8
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        and edx, 0ffh
        shl edx, 8
        or ecx, edx
        ; Exact mapped bytes 66 89 4D F2: mov word ptr [ebp - 0xe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf2
        mov dword ptr [ebp - 0ch], 0
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D0 FE FF FF: call 0x42d62a
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov esi, esp
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 48h]
        push edx
        ; Exact mapped bytes FF 15 2C BA 68 00: call dword ptr [0x68ba2c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7D 76 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x76
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        pop esi
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 6F 76 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x76
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
