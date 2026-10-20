// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BC170 .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_584bc170_584BC170() {
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
        ; Exact mapped bytes E8 81 BD FC FF: call 0x58487f40
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 808h
        push eax
        ; Exact mapped bytes E8 09 E8 FF FF: call 0x584ba9e0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        sub edx, 808h
        push edx
        ; Exact mapped bytes E8 C5 B0 FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xb0
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 17 BD FC FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 07 AD FC FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xad
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        sub eax, 808h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 8C B0 FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xb0
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2C B2 FC FF: call 0x58487460
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb2
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
