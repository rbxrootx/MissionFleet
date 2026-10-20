// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A8F20 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_584a8f20_584A8F20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887dfadh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 18h
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
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6C 0A 00 00: call 0x584a99c0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        ; Exact mapped bytes E8 4C E3 FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 3D E3 FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 2E E3 FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        add edx, 10h
        push edx
        ; Exact mapped bytes E8 19 E3 FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 D2 08 00 00: call 0x584a9890
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        lea ecx, [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 EF DD FD FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xdd
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        lea ecx, [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 D9 DD FD FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xdd
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        lea ecx, [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        add eax, 8
        push eax
        ; Exact mapped bytes E8 C3 DD FD FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xdd
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov byte ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov byte ptr [ecx + 0dh], 0
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
