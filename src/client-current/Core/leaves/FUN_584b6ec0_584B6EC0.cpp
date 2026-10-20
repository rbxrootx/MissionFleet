// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B6EC0 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_584b6ec0_584B6EC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        ; Exact mapped bytes E8 EB DA FC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        lea edx, [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov edx, dword ptr [ebp - 20h]
        add edx, 6
        push edx
        mov eax, dword ptr [ebp - 24h]
        add eax, 0eh
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 58 FF FF FF: call 0x584b6e70
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 50h]
        sub esi, dword ptr [ebp - 24h]
        ; Exact mapped bytes 8B 0D 74 5F 96 58: mov ecx, dword ptr [0x58965f74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 DA FC FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xda
        __asm _emit 0xfc
        __asm _emit 0xff
        cdq
        sub eax, edx
        sar eax, 1
        cmp esi, eax
        ; Exact mapped bytes 7D 0B: jge 0x584b6f40
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0C: jmp 0x584b6f4c
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        sub edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        sub edx, 5
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B8 E6 2F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xe6
        __asm _emit 0x2f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 23 F1 FC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
