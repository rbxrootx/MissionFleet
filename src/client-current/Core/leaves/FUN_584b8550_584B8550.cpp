// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B8550 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_584b8550_584B8550() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e68dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 28h
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
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 90 F9 FC FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 1ch]
        add edx, 4
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        sub edx, dword ptr [ecx]
        sar edx, 2
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 7B E7 FC FF: call 0x58486d30
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe7
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2ch], edx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 D1 EC FC FF: call 0x584872c0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 51 F8 FC FF: call 0x58487e60
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 82 03 00 00: call 0x584b89a0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
