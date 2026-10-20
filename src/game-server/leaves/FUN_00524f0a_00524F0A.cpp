// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00524F0A .. +0xE7 bytes.
extern "C" __declspec(naked) void FUN_00524f0a_00524F0A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 E4 84 FC FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 5ch], 0
        push 3b3h
        push 5c8174h
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 64h
        ; Exact mapped bytes E8 9A D6 00 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, eax, 28h
        push eax
        ; Exact mapped bytes E8 E3 80 FC FF: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x80
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 5ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 40h]
        and edx, 2020h
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x524f86
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 64h
        ; Exact mapped bytes E8 50 D6 00 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 46: jge 0x524fdc
        __asm _emit 0x7d
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 69 EE 00 00: call 0x533e0b
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 28h
        mov edx, dword ptr [ebp - 10h]
        add edx, 5ch
        push edx
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 28h
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, eax
        push ecx
        ; Exact mapped bytes E8 61 40 F8 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x40
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 28h
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, eax
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 94 E7 FF FF: call 0x52376e
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB A1: jmp 0x524f7d
        __asm _emit 0xeb
        __asm _emit 0xa1
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 64h
        ; Exact mapped bytes E8 FA D5 00 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 54h], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
