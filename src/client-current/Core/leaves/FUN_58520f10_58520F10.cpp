// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58520F10 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_58520f10_58520F10() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588817b5h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 44h
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
        mov dword ptr [ebp - 4ch], ecx
        push 0
        push 588a4108h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 96 FB FF FF: call 0x58520ae0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        push -1
        push 588a410ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F4 02 00 00: call 0x58521250
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 44h]
        push eax
        push 0
        lea ecx, [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9F B5 FE FF: call 0x5850c510
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 48h]
        sub edx, dword ptr [ebp - 44h]
        sub edx, 1
        push edx
        mov eax, dword ptr [ebp - 44h]
        add eax, 1
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B B5 FE FF: call 0x5850c510
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 50h], edx
        lea eax, [ebp - 28h]
        push eax
        lea ecx, [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 31 10 FE FF: call 0x58501fe0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2A 65 FA FF: call 0x584c74e0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x65
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 6E 8D F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 5F 8D F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x8d
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
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
        ; Exact mapped bytes E8 69 00 31 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x31
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
