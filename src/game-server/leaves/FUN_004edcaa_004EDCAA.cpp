// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EDCAA .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_004edcaa_004EDCAA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c61ah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 23: je 0x4edcf8
        __asm _emit 0x74
        __asm _emit 0x23
        push -1
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 52 21 FE FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4edcf8
        __asm _emit 0x75
        __asm _emit 0x14
        push 198h
        push 5c4bd4h
        ; Exact mapped bytes E8 0D 6D 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x6d
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4edcf8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x4edccf
        __asm _emit 0x75
        __asm _emit 0xd1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 01 32 04 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 A0 32 04 00: call 0x530fba
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 90 31 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 8B FE FF FF: call 0x4edbc0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 F7 FF FF: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        or edx, 1
        mov dword ptr [ebp - 14h], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F6 FA FF FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
