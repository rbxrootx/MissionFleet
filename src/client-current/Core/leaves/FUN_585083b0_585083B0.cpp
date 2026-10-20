// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585083B0 .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_585083b0_585083B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58880775h
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
        mov dword ptr [ebp - 2ch], 0
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 F8 FB FF FF: call 0x58507fe0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 E6 C5 F7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xc5
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 76 0E: jbe 0x5850840c
        __asm _emit 0x76
        __asm _emit 0x0e
        push 588a3aa0h
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 D5 69 FC FF: call 0x584cede0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x69
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 7B 00 00 00: call 0x58508490
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 0C 67 FC FF: call 0x584ceb30
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x67
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 76 14: jbe 0x5850843c
        __asm _emit 0x76
        __asm _emit 0x14
        push 0
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 FE F2 FF FF: call 0x58507730
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 E5 9C FF FF: call 0x58502120
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 CE FB FF: call 0x584c52b0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xce
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 2ch]
        or eax, 1
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 83 EC FF FF: call 0x585070e0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 C4 18 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x18
        __asm _emit 0xfa
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
        pop ecx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 CC 8B 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x8b
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
