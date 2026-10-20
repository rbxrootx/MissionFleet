// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58506850 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_58506850_58506850() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888062dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 2ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], ecx
        sub esp, 18h
        mov ecx, esp
        mov dword ptr [ebp - 38h], esp
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 94 31 FA FF: call 0x584a9a20
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x31
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 63 32 00 00: call 0x58509b00
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 64 03 00 00: call 0x58506c20
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 65 34 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x34
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [eax], 588a3b74h
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], edx
        mov dword ptr [ecx + 10h], eax
        mov eax, dword ptr [ebp - 2ch]
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 54 A7 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xa7
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
