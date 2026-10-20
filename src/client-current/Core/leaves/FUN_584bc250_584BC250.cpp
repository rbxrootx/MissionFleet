// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BC250 .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_584bc250_584BC250() {
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
        ; Exact mapped bytes E8 A1 BC FC FF: call 0x58487f40
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 48h
        push eax
        ; Exact mapped bytes E8 8B E7 FF FF: call 0x584baa40
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        sub edx, 48h
        push edx
        ; Exact mapped bytes E8 EA AF FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xaf
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 3C BC FC FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 2C AC FC FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        sub eax, 48h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 B3 AF FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xaf
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 53 B1 FC FF: call 0x58487460
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb1
        __asm _emit 0xfc
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
