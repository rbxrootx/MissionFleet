// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C8C30 .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_586c8c30_586C8C30() {
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
        ; Exact mapped bytes E8 C1 F2 DB FF: call 0x58487f40
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xf2
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 22h
        push eax
        ; Exact mapped bytes E8 CB F7 FE FF: call 0x586b8460
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        sub edx, 22h
        push edx
        ; Exact mapped bytes E8 0A E6 DB FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xe6
        __asm _emit 0xdb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5C F2 DB FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf2
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 4C E2 DB FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe2
        __asm _emit 0xdb
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        sub eax, 22h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 D3 E5 DB FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe5
        __asm _emit 0xdb
        __asm _emit 0xff
        add esp, 4
        push eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 73 E7 DB FF: call 0x58487460
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xe7
        __asm _emit 0xdb
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
