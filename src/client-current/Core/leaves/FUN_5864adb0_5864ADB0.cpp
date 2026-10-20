// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5864ADB0 .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_5864adb0_5864ADB0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887dc30h
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
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        add edx, 4
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 41 D1 E3 FF: call 0x58487f40
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xd1
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 54h
        push eax
        ; Exact mapped bytes E8 AB 74 FF FF: call 0x586422c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        sub edx, 54h
        push edx
        ; Exact mapped bytes E8 8A C4 E3 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc4
        __asm _emit 0xe3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DC D0 E3 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xd0
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 CC C0 E3 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xc0
        __asm _emit 0xe3
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        sub eax, 54h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 53 C4 E3 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xc4
        __asm _emit 0xe3
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F3 C5 E3 FF: call 0x58487460
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xc5
        __asm _emit 0xe3
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
