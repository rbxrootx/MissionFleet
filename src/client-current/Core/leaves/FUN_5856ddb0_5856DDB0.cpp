// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856DDB0 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_5856ddb0_5856DDB0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588813fdh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0ch
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
        push 7fffh
        push 0
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1F 8A F1 FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x8a
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588a98b0h
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 31: je 0x5856de38
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 B1 E7 F8 FF: call 0x584fc5c0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xe7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 C6 E7 F8 FF: call 0x584fc5e0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 840h
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 81 72 25 00: call 0x587c50b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x72
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 70h], eax
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
