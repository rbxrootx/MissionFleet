// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58848B6C .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_58848b6c_58848B6C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        lea eax, [ebp - 44h]
        push 0
        push 40h
        pop esi
        push esi
        push eax
        ; Exact mapped bytes E8 80 42 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 44h], esi
        lea eax, [ebp - 44h]
        push eax
        ; Exact mapped bytes FF 15 4C 43 89 58: call dword ptr [0x5889434c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test edi, edi
        ; Exact mapped bytes 74 42: je 0x58848be6
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 2ch]
        mov esi, dword ptr [ebp - 3ch]
        sub ecx, esi
        push dword ptr [ebp - 40h]
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 38h]
        sbb eax, edx
        shrd ecx, eax, 14h
        shrd esi, edx, 14h
        shr eax, 14h
        push eax
        mov eax, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        shr edx, 14h
        push edx
        shrd ecx, eax, 14h
        push esi
        shr eax, 14h
        push eax
        push ecx
        push 588f4360h
        push edi
        ; Exact mapped bytes E8 A7 14 FF FF: call 0x5883a08a
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes A3 68 95 96 58: mov dword ptr [0x58969568], eax
        __asm _emit 0xa3
        __asm _emit 0x68
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 30h]
        shrd ecx, eax, 14h
        pop edi
        ; Exact mapped bytes 89 0D 6C 95 96 58: mov dword ptr [0x5896956c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        shr eax, 14h
        pop esi
        ; Exact mapped bytes E8 43 84 FE FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
